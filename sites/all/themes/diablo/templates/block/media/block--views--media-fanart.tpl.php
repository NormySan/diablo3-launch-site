<?php if ($block->subject): ?>
  <h2<?php print $title_attributes; ?>><?php print $block->subject ?></h2>
<?php endif;?>

<ul class="media fanart owl-carousel">
  <?php print $content ?>
</ul>
