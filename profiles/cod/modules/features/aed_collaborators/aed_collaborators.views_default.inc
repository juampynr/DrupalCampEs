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
  $view->name = 'aed_attendees';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'AED_attendees';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Attendees';
  $handler->display->display_options['css_class'] = 'aed-attendees';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'column col-sm-2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Still tickets are not sell but you can register, <a href="/user/register">Be the first!!</a>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: User: Ticket registration */
  $handler->display->display_options['relationships']['ticket_registration']['id'] = 'ticket_registration';
  $handler->display->display_options['relationships']['ticket_registration']['table'] = 'users';
  $handler->display->display_options['relationships']['ticket_registration']['field'] = 'ticket_registration';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'thumbnail';
  /* Field: Field: Nombre */
  $handler->display->display_options['fields']['field_profile_first']['id'] = 'field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['table'] = 'field_data_field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['field'] = 'field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['label'] = '';
  $handler->display->display_options['fields']['field_profile_first']['element_label_colon'] = FALSE;
  /* Field: Field: Apellidos */
  $handler->display->display_options['fields']['field_profile_last']['id'] = 'field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['table'] = 'field_data_field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['field'] = 'field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['label'] = '';
  $handler->display->display_options['fields']['field_profile_last']['element_label_colon'] = FALSE;
  /* Sort criterion: Field: Nombre (field_profile_first) */
  $handler->display->display_options['sorts']['field_profile_first_value']['id'] = 'field_profile_first_value';
  $handler->display->display_options['sorts']['field_profile_first_value']['table'] = 'field_data_field_profile_first';
  $handler->display->display_options['sorts']['field_profile_first_value']['field'] = 'field_profile_first_value';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Criterios de filtrado: Ticket registration: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'ticket_registration';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'ticket_registration';
  $handler->display->display_options['filters']['state']['value'] = 'completed';
  /* Criterios de filtrado: Usuario: ID del usuario */

  /* Filter criterion: User: The user ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '1';

  /* Display: Attenders */
  $handler = $view->new_display('page', 'Attenders', 'page');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'aed-attendees';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'thumbnail';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Field: Nombre */
  $handler->display->display_options['fields']['field_profile_first']['id'] = 'field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['table'] = 'field_data_field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['field'] = 'field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['label'] = '';
  $handler->display->display_options['fields']['field_profile_first']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_first']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Field: Apellidos */
  $handler->display->display_options['fields']['field_profile_last']['id'] = 'field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['table'] = 'field_data_field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['field'] = 'field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['label'] = '';
  $handler->display->display_options['fields']['field_profile_last']['element_label_colon'] = FALSE;
  /* Field: User: Nick */
  $handler->display->display_options['fields']['field_nick']['id'] = 'field_nick';
  $handler->display->display_options['fields']['field_nick']['table'] = 'field_data_field_nick';
  $handler->display->display_options['fields']['field_nick']['field'] = 'field_nick';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '[uid]';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Organización */
  $handler->display->display_options['fields']['field_profile_org']['id'] = 'field_profile_org';
  $handler->display->display_options['fields']['field_profile_org']['table'] = 'field_data_field_profile_org';
  $handler->display->display_options['fields']['field_profile_org']['field'] = 'field_profile_org';
  $handler->display->display_options['path'] = 'asistentes';
  $translatables['aed_attendees'] = array(
    t('Master'),
    t('Attendees'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Still tickets are not sell but you can register, <a href="/user/register">Be the first!!</a>'),
    t('Ticket registration'),
    t('Attenders'),
    t('Nick'),
    t('[uid]'),
    t('Organización'),
  );
  $export['aed_attendees'] = $view;

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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_user_collaborator_target_id']['id'] = 'field_user_collaborator_target_id';
  $handler->display->display_options['relationships']['field_user_collaborator_target_id']['table'] = 'field_data_field_user_collaborator';
  $handler->display->display_options['relationships']['field_user_collaborator_target_id']['field'] = 'field_user_collaborator_target_id';
  $handler->display->display_options['relationships']['field_user_collaborator_target_id']['label'] = 'Usuario entidad referenciada de field_user_collaborator';
  $handler->display->display_options['relationships']['field_user_collaborator_target_id']['required'] = TRUE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'field_user_collaborator_target_id';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'medium';
  /* Field: Field: Nombre */
  $handler->display->display_options['fields']['field_profile_first']['id'] = 'field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['table'] = 'field_data_field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['field'] = 'field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['relationship'] = 'field_user_collaborator_target_id';
  $handler->display->display_options['fields']['field_profile_first']['label'] = '';
  $handler->display->display_options['fields']['field_profile_first']['element_label_colon'] = FALSE;
  /* Field: Field: Apellidos */
  $handler->display->display_options['fields']['field_profile_last']['id'] = 'field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['table'] = 'field_data_field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['field'] = 'field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['relationship'] = 'field_user_collaborator_target_id';
  $handler->display->display_options['fields']['field_profile_last']['label'] = '';
  $handler->display->display_options['fields']['field_profile_last']['element_label_colon'] = FALSE;
  /* Field: Content: Empresa link */
  $handler->display->display_options['fields']['field_company_link']['id'] = 'field_company_link';
  $handler->display->display_options['fields']['field_company_link']['table'] = 'field_data_field_company_link';
  $handler->display->display_options['fields']['field_company_link']['field'] = 'field_company_link';
  $handler->display->display_options['fields']['field_company_link']['label'] = '';
  $handler->display->display_options['fields']['field_company_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_company_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_company_link']['click_sort_column'] = 'url';
  /* Field: Content: Logo empresa */
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
  /* Field: Content: Empresa */
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
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'collaborator' => 'collaborator',
  );

  /* Display: Credits */
  $handler = $view->new_display('page', 'Credits', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Apellidos */
  $handler->display->display_options['fields']['field_profile_last']['id'] = 'field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['table'] = 'field_data_field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['field'] = 'field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['relationship'] = 'field_user_collaborator_target_id';
  $handler->display->display_options['fields']['field_profile_last']['label'] = '';
  $handler->display->display_options['fields']['field_profile_last']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_last']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'field_user_collaborator_target_id';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'credits_220x220';
  /* Field: Field: Nombre */
  $handler->display->display_options['fields']['field_profile_first']['id'] = 'field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['table'] = 'field_data_field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['field'] = 'field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['relationship'] = 'field_user_collaborator_target_id';
  $handler->display->display_options['fields']['field_profile_first']['label'] = '';
  $handler->display->display_options['fields']['field_profile_first']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_profile_first']['alter']['text'] = '[field_profile_first] [field_profile_last]';
  $handler->display->display_options['fields']['field_profile_first']['element_label_colon'] = FALSE;
  /* Field: Content: Empresa link */
  $handler->display->display_options['fields']['field_company_link']['id'] = 'field_company_link';
  $handler->display->display_options['fields']['field_company_link']['table'] = 'field_data_field_company_link';
  $handler->display->display_options['fields']['field_company_link']['field'] = 'field_company_link';
  $handler->display->display_options['fields']['field_company_link']['label'] = '';
  $handler->display->display_options['fields']['field_company_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_company_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_company_link']['click_sort_column'] = 'url';
  /* Field: Content: Logo empresa */
  $handler->display->display_options['fields']['field_company_logo']['id'] = 'field_company_logo';
  $handler->display->display_options['fields']['field_company_logo']['table'] = 'field_data_field_company_logo';
  $handler->display->display_options['fields']['field_company_logo']['field'] = 'field_company_logo';
  $handler->display->display_options['fields']['field_company_logo']['label'] = '';
  $handler->display->display_options['fields']['field_company_logo']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_company_logo']['alter']['path'] = '[field_company_link]';
  $handler->display->display_options['fields']['field_company_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_company_logo']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_company_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_company_logo']['settings'] = array(
    'image_style' => 'company_thumbnail',
    'image_link' => '',
  );
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
    t('Usuario entidad referenciada de field_user_collaborator'),
    t('Credits'),
    t('more'),
    t('[field_profile_first] [field_profile_last]'),
  );
  $export['credits_page'] = $view;

  return $export;
}
