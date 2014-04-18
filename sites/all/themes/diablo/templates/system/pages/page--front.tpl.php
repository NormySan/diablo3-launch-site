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
