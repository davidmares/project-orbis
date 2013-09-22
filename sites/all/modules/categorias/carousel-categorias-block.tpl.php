<?php 
/**
 * Vista Carousel
 * Variables:
 * $nodos -> array de nodos de tipo libros, medios electronicos, y revistas
 */
?>
<div class='carousel well'>
	<?php foreach($nodos as $nodo): ?>
		<a href="#"><img src="<?php print '/sites/default/files/' . substr($nodo->field_imagen['und'][0]['uri'],9); ?>" /></a>
	<?php endforeach; ?>
</div>
