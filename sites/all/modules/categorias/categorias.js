(function ($) {
	Drupal.behaviors.categoriasCarousel = {
		attach: function (context) {

	  	$(".carousel").waterwheelCarousel({
      	flankingItems: 4
      });

	  }
	};
})(jQuery);

(function ($) {
  $.fn.cargar_contenido = function(variables) {
    var vars = $.parseJSON(variables);
    // Obtenemos el objeto user.
    var user = vars.user;
    // Obtenemos el id del elemento HTML.
    var id = vars.html_id;
 
    // Generamos el string que vamos a mostrar, con las variables anteriores. 
    var output = '<br /> El usuario: usuario conectado actualmente.';
 
    // Adjuntamos el string al HTML.
    $(".block-categorias").append(output);
  }
 
})(jQuery);