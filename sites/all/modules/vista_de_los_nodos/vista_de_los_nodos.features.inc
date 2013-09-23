<?php
/**
 * @file
 * vista_de_los_nodos.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vista_de_los_nodos_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
