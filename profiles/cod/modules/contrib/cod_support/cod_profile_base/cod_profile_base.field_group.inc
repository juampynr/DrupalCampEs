<?php
/**
 * @file
 * cod_profile_base.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cod_profile_base_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info_wrapper|user|user|full';
  $field_group->group_name = 'group_info_wrapper';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'info-wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'field_profile_first',
      1 => 'field_profile_last',
      2 => 'field_profile_org',
      3 => 'field_nick',
      4 => 'group_social',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'info-wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-info-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_info_wrapper|user|user|full'] = $field_group;

  return $export;
}
