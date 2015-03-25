<?php
/**
 * @file
 * aed_collaborators.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function aed_collaborators_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function aed_collaborators_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function aed_collaborators_node_info() {
  $items = array(
    'collaborator' => array(
      'name' => t('collaborator'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
