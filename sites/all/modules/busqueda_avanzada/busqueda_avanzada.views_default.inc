<?php
/**
 * @file
 * busqueda_avanzada.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function busqueda_avanzada_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'busqueda_avanzada';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Busqueda avanzada';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Busqueda avanzada';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '5';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Resultados por página';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Autor */
  $handler->display->display_options['fields']['field_autor']['id'] = 'field_autor';
  $handler->display->display_options['fields']['field_autor']['table'] = 'field_data_field_autor';
  $handler->display->display_options['fields']['field_autor']['field'] = 'field_autor';
  $handler->display->display_options['fields']['field_autor']['delta_offset'] = '0';
  /* Field: Content: Editorial */
  $handler->display->display_options['fields']['field_editorial']['id'] = 'field_editorial';
  $handler->display->display_options['fields']['field_editorial']['table'] = 'field_data_field_editorial';
  $handler->display->display_options['fields']['field_editorial']['field'] = 'field_editorial';
  /* Field: Content: Existencias */
  $handler->display->display_options['fields']['field_existencias']['id'] = 'field_existencias';
  $handler->display->display_options['fields']['field_existencias']['table'] = 'field_data_field_existencias';
  $handler->display->display_options['fields']['field_existencias']['field'] = 'field_existencias';
  $handler->display->display_options['fields']['field_existencias']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Imágen */
  $handler->display->display_options['fields']['field_imagen']['id'] = 'field_imagen';
  $handler->display->display_options['fields']['field_imagen']['table'] = 'field_data_field_imagen';
  $handler->display->display_options['fields']['field_imagen']['field'] = 'field_imagen';
  $handler->display->display_options['fields']['field_imagen']['label'] = '';
  $handler->display->display_options['fields']['field_imagen']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imagen']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imagen']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Titulo';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Autor (field_autor) */
  $handler->display->display_options['filters']['field_autor_tid']['id'] = 'field_autor_tid';
  $handler->display->display_options['filters']['field_autor_tid']['table'] = 'field_data_field_autor';
  $handler->display->display_options['filters']['field_autor_tid']['field'] = 'field_autor_tid';
  $handler->display->display_options['filters']['field_autor_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_autor_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_autor_tid']['expose']['operator_id'] = 'field_autor_tid_op';
  $handler->display->display_options['filters']['field_autor_tid']['expose']['label'] = 'Autor';
  $handler->display->display_options['filters']['field_autor_tid']['expose']['operator'] = 'field_autor_tid_op';
  $handler->display->display_options['filters']['field_autor_tid']['expose']['identifier'] = 'field_autor_tid';
  $handler->display->display_options['filters']['field_autor_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_autor_tid']['vocabulary'] = 'autores';
  /* Filter criterion: Content: Ubicación (field_ubicacion) */
  $handler->display->display_options['filters']['field_ubicacion_value']['id'] = 'field_ubicacion_value';
  $handler->display->display_options['filters']['field_ubicacion_value']['table'] = 'field_data_field_ubicacion';
  $handler->display->display_options['filters']['field_ubicacion_value']['field'] = 'field_ubicacion_value';
  $handler->display->display_options['filters']['field_ubicacion_value']['group'] = 1;
  $handler->display->display_options['filters']['field_ubicacion_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ubicacion_value']['expose']['operator_id'] = 'field_ubicacion_value_op';
  $handler->display->display_options['filters']['field_ubicacion_value']['expose']['label'] = 'Ubicación';
  $handler->display->display_options['filters']['field_ubicacion_value']['expose']['operator'] = 'field_ubicacion_value_op';
  $handler->display->display_options['filters']['field_ubicacion_value']['expose']['identifier'] = 'field_ubicacion_value';
  $handler->display->display_options['filters']['field_ubicacion_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Editorial (field_editorial) */
  $handler->display->display_options['filters']['field_editorial_tid']['id'] = 'field_editorial_tid';
  $handler->display->display_options['filters']['field_editorial_tid']['table'] = 'field_data_field_editorial';
  $handler->display->display_options['filters']['field_editorial_tid']['field'] = 'field_editorial_tid';
  $handler->display->display_options['filters']['field_editorial_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_editorial_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_editorial_tid']['expose']['operator_id'] = 'field_editorial_tid_op';
  $handler->display->display_options['filters']['field_editorial_tid']['expose']['label'] = 'Editorial';
  $handler->display->display_options['filters']['field_editorial_tid']['expose']['operator'] = 'field_editorial_tid_op';
  $handler->display->display_options['filters']['field_editorial_tid']['expose']['identifier'] = 'field_editorial_tid';
  $handler->display->display_options['filters']['field_editorial_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_editorial_tid']['vocabulary'] = 'editoriales';
  /* Filter criterion: Content: No. páginas (field_no_paginas) */
  $handler->display->display_options['filters']['field_no_paginas_value']['id'] = 'field_no_paginas_value';
  $handler->display->display_options['filters']['field_no_paginas_value']['table'] = 'field_data_field_no_paginas';
  $handler->display->display_options['filters']['field_no_paginas_value']['field'] = 'field_no_paginas_value';
  $handler->display->display_options['filters']['field_no_paginas_value']['group'] = 1;
  $handler->display->display_options['filters']['field_no_paginas_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_no_paginas_value']['expose']['operator_id'] = 'field_no_paginas_value_op';
  $handler->display->display_options['filters']['field_no_paginas_value']['expose']['label'] = 'No. páginas';
  $handler->display->display_options['filters']['field_no_paginas_value']['expose']['operator'] = 'field_no_paginas_value_op';
  $handler->display->display_options['filters']['field_no_paginas_value']['expose']['identifier'] = 'field_no_paginas_value';
  $handler->display->display_options['filters']['field_no_paginas_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: ISBN (field_isbn) */
  $handler->display->display_options['filters']['field_isbn_value']['id'] = 'field_isbn_value';
  $handler->display->display_options['filters']['field_isbn_value']['table'] = 'field_data_field_isbn';
  $handler->display->display_options['filters']['field_isbn_value']['field'] = 'field_isbn_value';
  $handler->display->display_options['filters']['field_isbn_value']['group'] = 1;
  $handler->display->display_options['filters']['field_isbn_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_isbn_value']['expose']['operator_id'] = 'field_isbn_value_op';
  $handler->display->display_options['filters']['field_isbn_value']['expose']['label'] = 'ISBN';
  $handler->display->display_options['filters']['field_isbn_value']['expose']['operator'] = 'field_isbn_value_op';
  $handler->display->display_options['filters']['field_isbn_value']['expose']['identifier'] = 'field_isbn_value';
  $handler->display->display_options['filters']['field_isbn_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'libro' => 'libro',
    'medios_electronicos' => 'medios_electronicos',
    'revista' => 'revista',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Tipo de material';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'busqueda-avanzada';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Busqueda avanzada';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['busqueda_avanzada'] = $view;

  return $export;
}
