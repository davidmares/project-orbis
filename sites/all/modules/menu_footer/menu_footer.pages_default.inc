<?php
/**
 * @file
 * menu_footer.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function menu_footer_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'acerca_de_orbis';
  $page->task = 'page';
  $page->admin_title = 'Acerca De Orbis';
  $page->admin_description = 'Información de Orbis';
  $page->path = 'acerca';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_acerca_de_orbis_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'acerca_de_orbis';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel Acerca De',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left',
          1 => 'right',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'left',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'right',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Panel Acerca De',
      'title' => '',
      'body' => '<div class=\'well\'><h2>Contenidos educativos más cerca de ti</h2></div>
<img src=\'/sites/default/files/files/images/orbis.jpg\' class=\'well span4\' />
<div class=\'well\'>
Sistema basado en web que permite acceder en forma electrónica, al catálogo de acervos que concentra una biblioteca convencional. A través de una base de datos de sencilla administración, se mantiene una lista actualizada de los recursos (libros, revistas, multimedia, bases de datos, etc.) con los identificadores y descriptores habitualmente usados para la búsqueda de material de consulta bibliográfica.

ORBIS es particularmente útil para aquellas bibliotecas o centros de documentación pequeños o medianos, que desean colocar su acervo en internet, para ser consultado en forma local o remota con el uso de cualquier navegador web.

La búsqueda de recursos se realiza a través de la exploración de los descriptores de los acervos mismos (autor, título, edición, año, etc.), o bien, a través del motor de búsqueda que la herramienta incorpora y que permite hacer anidaciones sucesivas para una refinación efectiva de los resultados de la búsqueda.

Para incorporar los acervos a la base de datos, se pueden utilizar varios mecanismos: Importación desde un archivo del tipo CSV, desde registros MARC (Machine Readable Cataloging) o bien con una carga manual.

ORBIS es una herramienta desarrollada sobre Drupal, un poderoso administrador de contenidos de código abierto (open source).

Si tienes interés por conocer más sobre esta herramienta o bien, en utilizarla gratuitamente en tu institución, por favor contáctanos en pdtdie@iiiepe.edu.mx</div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['center'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class=\'well\'><h3>Objetivos o Metas</h3>
<ul><li>Crear un catálogo electrónico del acervo de una biblioteca convencional</li>
<li>Facilitar la búsqueda de materiales bibliográficos no-electrónicos</li></ul>
<h3>Beneficios</h3>
<ul><li>Interface basada en web</li>
<li>Facilidad de acceso y comodidad</li></ul></div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['left'][0] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class=\'well\'><h3>Dirigido a</h3>
<ul><li>Bibliotecas escolares o institucionales</li>
<li>Centros de documentación y de acervos</li></ul></div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['right'][0] = 'new-3';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['acerca_de_orbis'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'aviso_legal';
  $page->task = 'page';
  $page->admin_title = 'Aviso Legal';
  $page->admin_description = 'Aviso Legal';
  $page->path = 'legal';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_aviso_legal_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'aviso_legal';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel Aviso Legal',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Aviso Legal';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Aviso Legal',
      'title' => '',
      'body' => '<div class=\'well\'><h1>Aviso Legal</h1></div>
<div class=\'well\'>
Al usar el sitio de internet del IIIEPE, identificado por la dirección electrónica http://www.iiiepe.edu.mx y todos los sitios bajo el dominio iiiepe.edu.mx (en lo sucesivo SITIOS IIIEPE) usted acepta las condiciones aquí descritas, las cuales pueden ser modificadas sin previo aviso y sin responsabilidad alguna del IIIEPE por perjuicios o daños a terceros, quedando bajo responsabilidad de usted (en lo sucesivo el USUARIO) el mantenerse al tanto de los cambios y modificaciones.

DEL USO LIBRE DE LA INFORMACIÓN DEL SITIO
A través de los SITIOS IIIEPE, el IIIEPE facilita y pone a disposición del USUARIO información de diversa índole (en lo sucesivo los CONTENIDOS).

El USUARIO reconoce que el uso de los SITIOS IIIEPE no implica algún derecho de propiedad sobre el mismo, ni implica algún derecho de propiedad intelectual distinto a lo permitido en estos términos de uso sobre cualquiera de sus elementos o CONTENIDOS. El IIIEPE se reserva el derecho a modificar en cualquier momento y sin aviso previo la presentación, configuración, información, CONTENIDOS y en general cualquier parte o aspecto relacionado directa o indirectamente con los SITIOS IIIEPE.

La dirección del portal \'www.iiiepe.edu.mx\' y sus subdominios, el logotipo del IIIEPE, nombres, logotipos, diseños, eslóganes y marcas son protegidas por el Artículo 5 de la Ley Federal de Derechos de Autor.

Salvo que se indique lo contrario, y en los casos en los cuales los derechos de la información publicada se encuentren reservados, todos los CONTENIDOS pueden reproducirse total o parcialmente sin previa autorización del IIIEPE con el único requisito de que la fuente original siempre sea citada. El resultado que se obtenga del uso, aplicación o distribución de los CONTENIDOS deberá de ser sin fines de lucro. EL IIIEPE se compromete a mantener la calidad de sus CONTENIDOS sin embargo estos son publicados y distribuidos sin garantía alguna o responsabilidad por daños y perjuicios causados a terceros por el uso, aplicación o distribución de los CONTENIDOS o sus derivados. EL IIIEPE no tendrá responsabilidad alguna por el uso inadecuado que hagan terceros de los CONTENIDOS o la violación a derechos reservados de información publicada en los SITIOS IIIEPE.

SITIOS DE TERCEROS
La información que en el presente sitio se recopila y vincula, es responsabilidad directa de aquel que la hizo accesible en el sitio de origen, liberando el USUARIO al IIIEPE de cualquier tipo de responsabilidad por el contenido de los sitios vinculados. El usuario asume la responsabilidad total y decide si accede o no a los sitios de terceros y cumple con las prescripciones previstas para cada uno.

MANEJO DE LA INFORMACIÓN PRIVADA
Para tener una cuenta de usuario en los SITIOS IIIEPE, el IIIEPE solicita al USUARIO un nombre de usuario, una dirección de correo electrónico, una contraseña, su nombre y apellidos, género, rango de edad, país, estado y ciudad de residencia, máximo grado de estudios, currículo profesional breve, áreas de interés profesional así como una imagen (en lo sucesivo DATOS DE USUARIO).

Los DATOS DE USUARIO son clasificados como información pública, privada y confidencial; requerida y opcional.

La información requerida está integrada por el nombre de usuario, dirección de correo electrónico, contraseña, nombre, apellidos, género, rango de edad, país, estado, ciudad de residencia, máximo grado de estudios y actividad profesional.

La información opcional incluye el currículo profesional breve, áreas de interés profesional e imagen personal del USUARIO.

Los datos públicos son el nombre de usuario, el nombre, apellidos, género, país, estado, máximo grado de estudios, actividad profesional, currículo profesional breve e imagen de USUARIO; así como cualquier CONTENIDO que el USUARIO publique en los SITIOS IIIEPE.

Los datos privados son la dirección de correo electrónico, el rango de edad y la ciudad de residencia.

Los datos confidenciales se refieren a la contraseña.

El IIIEPE se compromete a no compartir con terceros los DATOS DE USUARIO ni a hacer mal uso de los mismos.

El IIIEPE se compromete a no divulgar por ningún medio los DATOS DE USUARIO que sean privados. La información privada podrá ser utilizada por personal del IIIEPE para fines estadísticos sobre el perfil de los usuarios.

La DATOS DE USUARIO clasificados como confidenciales son encriptados en nuestras bases de datos y en caso de requerir acceder a ellos el IIIEPE se contactará con el USUARIO en cuestión; con el fin de solicitar su autorización estableciendo para qué se desea hacer uso de esa información y qué persona(s) tendrá(n) acceso a la misma.

El IIIEPE puede recopilar del USUARIO, para fines estadísticos y de análisis del perfil de los usuarios, información relativa a la computadora del USUARIO, el navegador que utiliza para acceder a los SITIOS IIIEPE, su ubicación geográfica, su IP, idioma, Sistema Operativo y demás. Esta información es privada y solo será utilizada por personal del IIIEPE o por autoridad judicial o administrativa que así lo solicite. En caso de que el usuario desee que el IIIEPE no recopile su información al acceder a los SITIOS IIIEPE es responsabilidad del USUARIO tomar las medidas correspondientes para que esto suceda, sin responsabilidad alguna por parte del IIIEPE.

El tener una cuenta de usuario no implica responsabilidad alguna del IIIEPE para con el USUARIO o para con terceros.

INFORMACIÓN GENERADA POR EL USUARIO
Los comentarios, CONTENIDOS, sus DATOS DE USUARIO, imágenes, archivos, sitios externos o información publicada por el USUARIO en cualquiera de los SITIOS IIIEPE es responsabilidad de quien la publica quedando exento el IIIEPE de cualquier responsabilidad penal, civil o de cualquier otra índole. El IIIEPE se reserva el derecho de remover CONTENIDOS o información publicada por el USUARIO sin previo aviso. EL IIIEPE también se reserva el derecho de bloquear o negar el acceso a los SITIOS IIIEPE a cualquier USUARIO sin necesidad de justificar su decisión y sin responsabilidad alguna por daños o perjuicios ocasionados a terceros.

DEL USO APROPIADO DEL CONTENIDO DE ESTE SITIO
El usuario se compromete a hacer un uso adecuado de este sitio y sus contenidos, comprometiéndose a no utilizar lo aquí disponible para infringir de manera alguna las leyes aplicables. Queda prohibida la utilización del material disponible en el sitio para obtener beneficios económicos por personas o instituciones distintas a las autorizadas por el propio IIIEPE. Dichas autorizaciones se deberán solicitar y se otorgarán de manera expresa y por escrito.

El USUARIO utilizará este sitio y su contenido de manera que no los dañe, inutilice, deteriore o menoscabe total o parcialmente.

SANCIONES
En caso de que alguna de las disposiciones de este Aviso Legal no se respeten, el IIIEPE determinará las acciones o sanciones derivadas del caso.

El IIIEPE se reserva el derecho de resolución de cualquier circunstancia no prevista en el presente documento. </div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['middle'][0] = 'new-4';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-4';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['aviso_legal'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'contacto';
  $page->task = 'page';
  $page->admin_title = 'Contacto';
  $page->admin_description = 'Contacto con Orbis';
  $page->path = 'contacto';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_contacto_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'contacto';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel Contacto',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Contacto';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class=\'well\'><h1>Contactar</h1></div>
<div class=\'well\'>En el IIIEPE queermos tener la major comunicación contigo, para resolver tus inquietudes y recibir tus sugerencias. Por favor selecciona a qué departamento quieres contactar.

<strong>Dirección postal</strong>
20 de Noviembre S/N entre Tapia y Aramberri
Centro de Monterrey. C.P. 64700. Monterrey, Nuevo León, México
Monterrey, Nuevo León, México

<strong>Teléfonos</strong>
Conmutador: 52+(81)2020-7350
Fax: 52+(81)2020-2940 </div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['center'][0] = 'new-5';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-5';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['contacto'] = $page;

  return $pages;

}
