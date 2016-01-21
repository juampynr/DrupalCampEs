<?php

/**
 * Implements hook_preprocess_page().
 */
function dcamp_th_preprocess_node(&$vars) {
  $node = $vars['node'];
  $type = $node->type;
  $vm = $vars['view_mode'];
  $vars['theme_hook_suggestions'][] = 'node__' . $type . '__' . $vm;

  //$content['field_main_image']

  if ($vm == "full" && $type == "news") {
    $vars['no_image'] = FALSE;

    if (empty($node->field_main_image)) {
      $vars['attributes_array']['class'][] = "no-img";
      $vars['no_image'] = TRUE;

    }else{
        $uri = $vars['content']['field_main_image']['#items'][0]['uri'];
        $vars['img_path'] = file_create_url($uri);
        hide($vars['content']['field_main_image']);
    }
  }
}
