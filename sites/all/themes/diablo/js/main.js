(function($) {

// Run whenever the DOM tree is changed, e.g. through AJAX/AHAH
Drupal.behaviors.DIABLO = {
  attach: function (context, settings) {

  }
}

// Run once when the DOM is ready (page load)
$(document).ready(function() {
	$('.owl-carousel').owlCarousel({
		items: 1,
		autoPlay: 5000,
		navigation: true,
		pagination: false,
		slideSpeed: 200
	});
});

})(jQuery);
