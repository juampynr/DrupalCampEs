<?php
/**
 * @file
 * cod_paid_events.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cod_paid_events_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'order_registrations';
  $view->description = 'Display a list of all registration by a given user';
  $view->tag = 'default';
  $view->base_table = 'ticket_registration';
  $view->human_name = 'Order Registrations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Order Registrations';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'ver todo';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view any commerce_order entity';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplicar';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordenar por';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'entity' => 'entity',
    'ticket_type_label' => 'ticket_type_label',
    'created' => 'created',
    'view_registration' => 'view_registration',
    'edit_registration' => 'view_registration',
    'cancel_registration' => 'view_registration',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'entity' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ticket_type_label' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_registration' => array(
      'align' => '',
      'separator' => '&nbsp; | &nbsp;',
      'empty_column' => 0,
    ),
    'edit_registration' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'cancel_registration' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Comportamiento si no hay resultados: Global: Área de texto */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No hay registros de entradas';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relación: Ticket registration: Ticket Type */
  $handler->display->display_options['relationships']['ticket_type_ttid']['id'] = 'ticket_type_ttid';
  $handler->display->display_options['relationships']['ticket_type_ttid']['table'] = 'ticket_registration';
  $handler->display->display_options['relationships']['ticket_type_ttid']['field'] = 'ticket_type_ttid';
  $handler->display->display_options['relationships']['ticket_type_ttid']['required'] = TRUE;
  /* Relación: Ticket registration: Attendee */
  $handler->display->display_options['relationships']['user_uid']['id'] = 'user_uid';
  $handler->display->display_options['relationships']['user_uid']['table'] = 'ticket_registration';
  $handler->display->display_options['relationships']['user_uid']['field'] = 'user_uid';
  /* Campo: Ticket type: Entidad de host */
  $handler->display->display_options['fields']['entity']['id'] = 'entity';
  $handler->display->display_options['fields']['entity']['table'] = 'ticket_type';
  $handler->display->display_options['fields']['entity']['field'] = 'entity';
  $handler->display->display_options['fields']['entity']['relationship'] = 'ticket_type_ttid';
  $handler->display->display_options['fields']['entity']['label'] = 'Evento';
  /* Campo: Ticket type: Ticket type */
  $handler->display->display_options['fields']['ticket_type_label']['id'] = 'ticket_type_label';
  $handler->display->display_options['fields']['ticket_type_label']['table'] = 'field_data_ticket_type_label';
  $handler->display->display_options['fields']['ticket_type_label']['field'] = 'ticket_type_label';
  $handler->display->display_options['fields']['ticket_type_label']['relationship'] = 'ticket_type_ttid';
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'user_uid';
  $handler->display->display_options['fields']['name']['label'] = 'Attendee';
  /* Campo: Ticket registration: Enlace */
  $handler->display->display_options['fields']['view_registration']['id'] = 'view_registration';
  $handler->display->display_options['fields']['view_registration']['table'] = 'ticket_registration';
  $handler->display->display_options['fields']['view_registration']['field'] = 'view_registration';
  $handler->display->display_options['fields']['view_registration']['label'] = 'Operaciones';
  /* Campo: Ticket registration: Enlace de edición */
  $handler->display->display_options['fields']['edit_registration']['id'] = 'edit_registration';
  $handler->display->display_options['fields']['edit_registration']['table'] = 'ticket_registration';
  $handler->display->display_options['fields']['edit_registration']['field'] = 'edit_registration';
  /* Campo: Ticket registration: Enlace para cancelar */
  $handler->display->display_options['fields']['cancel_registration']['id'] = 'cancel_registration';
  $handler->display->display_options['fields']['cancel_registration']['table'] = 'ticket_registration';
  $handler->display->display_options['fields']['cancel_registration']['field'] = 'cancel_registration';
  /* Filtro contextual: Ticket registration: Pedido (field_ticket_order) */
  $handler->display->display_options['arguments']['field_ticket_order_target_id']['id'] = 'field_ticket_order_target_id';
  $handler->display->display_options['arguments']['field_ticket_order_target_id']['table'] = 'field_data_field_ticket_order';
  $handler->display->display_options['arguments']['field_ticket_order_target_id']['field'] = 'field_ticket_order_target_id';
  $handler->display->display_options['arguments']['field_ticket_order_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ticket_order_target_id']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['field_ticket_order_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_ticket_order_target_id']['default_argument_options']['index'] = '3';
  $handler->display->display_options['arguments']['field_ticket_order_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ticket_order_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ticket_order_target_id']['summary_options']['items_per_page'] = '25';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['display_description'] = 'All tickets registered by a user.';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'ver todo';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementos por página';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Todos -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamiento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primera';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['path'] = 'admin/commerce/orders/%/registrations';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Registrations';
  $handler->display->display_options['menu']['description'] = 'Displays a list of registrations associated to an order.';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['order_registrations'] = array(
    t('Master'),
    t('Order Registrations'),
    t('ver todo'),
    t('Aplicar'),
    t('Reiniciar'),
    t('Ordenar por'),
    t('Asc'),
    t('Desc'),
    t('No hay registros de entradas'),
    t('ticket type'),
    t('attendee'),
    t('Evento'),
    t('Ticket type'),
    t('Attendee'),
    t('Operaciones'),
    t('Enlace de edición'),
    t('Enlace para cancelar'),
    t('Todo(s)'),
    t('Page'),
    t('All tickets registered by a user.'),
    t('Elementos por página'),
    t('- Todos -'),
    t('Desplazamiento'),
    t('« primera'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
  );
  $export['order_registrations'] = $view;

  return $export;
}
