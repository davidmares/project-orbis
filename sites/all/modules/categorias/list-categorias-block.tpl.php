<?php 
/**
 * Array que contiene las categorias de los tipos de contenidos
 * $categorias
 */
?>
<div class='block-categorias well'>
<?php if(isset($categorias)): ?>
	<ul>
		<?php foreach($categorias as $categoria): ?>
			<li>
			 	<?php print $categoria; ?>
			</li>
		<?php endforeach; ?>
	</ul>
<?php endif; ?>
</div>
