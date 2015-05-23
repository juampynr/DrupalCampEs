<?php
/**
 * @file
 * aed_bofs.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function aed_bofs_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'aed_bofs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'AED_bofs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'BOFs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'más';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplicar';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordenar por';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Contenido: Fecha */
  $handler->display->display_options['fields']['field_fecha']['id'] = 'field_fecha';
  $handler->display->display_options['fields']['field_fecha']['table'] = 'field_data_field_fecha';
  $handler->display->display_options['fields']['field_fecha']['field'] = 'field_fecha';
  $handler->display->display_options['fields']['field_fecha']['label'] = '';
  $handler->display->display_options['fields']['field_fecha']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_fecha']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Campo: Contenido: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Criterio de ordenación: Contenido: Fecha (field_fecha) */
  $handler->display->display_options['sorts']['field_fecha_value']['id'] = 'field_fecha_value';
  $handler->display->display_options['sorts']['field_fecha_value']['table'] = 'field_data_field_fecha';
  $handler->display->display_options['sorts']['field_fecha_value']['field'] = 'field_fecha_value';
  $handler->display->display_options['sorts']['field_fecha_value']['expose']['label'] = 'Fecha (field_fecha)';
  /* Criterios de filtrado: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterios de filtrado: Contenido: Fecha (field_fecha) */
  $handler->display->display_options['filters']['field_fecha_value']['id'] = 'field_fecha_value';
  $handler->display->display_options['filters']['field_fecha_value']['table'] = 'field_data_field_fecha';
  $handler->display->display_options['filters']['field_fecha_value']['field'] = 'field_fecha_value';
  $handler->display->display_options['filters']['field_fecha_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_fecha_value']['expose']['operator_id'] = 'field_fecha_value_op';
  $handler->display->display_options['filters']['field_fecha_value']['expose']['label'] = 'Fecha (field_fecha)';
  $handler->display->display_options['filters']['field_fecha_value']['expose']['operator'] = 'field_fecha_value_op';
  $handler->display->display_options['filters']['field_fecha_value']['expose']['identifier'] = 'field_fecha_value';
  $handler->display->display_options['filters']['field_fecha_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    3 => 0,
    7 => 0,
    8 => 0,
    4 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_fecha_value']['form_type'] = 'date_popup';
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bofs' => 'bofs',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'bofs';
  $translatables['aed_bofs'] = array(
    t('Master'),
    t('BOFs'),
    t('más'),
    t('Aplicar'),
    t('Reiniciar'),
    t('Ordenar por'),
    t('Asc'),
    t('Desc'),
    t('Fecha (field_fecha)'),
    t('Page'),
  );
  $export['aed_bofs'] = $view;

  return $export;
}
