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
    	pagination: false,
    	singleItem:true,
    	navigationText: ['<i class="fa fa-chevron-left"></i>', '<i class="fa fa-chevron-right"></i>'],
    	theme: 'frontpage-slider'
  	});

    /*
    $('.page-media .media').owlCarousel({
      items : 4, //10 items above 1000px browser width
      itemsDesktop : [1000,5], //5 items between 1000px and 901px
      itemsDesktopSmall : [900,3], // betweem 900px and 601px
      itemsTablet: [600,2], //2 items between 600 and 0
      itemsMobile : false // itemsMobile disabled - inherit from itemsTablet option
    });
    */
  }
}

})(jQuery);
