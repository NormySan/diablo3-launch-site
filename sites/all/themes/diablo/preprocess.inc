<?php
/**
 * @file
 * This file should contain any preprocess functions that are being used.
 *
 * Preprocess functions are functions that runs before the theme function or
 * template file. For example, the template_preprocess_node will process the
 * variables that will be available to the node.tpl.php.
 *
 * You are also able to manage the template suggestions using these functions.
 * Using the node example again, the node.tpl.php will cover any node, but
 * node-123.tpl.php will only cover the node with the id 123. This is a simple
 * template suggestion, and you could add whatever suggestions you like.
 *
 * @see http://drupal.org/node/223430
 */

/**
 * Implements template_preprocess_block().
 */
function diablo_preprocess_block(&$variables) {
  // Alter the title for some blocks. This is manually configured here, because
  // Features doesn't export block configuration.
  switch ($variables['block']->bid) {
    case 'system-main-menu':
      $variables['block']->subject = '';
      break;
  }
}

/**
 * Implements template_preprocess_blockify_logo().
 */
function diablo_preprocess_blockify_logo(&$variables) {
  // Change the url of the logo to the graphics folder.
  $variables['logo_path'] = file_create_url(drupal_get_path('theme', 'diablo') . '/graphics/logo.png');
}

/**
 * Implements hook_preprocess_page();
 */
function diablo_preprocess_page(&$vars, $hook) {
  if (isset($vars['node']) && $vars['node']->type === 'news') {
   $vars['theme_hook_suggestions'][] = 'page__'. str_replace('_', '--', $vars['node']->type);
  }
}