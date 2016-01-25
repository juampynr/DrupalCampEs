(function ($) {

  Drupal.behaviors.responsiveTag = {
    attach: function (context, settings) {
      ///////////////////
      // Tags que vamos a convertir. añadir a discreción.
      var tags = ['iframe'];

      $.each(tags, function (i, tag) {
        var $tag = $(tag);

        if ($tag.hasClass('no-responsive-tag-wrap')) return true;

        var width = $tag.actual('width');
        var height = $tag.actual('height');
        // El tag tambien necesita su CSS pero ya lo he puesto en _media.scss
        $tag
          .wrap('<div />')
          .parent()
          .addClass('responsive-tag-wrapper')
          .css({
            position: 'relative',
            height: 0,
            paddingTop: ((height / width) * 100) + '%'
          });
      });
      ///////////////////
    }
  };
})(jQuery);
