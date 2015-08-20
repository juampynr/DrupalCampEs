<?php

/**
 * Implements hook_preprocess_page().
 */
function dcamp_th_preprocess_landing_layout(&$variables) {
  $variables['attributes_array']['id'] = 'landing-layout';
}
