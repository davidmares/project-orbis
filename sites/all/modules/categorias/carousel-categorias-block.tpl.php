<?php 
/**
 * Vista Carousel
 * Variables:
 * $nodos -> array de nodos de tipo libros, medios electronicos, y revistas
 */
?>
<div class='carousel well'>
	<titulo>Libros Nuevos</titulo>
	<?php foreach($nodos as $nodo): ?>
		<a href="<?php print '/node/'.$nodo->nid; ?>"><img src="<?php print '/sites/default/files/' . substr($nodo->field_imagen['und'][0]['uri'],9); ?>" /></a>
	<?php endforeach; ?>
</div>

