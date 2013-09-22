(function ($) {
	Drupal.behaviors.categoriasCarousel = {
		attach: function (context) {

	  	$(".carousel").waterwheelCarousel({
      	flankingItems: 3
      });

	  }
	};
})(jQuery);