<?php
/**
 * @file
 * aed_slideshow.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function aed_slideshow_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'slider_block';
  $bean_type->label = 'Slider block';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['slider_block'] = $bean_type;

  return $export;
}
