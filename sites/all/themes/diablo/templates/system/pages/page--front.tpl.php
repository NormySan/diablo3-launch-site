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