(function ($) {
  var $window = $(window);

  // Si estamos en mobile nada de lo siguiente procede.
  if ($window.width() < 768) return;

  // Agregar los selectores que quieras que sean sticky
  var elements = [
    $('#off-canvas')
  ];

  var className = 'sticky-element';

  $.each(elements, function () {
    var $el = $(this).clone(true).addClass('sticky-element-clone hidden');
    $el.appendTo('body');
    var offset = $(this).offset().top;

    $window.scroll(function () {
      if ($(window).scrollTop() > offset) {
        $el.addClass(className);
        $el.removeClass('hidden');
      } else {
        $el.removeClass(className);
        $el.addClass('hidden');
      }
    });

  });

})(jQuery);
