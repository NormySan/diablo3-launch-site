<?php
/**
 * @file
 * Default simple view template to display a list of summary lines.
 *
 * If you'd like to override this template, you should create a folder within
 * this folder and name it to the machine-readable name of the view that you're
 * overriding. Then have a look at the theme information for that view, and
 * you'll be able to see which naming convention you should use for the new
 * file.
 *
 * You might end up with something like
 * view_name/views-view-summary--view-name.tpl.php.
 */
?>
<ul class="views-summary">
  <?php foreach ($rows as $id => $row): ?>
    <li><a href="<?php print $row->url; ?>"><?php print $row->link; ?></a>
      <?php if (!empty($options['count'])): ?>
        (<?php print $row->count?>)
      <?php endif; ?>
    </li>
  <?php endforeach; ?>
</ul>
