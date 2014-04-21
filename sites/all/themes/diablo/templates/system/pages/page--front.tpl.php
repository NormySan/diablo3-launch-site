<?php print render($page['header']); ?>
<div class="container">
	<div class="main-content">
		<?php print render($page['content']); ?>
	</div>
	<div class="sidebar-right">
		<?php print render($page['sidebar_right']); ?>
	</div>
</div>
<footer class="page-footer">
  <div class="container">
    <?php print render($page['footer']); ?>
  </div>
</footer>
