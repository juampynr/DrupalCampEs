<?php
/**
 * @file
 * aedcamp_image_block.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function aedcamp_image_block_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'view any images bean'.
  $permissions['view any images bean'] = array(
    'name' => 'view any images bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
