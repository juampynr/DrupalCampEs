<?php
/**
 * @file
 * aed_slideshow.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function aed_slideshow_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-slider_block-field_slider_images'
  $field_instances['bean-slider_block-field_slider_images'] = array(
    'bundle' => 'slider_block',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'flexslider_fields',
        'settings' => array(
          'caption' => 0,
          'image_style' => 'flexslider_full',
          'optionset' => 'default',
        ),
        'type' => 'flexslider',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_slider_images',
    'label' => 'Slider images',
    'required' => 1,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Slider images');

  return $field_instances;
}
