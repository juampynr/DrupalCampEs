<?php
/**
 * @file
 * aed_session_speakers.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function aed_session_speakers_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'aed_sessions';
  $page->task = 'page';
  $page->admin_title = 'AED Sessions';
  $page->admin_description = 'This panel shows all the sessions published on the web';
  $page->path = 'node/%nid/sessions';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'nid' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_aed_sessions_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'aed_sessions';
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
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Sesiones propuestas';
  $display->uuid = '71aa6435-336c-4de5-9b83-97bee511051a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7f8d22ba-7d3e-416e-9496-dc9a9cd722e3';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'aed_sessions-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7f8d22ba-7d3e-416e-9496-dc9a9cd722e3';
    $display->content['new-7f8d22ba-7d3e-416e-9496-dc9a9cd722e3'] = $pane;
    $display->panels['center'][0] = 'new-7f8d22ba-7d3e-416e-9496-dc9a9cd722e3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['aed_sessions'] = $page;

  return $pages;

}
