<?php
/**
 * @file
 * fb_theme_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function fb_theme_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_fb_settings';
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
    'omega_toggle_front_page_content' => 0,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 0,
    'favicon_path' => 'sites/default/files/favicon.ico',
    'favicon_upload' => '',
    'omega_enable_warning' => '1',
    'omega_toggle_extension_layouts' => 0,
    'omega_layout' => '',
    'omega_toggle_extension_development' => 0,
    'omega_enable_export_reminder' => '0',
    'omega_rebuild_theme_registry' => '0',
    'omega_rebuild_aggregates' => '0',
    'omega_browser_width_indicator' => '0',
    'omega_livereload' => '0',
    'omega_livereload_script' => 'http://localhost:35729/livereload.js',
    'omega_livereload_host' => 'localhost',
    'omega_livereload_port' => '35729',
    'omega_demo_regions' => '0',
    'omega_demo_regions_list' => '',
    'omega_toggle_extension_compatibility' => 1,
    'omega_conditional_classes_html' => 1,
    'omega_apple_touch' => 1,
    'omega_cleartype' => 1,
    'omega_handheld_friendly' => 1,
    'omega_mobile_optimized' => 1,
    'omega_viewport' => 1,
    'omega_viewport_initial_scale' => '_default',
    'omega_viewport_user_scaleable' => 1,
    'omega_viewport_minimum_scale' => '_default',
    'omega_viewport_maximum_scale' => '_default',
    'omega_chrome_edge' => 1,
    'omega_internet_explorer_support' => '_none',
    'omega_toggle_extension_assets' => 1,
    'omega_js_footer' => array(),
    'omega_css_exclude' => array(),
    'omega_js_exclude' => array(),
    'omega_libraries' => array(
      'selectivizr' => array(
        'status' => 1,
        'variant' => '_default',
      ),
      'respond' => array(
        'status' => 1,
        'variant' => '_default',
      ),
      'pie' => array(
        'status' => 1,
        'variant' => '_default',
        'selectors' => array(),
      ),
      'html5shiv' => array(
        'status' => 1,
        'variant' => '_default',
      ),
    ),
    'jquery_update_jquery_version' => '',
    'favicon_mimetype' => 'image/vnd.microsoft.icon',
  );
  $export['theme_fb_settings'] = $strongarm;

  return $export;
}
