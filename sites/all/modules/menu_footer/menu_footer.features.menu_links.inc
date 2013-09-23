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

  // Exported menu link: menu-menu-footer:acerca
  $menu_links['menu-menu-footer:acerca'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => 'acerca',
    'router_path' => 'acerca',
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
  // Exported menu link: menu-menu-footer:contacto
  $menu_links['menu-menu-footer:contacto'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => 'contacto',
    'router_path' => 'contacto',
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
  // Exported menu link: menu-menu-footer:legal
  $menu_links['menu-menu-footer:legal'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => 'legal',
    'router_path' => 'legal',
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
  // Translatables
  // Included for use with string extractors like potx.
  t('Acerca de Orbis');
  t('Aviso Legal');
  t('Contacto');


  return $menu_links;
}
