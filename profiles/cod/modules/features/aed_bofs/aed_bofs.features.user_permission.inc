<?php
/**
 * @file
 * aed_bofs.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function aed_bofs_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node bofs defaults'.
  $permissions['administer panelizer node bofs defaults'] = array(
    'name' => 'administer panelizer node bofs defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create bofs content'.
  $permissions['create bofs content'] = array(
    'name' => 'create bofs content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any bofs content'.
  $permissions['delete any bofs content'] = array(
    'name' => 'delete any bofs content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own bofs content'.
  $permissions['delete own bofs content'] = array(
    'name' => 'delete own bofs content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any bofs content'.
  $permissions['edit any bofs content'] = array(
    'name' => 'edit any bofs content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own bofs content'.
  $permissions['edit own bofs content'] = array(
    'name' => 'edit own bofs content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
