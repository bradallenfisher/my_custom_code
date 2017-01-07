<?php
/**
 * @file
 * fb_menu_block_header_menu_mobile_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function fb_menu_block_header_menu_mobile_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'header_menu_mobile';
  $context->description = '';
  $context->tag = 'Header Menu Mobile';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-fb_header_menu_mobile' => array(
          'module' => 'menu_block',
          'delta' => 'fb_header_menu_mobile',
          'region' => 'mobile_menu',
          'weight' => '-33',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Header Menu Mobile');
  $export['header_menu_mobile'] = $context;

  return $export;
}
