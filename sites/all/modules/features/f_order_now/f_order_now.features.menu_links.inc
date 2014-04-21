<?php
/**
 * @file
 * f_order_now.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function f_order_now_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_order-now:order-now
  $menu_links['main-menu_order-now:order-now'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'order-now',
    'router_path' => 'order-now',
    'link_title' => 'Order now',
    'options' => array(
      'identifier' => 'main-menu_order-now:order-now',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Order now');


  return $menu_links;
}
