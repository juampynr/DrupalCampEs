<?php
/**
 * @file
 * aedcamp_image_block.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function aedcamp_image_block_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
}
