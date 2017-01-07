<?php
/**
 * @file
 * fb_admin_theme_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function fb_admin_theme_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_seven_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 0,
    'favicon_path' => 'sites/default/files/favicon.ico',
    'favicon_upload' => '',
    'jquery_update_jquery_version' => 'default',
    'favicon_mimetype' => 'image/vnd.microsoft.icon',
  );
  $export['theme_seven_settings'] = $strongarm;

  return $export;
}
