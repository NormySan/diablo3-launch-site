(function($) {

// Run whenever the DOM tree is changed, e.g. through AJAX/AHAH
Drupal.behaviors.diablo = {
  attach: function (context, settings) {

  	/**
  	 * Initialize the frontpage slider.
  	 */
  	$('#frontpage-slider').owlCarousel({
		navigation : true,
      	slideSpeed : 300,
      	paginationSpeed : 400,
      	singleItem:true,
      	navigationText: ['<i class="fa fa-chevron-left"></i>', '<i class="fa fa-chevron-right"></i>'],
      	theme: 'frontpage-slider'
	});
  }
}

})(jQuery);
