<?php

/**
 * @file
 * template.php
 */

/**
 * Implements theme_process_html().
 */
function drupalcamp_preprocess_html(&$vars) {
  $headers = drupal_get_http_header();

  if (isset($headers['status'])) {
    $vars['classes_array'][] = 'error-page';
    if ($headers['status'] == '404 Not Found') {
      $vars['classes_array'][] = 'error-page-404';
    }
    elseif ($headers['status'] == '403 Forbidden') {
      $vars['classes_array'][] = 'error-page-403';
    }
  }
}

/**
 * Implements theme_preprocess_page().
 */
function drupalcamp_preprocess_page(&$vars) {
  $vars['navbar_classes'] = 'navbar';
}

/**
 * Implements theme_image().
 */
function drupalcamp_image(&$variables) {
  $attributes = $variables['attributes'];

  // Add responsive class from bootstrap.
  $attributes['class'][] = 'img-responsive';

  $attributes['src'] = file_create_url($variables['path']);

  foreach (array('width', 'height', 'alt', 'title') as $key) {

    if (isset($variables[$key])) {
      $attributes[$key] = $variables[$key];
    }
  }

  return '<img' . drupal_attributes($attributes) . ' />';
}
