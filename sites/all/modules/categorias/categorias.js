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
    var nodos = vars.nodos;
    var id = vars.html_id;
  	
    var output = vars.cat;
    $(id).append(output);
  }
 
})(jQuery);