<?php
/**
 * @file
 * fb_menu_block_header_menu_mobile_context.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fb_menu_block_header_menu_mobile_context_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
