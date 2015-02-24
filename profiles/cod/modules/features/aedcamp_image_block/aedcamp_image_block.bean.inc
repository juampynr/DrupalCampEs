<?php
/**
 * @file
 * aedcamp_image_block.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function aedcamp_image_block_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'images';
  $bean_type->label = 'Images';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['images'] = $bean_type;

  return $export;
}
