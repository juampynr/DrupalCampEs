<?php
/**
 * @file
 * commerce_billy.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function commerce_billy_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'commerce_order-commerce_order-field_commerce_billy_cancel_date'
  $field_instances['commerce_order-commerce_order-field_commerce_billy_cancel_date'] = array(
    'bundle' => 'commerce_order',
    'deleted' => 0,
    'description' => 'Internally set once the order is cancelled.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => -15,
      ),
    ),
    'entity_type' => 'commerce_order',
    'field_name' => 'field_commerce_billy_cancel_date',
    'label' => 'Cancel date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd.m.Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'commerce_order-commerce_order-field_commerce_billy_i_date'
  $field_instances['commerce_order-commerce_order-field_commerce_billy_i_date'] = array(
    'bundle' => 'commerce_order',
    'deleted' => 0,
    'description' => 'Internally set once the order is invoiced.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => -20,
      ),
    ),
    'entity_type' => 'commerce_order',
    'field_name' => 'field_commerce_billy_i_date',
    'label' => 'Invoice date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd.m.Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 42,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Cancel date');
  t('Internally set once the order is cancelled.');
  t('Internally set once the order is invoiced.');
  t('Invoice date');

  return $field_instances;
}
