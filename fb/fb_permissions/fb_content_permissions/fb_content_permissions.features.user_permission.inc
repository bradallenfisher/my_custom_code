<?php
/**
 * @file
 * fb_content_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fb_content_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
      'power user' => 'power user',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
      'power user' => 'power user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
      'power user' => 'power user',
    ),
    'module' => 'admin_menu',
  );

  return $permissions;
}
