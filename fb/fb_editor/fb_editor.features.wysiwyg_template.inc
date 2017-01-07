<?php
/**
 * @file
 * fb_editor.features.wysiwyg_template.inc
 */

/**
 * Implements hook_wysiwyg_template_default_templates().
 */
function fb_editor_wysiwyg_template_default_templates() {
  $templates = array();
  $templates['simple_button'] = array(
    'title' => 'Simple Button',
    'description' => 'A left aligned button',
    'weight' => 0,
    'fid' => 0,
    'body' => '<p><a class="simpleButton" href="/">Simple Button</a></p>
',
    'format' => 'textbook_editor',
    'name' => 'simple_button',
    'content_types' => array(),
  );
  return $templates;
}
