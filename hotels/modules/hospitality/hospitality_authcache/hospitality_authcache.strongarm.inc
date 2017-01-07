<?php
/**
 * @file
 * hospitality_authcache.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function hospitality_authcache_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'authcache_http200';
  $strongarm->value = 1;
  $export['authcache_http200'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'authcache_mimetype';
  $strongarm->value = 'text/html
text/javascript
text/plain
application/xml
application/atom+xml
';
  $export['authcache_mimetype'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'authcache_noajax';
  $strongarm->value = 1;
  $export['authcache_noajax'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'authcache_pagecaching';
  $strongarm->value = array(
    0 => array(
      'option' => '0',
      'pages' => 'user*
node/add/*
node/*/edit
node/*/track
tracker*
comment/edit*
civicrm*
cart*
checkout*
system/files/*
system/temporary*
file/ajax/*
js/admin_menu/cache/*
',
      'noadmin' => 1,
      'roles' => array(
        'custom' => '1',
        'roles' => array(
          1 => '1',
          2 => '2',
          3 => '3',
          7 => '7',
          4 => '4',
          10 => '10',
        ),
      ),
    ),
  );
  $export['authcache_pagecaching'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'authcache_roles';
  $strongarm->value = array(
    1 => '1',
    2 => '2',
    3 => '3',
    7 => '7',
    4 => '4',
    10 => '10',
  );
  $export['authcache_roles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache';
  $strongarm->value = 0;
  $export['cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_debug';
  $strongarm->value = '0';
  $export['expire_debug'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_file_actions';
  $strongarm->value = array(
    1 => '1',
    2 => '2',
  );
  $export['expire_file_actions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_file_custom';
  $strongarm->value = 0;
  $export['expire_file_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_file_custom_pages';
  $strongarm->value = '';
  $export['expire_file_custom_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_file_file';
  $strongarm->value = 1;
  $export['expire_file_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_file_front_page';
  $strongarm->value = 1;
  $export['expire_file_front_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_include_base_url';
  $strongarm->value = 0;
  $export['expire_include_base_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_menu_link_actions';
  $strongarm->value = array(
    1 => '1',
    2 => '2',
    3 => '3',
  );
  $export['expire_menu_link_actions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_menu_link_override_menus';
  $strongarm->value = array(
    'devel' => '0',
    'menu-footer-menu' => '0',
    'main-menu' => '0',
    'management' => '0',
    'navigation' => '0',
    'menu-quick-links-menu' => '0',
    'user-menu' => '0',
    'menu-header-menu' => '0',
  );
  $export['expire_menu_link_override_menus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_actions';
  $strongarm->value = array(
    1 => '1',
    2 => '2',
    3 => '3',
  );
  $export['expire_node_actions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_custom';
  $strongarm->value = 0;
  $export['expire_node_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_custom_pages';
  $strongarm->value = '';
  $export['expire_node_custom_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_front_page';
  $strongarm->value = 0;
  $export['expire_node_front_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_node_page';
  $strongarm->value = 1;
  $export['expire_node_node_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_reference_pages';
  $strongarm->value = 0;
  $export['expire_node_reference_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_term_pages';
  $strongarm->value = 0;
  $export['expire_node_term_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_status';
  $strongarm->value = '2';
  $export['expire_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_user_actions';
  $strongarm->value = array(
    1 => '1',
    2 => '2',
    3 => '3',
    4 => '4',
  );
  $export['expire_user_actions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_user_custom';
  $strongarm->value = 0;
  $export['expire_user_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_user_custom_pages';
  $strongarm->value = '';
  $export['expire_user_custom_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_user_front_page';
  $strongarm->value = 0;
  $export['expire_user_front_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_user_reference_pages';
  $strongarm->value = 0;
  $export['expire_user_reference_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_user_term_pages';
  $strongarm->value = 0;
  $export['expire_user_term_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_user_user_page';
  $strongarm->value = 1;
  $export['expire_user_user_page'] = $strongarm;

  return $export;
}
