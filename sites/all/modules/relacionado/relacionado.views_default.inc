<?php
/**
 * @file
 * relacionado.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function relacionado_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'relacionado';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Relacionado';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Relacionado';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Imágen */
  $handler->display->display_options['fields']['field_imagen']['id'] = 'field_imagen';
  $handler->display->display_options['fields']['field_imagen']['table'] = 'field_data_field_imagen';
  $handler->display->display_options['fields']['field_imagen']['field'] = 'field_imagen';
  $handler->display->display_options['fields']['field_imagen']['label'] = '';
  $handler->display->display_options['fields']['field_imagen']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imagen']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imagen']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Autor (field__autor) */
  $handler->display->display_options['arguments']['field__autor_value']['id'] = 'field__autor_value';
  $handler->display->display_options['arguments']['field__autor_value']['table'] = 'field_data_field__autor';
  $handler->display->display_options['arguments']['field__autor_value']['field'] = 'field__autor_value';
  $handler->display->display_options['arguments']['field__autor_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field__autor_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field__autor_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field__autor_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field__autor_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field__autor_value']['transform_dash'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'relacionado';
  $export['relacionado'] = $view;

  return $export;
}
