<?php
/**
 * @file
 * fb_editor.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function fb_editor_filter_default_formats() {
  $formats = array();

  // Exported format: FB Editor.
  $formats['textbook_editor'] = array(
    'format' => 'textbook_editor',
    'name' => 'FB Editor',
    'cache' => 1,
    'status' => 1,
    'weight' => -10,
    'filters' => array(
      'ckeditor_link_filter' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(),
      ),
      'transliteration' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(
          'no_known_transliteration' => '?',
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(),
      ),
      'wysiwyg_template_cleanup' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
