
(function($) {

  /**
   * Global, extendable functions.
   */

  Drupal.fbMediaBrowser || (Drupal.fbMediaBrowser = {});

  // The label form the button that opens the Views grid.
  Drupal.fbMediaBrowser.openButtonLabel = Drupal.t('Choose file');

  // Create the button that opens the Views grid.
  Drupal.fbMediaBrowser.createOpenButton = function($div) {
    var
      $textfield = $div.find('.form-type-textfield .form-text'),
      $button = $('<input>')
        .attr('type', 'button')
        .attr('style', 'margin-left: 0.25em;')
        .addClass('fb-media-browser-open-link')
        .addClass('form-submit')
        .val(Drupal.fbMediaBrowser.openButtonLabel);

    $button.click(function(e) {
      e.preventDefault();

      var
        id = $textfield.attr('id'),
        field = $textfield.data('fb-field'),
        path = Drupal.settings.basePath + 'fb_media_image_library?filefield&iframe&fb_field=' + field + '#' + id;

      Drupal.fbMediaBrowser.openModal(path, {
        "type": 'filefield',
        "field": field,
      });
    });

    return $button;
  };

  // Position/insert the button that opens the Views grid.
  Drupal.fbMediaBrowser.insertOpenButton = function($div, $button) {
    $div
      // Mark this instance as processed.
      .addClass('fb-media-browser-processed')
      // Insert button right after FileField Sources' "Select" button.
      .find(Drupal.settings.fbMediaBrowser.submitButtonSelector).after($button);
  };

  // Extend dialog options.
  Drupal.fbMediaBrowser.dialogOptions = function(options, context) {
    return options;
  };

  // The handler that opens the Views grid in a modal.
  Drupal.fbMediaBrowser.openModal = function(path, context) {
    // Prep options.
    var
      height = 0.8 * document.documentElement.clientHeight,
      width = 0.8 * document.documentElement.clientWidth,
      cancelText = Drupal.t('Cancel'),
      buttons = {};
    buttons[cancelText] = function(e) {
      var $modal = Drupal.fbMediaBrowser.$modal;
      $modal.dialog('close');
    };

    // Create and extend options.
    var options = {
      "dialogClass": 'fb-modal',
      "width": width,
      "height": height,
      "draggable": false,
      "modal": true,
      "overlay": {
        "backgroundColor": '#000000',
        "opacity": 0.4,
      },
      "resizable": false,
      "buttons": buttons,
      "titlebar": false,
    };
    options = Drupal.fbMediaBrowser.dialogOptions(options, context);

    // Create modal.
    var $modal = $('<div><iframe width="99%" height="99%" src="' + path + '"></iframe></div>');
    $('body').append($modal);
    $modal.dialog(options);

    // Remove title bar and reset height.
    if (!options.titlebar) {
      $modal.closest(".ui-dialog").find(".ui-dialog-titlebar").remove();
      $modal.dialog('option', 'height', height);
    }

    return Drupal.fbMediaBrowser.$modal = $modal;
  };

  // To extract a file <td>'s meta info from Drupal.settings.
  Drupal.fbMediaBrowser.extractTDMetaInfo = function($td) {
    var
      td = $td[0],
      col = td.cellIndex,
      tr = td.parentNode,
      row = tr.sectionRowIndex,
      url = Drupal.settings.fb_media_browser.results[row][col];

    return url;
  };

  // After clicking an image in the Views grid.
  Drupal.fbMediaBrowser.onSelect = function($td, $textfield, $submit, owner) {
    var
      file = Drupal.fbMediaBrowser.extractTDMetaInfo($td),
      name = file[0];
      name = name.replace('https://', '');

    // Set value.
    $textfield.val(name).removeClass('hint');

    // Submit field.
    $submit.trigger('mousedown');

    // Close modal.
    var $modal = owner.Drupal.fbMediaBrowser.$modal;
    $modal.dialog('close');
  };

  // After clicking an image in the Views grid.
  Drupal.fbMediaBrowser.onEmbed = function($td, editor, owner) {
    var file = Drupal.fbMediaBrowser.extractTDMetaInfo($td);
    if (!file) {
      return;
    }

    var format = $td.closest('.view').find('#edit-fb-formatter').val();
    if (!format) {
      $td.closest('.view').find('.form-item-fb-formatter').addClass('error').find('select').addClass('error');
      return;
    }

    var img = Drupal.fbMediaBrowser.ckeditorEmbeddable(file, format, editor, owner);
    if (!img) {
      return;
    }

    // Insert img.
    editor.insertElement(img);

    // Close modal.
    var $modal = owner.Drupal.fbMediaBrowser.$modal;
    $modal.dialog('close');
  };

  // To create a ckeditor image element from a file.
  Drupal.fbMediaBrowser.ckeditorEmbeddable = function(file, format, editor, owner) {
    // 'Parse' format.
    var
      args = format.split(':'),
      format = args.shift();

    // Existing formatter. Maybe custom.
    var formatters = Drupal.fbMediaBrowser.ckeditorFormatters;
    if (formatters[format]) {
      return formatters[format](file, args, editor, owner);
    }

    // Default (image style) formatter.
    return formatters.style(file, format, editor, owner);
  };

  // The default ckeditor element formatters.
  Drupal.fbMediaBrowser.ckeditorFormatters = {
    "style": function(file, style, editor, owner) {
      var
        src = file[1].replace(/\/IMAGESTYLE\//, '/' + style + '/'),
        img = document.createElement('img'),
        element = new owner.CKEDITOR.dom.element(img);
      img.src = src;
      img.alt = file[2];

      return element;
    },
    "original": function(file, args, editor, owner) {
      var
        img = document.createElement('img'),
        element = new owner.CKEDITOR.dom.element(img);
      img.src = file[3];
      img.alt = file[2];

      return element;
    },
    "link": function(file, args, editor, owner) {
      var
        style = args[0] || 'original',
        href = style == 'original' ? file[3] : file[1].replace(/\/IMAGESTYLE\//, '/' + style + '/'),
        a = document.createElement('a'),
        element = new owner.CKEDITOR.dom.element(a);

      var selection = editor.getSelection();
      if (selection.getSelectedElement()) {
        a.appendChild(selection.getSelectedElement().$);
      }
      else if (selection.getSelectedText()) {
        a.textContent = selection.getSelectedText();
      }
      else {
        a.textContent = $.trim(file[2]);
      }
      a.href = href;

      return element;
    }
  };



  /**
   * Define global behavior.
   */

  Drupal.behaviors.fbMediaBrowser = {
    attach: function(context, settings) {
      /**
       * Picker page.
       */

      // Get grid TD's.
      var owner = opener || parent;
      if (location.hash && owner && owner != window) {
        var
          $context = $(context),
          tds = $context.is('.fb-media-browser') ? $context.find('td') : $context.find('.fb-media-browser td');
        tds.click(function(e) {
          // CKEditor context: insert image?
          if (location.hash == '#modal') {
            var
              $td = $(this),
              editor = owner.Drupal.fbMediaBrowser.editor;
            Drupal.fbMediaBrowser.onEmbed($td, editor, owner);
          }
          // Popup (file field) context: set value & submit.
          else {
            var
              $td = $(this),
              $textfield = owner.jQuery(location.hash),
              $submit = $textfield
                .closest('.filefield-source-remote')
                .find('input[type="submit"]');

            Drupal.fbMediaBrowser.onSelect($td, $textfield, $submit, owner);
          }
        });
      }



      /**
       * Node edit form.
       */

      // Get file fields.
      var fileFields = $('div.filefield-source-remote:not(.fb-media-browser-processed)', context);
      fileFields.each(function(i, div) {
        var $div = $(div);

        // Create link to open popup.
        var $button = Drupal.fbMediaBrowser.createOpenButton($div);

        // Add link to submit button area.
        Drupal.fbMediaBrowser.insertOpenButton($div, $button);
      });
    }
  };

})(jQuery);
