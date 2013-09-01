<?php
/**
 * @file
 * content_type_libro.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function content_type_libro_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-libro-field_ano_publicacion'
  $field_instances['node-libro-field_ano_publicacion'] = array(
    'bundle' => 'libro',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Año en que fue publicado el libro.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ano_publicacion',
    'label' => 'Año de publicación',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'node-libro-field_autor'
  $field_instances['node-libro-field_autor'] = array(
    'bundle' => 'libro',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Nombre del autor del libro',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_autor',
    'label' => 'Autor',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-libro-field_editorial'
  $field_instances['node-libro-field_editorial'] = array(
    'bundle' => 'libro',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Nombre de la casa editorial del libro.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_editorial',
    'label' => 'Editorial',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'node-libro-field_existencias'
  $field_instances['node-libro-field_existencias'] = array(
    'bundle' => 'libro',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Cantidad de ejemplares con los que cuenta la biblioteca de este libro.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_existencias',
    'label' => 'Existencias',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => 1,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 39,
    ),
  );

  // Exported field_instance: 'node-libro-field_id_code'
  $field_instances['node-libro-field_id_code'] = array(
    'bundle' => 'libro',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Codigo de identificación interno de la biblioteca',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_id_code',
    'label' => 'ID code',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-libro-field_imagen'
  $field_instances['node-libro-field_imagen'] = array(
    'bundle' => 'libro',
    'deleted' => 0,
    'description' => 'Imágen de la portada del libro.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'portada_libro',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'thumbnail',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_imagen',
    'label' => 'Imágen',
    'required' => 1,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 1,
      'file_directory' => 'files/images/books',
      'file_extensions' => 'png jpg jpeg',
      'max_filesize' => '2 MB',
      'max_resolution' => '480x600',
      'min_resolution' => '100x100',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'medium',
        'progress_indicator' => 'bar',
      ),
      'type' => 'image_image',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-libro-field_isbn'
  $field_instances['node-libro-field_isbn'] = array(
    'bundle' => 'libro',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'ISBN del libro.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_isbn',
    'label' => 'ISBN',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'node-libro-field_no_paginas'
  $field_instances['node-libro-field_no_paginas'] = array(
    'bundle' => 'libro',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Número de páginas que tiene el libro.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_no_paginas',
    'label' => 'No. páginas',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'node-libro-field_ubicacion'
  $field_instances['node-libro-field_ubicacion'] = array(
    'bundle' => 'libro',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Estante en el que se encuentra el libro.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ubicacion',
    'label' => 'Ubicación',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 38,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Autor');
  t('Año de publicación');
  t('Año en que fue publicado el libro.');
  t('Cantidad de ejemplares con los que cuenta la biblioteca de este libro.');
  t('Codigo de identificación interno de la biblioteca');
  t('Editorial');
  t('Estante en el que se encuentra el libro.');
  t('Existencias');
  t('ID code');
  t('ISBN');
  t('ISBN del libro.');
  t('Imágen');
  t('Imágen de la portada del libro.');
  t('No. páginas');
  t('Nombre de la casa editorial del libro.');
  t('Nombre del autor del libro');
  t('Número de páginas que tiene el libro.');
  t('Ubicación');

  return $field_instances;
}
