<?php 
/**
 * Array que contiene las categorias de los tipos de contenidos
 * $categorias
 */
?>
<div class='block-categorias well'>
<?php if(isset($categorias)): ?>
	<ul>
		<li><a href="#">Todos</a></li>
		<?php foreach($categorias as $categoria): ?>
			<li>
			 	<a href="#">
			 		<?php print $categoria->name; ?>
			 	</a> 
			</li>
		<?php endforeach; ?>
	</ul>
<?php endif; ?>
</div>
