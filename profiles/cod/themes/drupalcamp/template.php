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

  // Add information about the number of sidebars.
  if (!empty($vars['page']['sidebar_first']) && !empty($vars['page']['sidebar_second'])) {
    $vars['content_column_class'] = ' class="col-sm-6"';
  }
  elseif (!empty($vars['page']['sidebar_first']) || !empty($vars['page']['sidebar_second'])) {
    $vars['content_column_class'] = ' class="col-sm-8"';
  }
  else {
    $vars['content_column_class'] = ' class="col-sm-12"';
  }
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

/**
 * Overrides theme_menu_link().
 */
function drupalcamp_menu_link(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    // Prevent dropdown functions from being added to management menu so it
    // does not affect the navbar module.
    if (($element['#original_link']['menu_name'] == 'management') && (module_exists('navbar'))) {
      $sub_menu = drupal_render($element['#below']);
    }
    elseif ((!empty($element['#original_link']['depth'])) && ($element['#original_link']['depth'] >= 1)) {
      // Add our own wrapper.
      unset($element['#below']['#theme_wrappers']);
      if ($element['#original_link']['depth'] == 1) {
        $sub_menu = '<ul class="dropdown-menu">' . drupal_render($element['#below']) . '</ul>';
      }
      else {
        $sub_menu = '<ul class="dropdown-submenu">' . drupal_render($element['#below']) . '</ul>';
      }
      // Generate as standard dropdown.
      $element['#title'] .= ' <span class="caret"></span>';
      $element['#attributes']['class'][] = 'dropdown';
      $element['#localized_options']['html'] = TRUE;

      // Set dropdown trigger element to # to prevent inadvertant page loading
      // when a submenu link is clicked.

      // $element['#localized_options']['attributes']['data-target'] = '#';
      $element['#localized_options']['attributes']['class'][] = 'dropdown-toggle';
      // $element['#localized_options']['attributes']['data-toggle'] = 'dropdown';
    }
  }
  // On primary navigation menu, class 'active' is not set on active menu item.
  // @see https://drupal.org/node/1896674
  if (($element['#href'] == $_GET['q'] || ($element['#href'] == '<front>' && drupal_is_front_page())) && (empty($element['#localized_options']['language']))) {
    $element['#attributes']['class'][] = 'active';
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}
