<?php
/**
 * @file
 * f_media.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function f_media_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_home:custom-frontpage
  $menu_links['main-menu_home:custom-frontpage'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'custom-frontpage',
    'router_path' => 'custom-frontpage',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => 'Link to custom-frontpage',
      ),
      'identifier' => 'main-menu_home:custom-frontpage',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_media:media
  $menu_links['main-menu_media:media'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'media',
    'router_path' => 'media',
    'link_title' => 'Media',
    'options' => array(
      'attributes' => array(
        'title' => 'Link to media',
      ),
      'identifier' => 'main-menu_media:media',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Home');
  t('Media');


  return $menu_links;
}
