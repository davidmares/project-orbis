<?php
/**
 * @file
 * menu_footer.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function menu_footer_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-menu-footer.
  $menus['menu-menu-footer'] = array(
    'menu_name' => 'menu-menu-footer',
    'title' => 'Menu Footer',
    'description' => 'Menú que aparece en la parte inferior de la página.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Menu Footer');
  t('Menú que aparece en la parte inferior de la página.');


  return $menus;
}
