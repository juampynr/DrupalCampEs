<?php
/**
 * @file
 * aed_collaborators.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function aed_collaborators_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'credits_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Credits page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Credits page';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'más';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplicar';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordenar por';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primera';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relación: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_user_collaborator_target_id']['id'] = 'field_user_collaborator_target_id';
  $handler->display->display_options['relationships']['field_user_collaborator_target_id']['table'] = 'field_data_field_user_collaborator';
  $handler->display->display_options['relationships']['field_user_collaborator_target_id']['field'] = 'field_user_collaborator_target_id';
  $handler->display->display_options['relationships']['field_user_collaborator_target_id']['required'] = TRUE;
  /* Campo: Usuario: Imagen */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'field_user_collaborator_target_id';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'medium';
  /* Campo: Usuario: First name */
  $handler->display->display_options['fields']['field_profile_first']['id'] = 'field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['table'] = 'field_data_field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['field'] = 'field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['relationship'] = 'field_user_collaborator_target_id';
  $handler->display->display_options['fields']['field_profile_first']['label'] = '';
  $handler->display->display_options['fields']['field_profile_first']['element_label_colon'] = FALSE;
  /* Campo: Usuario: Last name */
  $handler->display->display_options['fields']['field_profile_last']['id'] = 'field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['table'] = 'field_data_field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['field'] = 'field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['relationship'] = 'field_user_collaborator_target_id';
  $handler->display->display_options['fields']['field_profile_last']['label'] = '';
  $handler->display->display_options['fields']['field_profile_last']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Empresa link */
  $handler->display->display_options['fields']['field_company_link']['id'] = 'field_company_link';
  $handler->display->display_options['fields']['field_company_link']['table'] = 'field_data_field_company_link';
  $handler->display->display_options['fields']['field_company_link']['field'] = 'field_company_link';
  $handler->display->display_options['fields']['field_company_link']['label'] = '';
  $handler->display->display_options['fields']['field_company_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_company_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_company_link']['click_sort_column'] = 'url';
  /* Campo: Contenido: Logo empresa */
  $handler->display->display_options['fields']['field_company_logo']['id'] = 'field_company_logo';
  $handler->display->display_options['fields']['field_company_logo']['table'] = 'field_data_field_company_logo';
  $handler->display->display_options['fields']['field_company_logo']['field'] = 'field_company_logo';
  $handler->display->display_options['fields']['field_company_logo']['label'] = '';
  $handler->display->display_options['fields']['field_company_logo']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_company_logo']['alter']['path'] = '[field_company_link]';
  $handler->display->display_options['fields']['field_company_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_company_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_company_logo']['settings'] = array(
    'image_style' => 'flexslider_thumbnail',
    'image_link' => '',
  );
  /* Campo: Contenido: Empresa */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['label'] = '';
  $handler->display->display_options['fields']['field_company']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_company']['alter']['path'] = '[field_company_link]';
  $handler->display->display_options['fields']['field_company']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_company']['settings'] = array(
    'trim_length' => '600',
  );
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Contenido: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'collaborator' => 'collaborator',
  );

  /* Display: Credits */
  $handler = $view->new_display('page', 'Credits', 'page');
  $handler->display->display_options['path'] = 'drupalcamp-spain-2015/credits';
  $translatables['credits_page'] = array(
    t('Master'),
    t('Credits page'),
    t('más'),
    t('Aplicar'),
    t('Reiniciar'),
    t('Ordenar por'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primera'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Usuario entity referenced from field_user_collaborator'),
    t('Credits'),
  );
  $export['credits_page'] = $view;

  return $export;
}
