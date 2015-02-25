<?php
/**
 * @file
 * aedcamp_home.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function aedcamp_home_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'home';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'hydra';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'preface' => NULL,
      'left_content' => NULL,
      'top_right_content' => NULL,
      'bottom_right_content' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '803cb223-afc8-46c6-97fb-d01c7ef22506';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b9a341e7-f67a-4aeb-b883-5f1c53f3f6bc';
    $pane->panel = 'bottom_right_content';
    $pane->type = 'block';
    $pane->subtype = 'bean-iberia_promotion';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b9a341e7-f67a-4aeb-b883-5f1c53f3f6bc';
    $display->content['new-b9a341e7-f67a-4aeb-b883-5f1c53f3f6bc'] = $pane;
    $display->panels['bottom_right_content'][0] = 'new-b9a341e7-f67a-4aeb-b883-5f1c53f3f6bc';
    $pane = new stdClass();
    $pane->pid = 'new-003478b9-06c0-47a4-a795-9a7b452693a9';
    $pane->panel = 'bottom_right_content';
    $pane->type = 'block';
    $pane->subtype = 'bean-renfe_promotion';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '003478b9-06c0-47a4-a795-9a7b452693a9';
    $display->content['new-003478b9-06c0-47a4-a795-9a7b452693a9'] = $pane;
    $display->panels['bottom_right_content'][1] = 'new-003478b9-06c0-47a4-a795-9a7b452693a9';
    $pane = new stdClass();
    $pane->pid = 'new-5ccf094c-dfec-4cef-9ba1-8bd1b2b8ec76';
    $pane->panel = 'left_content';
    $pane->type = 'views';
    $pane->subtype = 'cod_news';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '3',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => 'all',
      'url' => '',
      'display' => 'multi_news_block',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5ccf094c-dfec-4cef-9ba1-8bd1b2b8ec76';
    $display->content['new-5ccf094c-dfec-4cef-9ba1-8bd1b2b8ec76'] = $pane;
    $display->panels['left_content'][0] = 'new-5ccf094c-dfec-4cef-9ba1-8bd1b2b8ec76';
    $pane = new stdClass();
    $pane->pid = 'new-b00e4947-6f31-4111-a879-79f5572d6587';
    $pane->panel = 'top_right_content';
    $pane->type = 'search_form';
    $pane->subtype = 'search_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'node',
      'form' => 'simple',
      'path_type' => 'default',
      'path' => '',
      'override_prompt' => 0,
      'prompt' => '',
      'context' => 'empty',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b00e4947-6f31-4111-a879-79f5572d6587';
    $display->content['new-b00e4947-6f31-4111-a879-79f5572d6587'] = $pane;
    $display->panels['top_right_content'][0] = 'new-b00e4947-6f31-4111-a879-79f5572d6587';
    $pane = new stdClass();
    $pane->pid = 'new-3eb6221a-1166-49b3-a700-8fc996a2a882';
    $pane->panel = 'top_right_content';
    $pane->type = 'block';
    $pane->subtype = 'aedcamp-hashtag';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3eb6221a-1166-49b3-a700-8fc996a2a882';
    $display->content['new-3eb6221a-1166-49b3-a700-8fc996a2a882'] = $pane;
    $display->panels['top_right_content'][1] = 'new-3eb6221a-1166-49b3-a700-8fc996a2a882';
    $pane = new stdClass();
    $pane->pid = 'new-a919f829-d09b-4aec-aabc-2e3cb90aa59a';
    $pane->panel = 'top_right_content';
    $pane->type = 'views';
    $pane->subtype = 'aed_sponsors';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '1',
      'url' => '',
      'display' => 'block',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a919f829-d09b-4aec-aabc-2e3cb90aa59a';
    $display->content['new-a919f829-d09b-4aec-aabc-2e3cb90aa59a'] = $pane;
    $display->panels['top_right_content'][2] = 'new-a919f829-d09b-4aec-aabc-2e3cb90aa59a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
