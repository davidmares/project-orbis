(function ($) {
	Drupal.behaviors.categoriasCarousel = {
		attach: function (context) {

	  	$(".carousel").waterwheelCarousel({
      	flankingItems: 4,
        autoPlay: 0,
        speed: 600,
        animationEasing: 'linear'
      });
      
      $(".alert-block").hide();

      $("#all").trigger('click');

      $.fn.cargar_contenido = function(variables) {
        var vars = $.parseJSON(variables);
        var nodos = vars.nodos;
        var editoriales = vars.editoriales;
        var id = vars.html_id;
        var i = vars.tam;
        var output = "<div>";
        var prefix = "<div class='well content-cat'>";
        var suffix = "</div>";

        if(i!=-1){
          var n = 0;
          for(var j = 0; j<=i; j++){
            output += prefix + "<a href='/node/"+nodos[j].nid+"'><img src='/sites/default/files/"+ 
              nodos[j].field_imagen['und'][0]['uri'].substr(9) + "' /></a>"+
              "<div><h5><span>" + nodos[j].title +"</span></h5>" +
              "<h6>Autor: <span>"+ nodos[j].field__autor+"</span><h6>";
            if(editoriales[j].name)
              output += "<h6>Editorial: <span>"+editoriales[j].name+"</span><h6>";

            if(nodos[j].type != 'revista')
              output += "<h6>Año Publicación: <span>"+
                nodos[j].field_ano_de_publicacion['und'][0]['value'].substring(0,10)+"</span><h6>";
            else
              output += "<h6>Año Publicación: <span>"+ 
                nodos[j].field_fecha_publicacion['und'][0]['value'].substring(0,10)+"</span><h6>";
            output += "</div>"+suffix;
            n++;
            if(n==8)
              break;
          }
        }
        else{
          output += prefix + "No se encontró contenido" + suffix;
        }
        output += "</div>";
        $(id).html(output);
      }
	  }
	};
})(jQuery);
