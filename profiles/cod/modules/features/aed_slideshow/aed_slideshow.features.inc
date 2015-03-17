<?php
/**
 * @file
 * aed_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function aed_slideshow_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
}
