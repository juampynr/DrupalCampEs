<?php
/**
 * @file
 * aedcamp_home.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function aedcamp_home_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'patrocinadores_gold';
  $mini->category = '';
  $mini->admin_title = 'Patrocinadores Gold';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'preface' => NULL,
      'content' => NULL,
      'footer' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '88e27755-b1ea-43e4-8cdc-d02cbba3be1a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5179418a-2ee4-4219-8814-567ae17fb555';
    $pane->panel = 'middle';
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
    $pane->uuid = '5179418a-2ee4-4219-8814-567ae17fb555';
    $display->content['new-5179418a-2ee4-4219-8814-567ae17fb555'] = $pane;
    $display->panels['middle'][0] = 'new-5179418a-2ee4-4219-8814-567ae17fb555';
    $pane = new stdClass();
    $pane->pid = 'new-cd80e57e-2364-4fbc-ab43-b0f989ece14a';
    $pane->panel = 'middle';
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
    $pane->uuid = 'cd80e57e-2364-4fbc-ab43-b0f989ece14a';
    $display->content['new-cd80e57e-2364-4fbc-ab43-b0f989ece14a'] = $pane;
    $display->panels['middle'][1] = 'new-cd80e57e-2364-4fbc-ab43-b0f989ece14a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['patrocinadores_gold'] = $mini;

  return $export;
}
