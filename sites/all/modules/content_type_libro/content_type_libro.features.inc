<?php
/**
 * @file
 * content_type_libro.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function content_type_libro_image_default_styles() {
  $styles = array();

  // Exported image style: portada_libro.
  $styles['portada_libro'] = array(
    'name' => 'portada_libro',
    'label' => 'Portada Libro',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 180,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function content_type_libro_node_info() {
  $items = array(
    'libro' => array(
      'name' => t('Libro'),
      'base' => 'node_content',
      'description' => t('Agregue un libro al inventario de su biblioteca.'),
      'has_title' => '1',
      'title_label' => t('Titulo del libro'),
      'help' => '',
    ),
  );
  return $items;
}
