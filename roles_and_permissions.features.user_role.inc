<?php
/**
 * @file
 * roles_and_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function roles_and_permissions_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: collection admin.
  $roles['collection admin'] = array(
    'name' => 'collection admin',
    'weight' => 3,
  );

  // Exported role: intern.
  $roles['intern'] = array(
    'name' => 'intern',
    'weight' => 5,
  );

  return $roles;
}
