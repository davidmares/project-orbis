<?php
/**
 * @file
 * menu_footer.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function menu_footer_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-menu-footer:node/1
  $menu_links['menu-menu-footer:node/1'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Acerca de Orbis',
    'options' => array(
      'attributes' => array(
        'title' => 'Acerca de Orbis',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-menu-footer:node/2
  $menu_links['menu-menu-footer:node/2'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Contacto',
    'options' => array(
      'attributes' => array(
        'title' => 'Contacto con Orbis',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: menu-menu-footer:node/3
  $menu_links['menu-menu-footer:node/3'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Aviso Legal',
    'options' => array(
      'attributes' => array(
        'title' => 'Aviso Legal',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: menu-menu-footer:node/4
  $menu_links['menu-menu-footer:node/4'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'FAQ',
    'options' => array(
      'attributes' => array(
        'title' => 'Preguntas frecuentes',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Acerca de Orbis');
  t('Aviso Legal');
  t('Contacto');
  t('FAQ');


  return $menu_links;
}
