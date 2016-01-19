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
    'css_id' => 'panel-home',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'omega:landing';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'preface' => NULL,
      'left_content' => NULL,
      'top_right_content' => NULL,
      'bottom_right_content' => NULL,
      'footer' => NULL,
      'content' => NULL,
      'one' => NULL,
      'two' => NULL,
      'three' => NULL,
      'four' => NULL,
      'five' => NULL,
      'six' => NULL,
      'seven' => NULL,
      'eight' => NULL,
      'nine' => NULL,
      'ten' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '803cb223-afc8-46c6-97fb-d01c7ef22506';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c9ee2ed4-47aa-4743-b45b-b71c21ef8b94';
    $pane->panel = 'five';
    $pane->type = 'views';
    $pane->subtype = 'featured_speakers_home';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c9ee2ed4-47aa-4743-b45b-b71c21ef8b94';
    $display->content['new-c9ee2ed4-47aa-4743-b45b-b71c21ef8b94'] = $pane;
    $display->panels['five'][0] = 'new-c9ee2ed4-47aa-4743-b45b-b71c21ef8b94';
    $pane = new stdClass();
    $pane->pid = 'new-00b3ae3e-22bf-4c55-a1ba-50ab129ae69f';
    $pane->panel = 'five';
    $pane->type = 'views';
    $pane->subtype = 'news_home';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '00b3ae3e-22bf-4c55-a1ba-50ab129ae69f';
    $display->content['new-00b3ae3e-22bf-4c55-a1ba-50ab129ae69f'] = $pane;
    $display->panels['five'][1] = 'new-00b3ae3e-22bf-4c55-a1ba-50ab129ae69f';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
