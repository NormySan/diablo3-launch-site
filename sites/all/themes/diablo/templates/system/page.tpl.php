<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * This file will print the entire contents within the <body> tag. The only
 * variables you should be printing, should be the available regions. The
 * contents within the regions should be added using Contexts and blocks, and
 * therefore, shouldn't be added here.
 *
 * Feel free to add any HTML that you'd like to use for creating the structure
 * of the page.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 */
?>
<header class="page-header">
	<div class="page-logo">
		<img src="<?php echo base_path() . drupal_get_path('theme', 'diablo'); ?>/graphics/ros_logo.png" alt="Diablo 3: Reaper of Souls">
	</div>
	<section class="header-video">
		<video xmlns="http://www.w3.org/1999/xhtml" id="malthael-video" class="video-bg is-active" loop="loop" poster="" autoplay>
			<source src="<?php echo base_path() . drupal_get_path('theme', 'diablo'); ?>/graphics/videos/malthael.webm" type="video/webm" />
			<source src="<?php echo base_path() . drupal_get_path('theme', 'diablo'); ?>/graphics/videos/malthael.mp4" type="video/mp4" />
		</video>
	</section>
</header>
<?php print render($page['header']); ?>
<div class="container">
	<div class="main-content">
		<?php print render($page['content']); ?>
	</div>
	<div class="sidebar-right">
		<?php print render($page['sidebar_right']); ?>
	</div>
</div>
<?php print render($page['footer']); ?>
