<?php

/**
 * Implements hook_preprocess_page().
 */
function dcamp_th_preprocess_node(&$variables) {
  $variables['theme_hook_suggestions'][] = 'node__' . $variables['node']->type . '__' . $variables['view_mode'];
}
