<?php
/**
 * @file
 * content_type_library.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_type_library_node_info() {
  $items = array(
    'libro' => array(
      'name' => t('Libro'),
      'base' => 'node_content',
      'description' => t('Agregue un libro al inventario de su biblioteca.'),
      'has_title' => '1',
      'title_label' => t('Titulo del libro'),
      'help' => '',
    ),
    'medios_electronicos' => array(
      'name' => t('Medios electronicos'),
      'base' => 'node_content',
      'description' => t('Medios electronicos que se encuentran en el acervo de a biblioteca.'),
      'has_title' => '1',
      'title_label' => t('Titulo'),
      'help' => '',
    ),
    'revista' => array(
      'name' => t('Revista'),
      'base' => 'node_content',
      'description' => t('Revistas'),
      'has_title' => '1',
      'title_label' => t('Nombre de la revista'),
      'help' => '',
    ),
  );
  return $items;
}
