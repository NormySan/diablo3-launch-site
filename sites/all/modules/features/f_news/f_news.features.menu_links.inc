<?php
/**
 * @file
 * f_news.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function f_news_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_feeds-importers:admin/structure/feeds
  $menu_links['management_feeds-importers:admin/structure/feeds'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/feeds',
    'router_path' => 'admin/structure/feeds',
    'link_title' => 'Feeds importers',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure one or more Feeds importers to aggregate RSS and Atom feeds, import CSV files or more.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_feeds-importers:admin/structure/feeds',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: navigation_feed-item:node/add/feed-item
  $menu_links['navigation_feed-item:node/add/feed-item'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/feed-item',
    'router_path' => 'node/add/feed-item',
    'link_title' => 'Feed item',
    'options' => array(
      'attributes' => array(
        'title' => 'This content type is being used for automatically aggregated content from feeds.',
      ),
      'identifier' => 'navigation_feed-item:node/add/feed-item',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_feed:node/add/feed
  $menu_links['navigation_feed:node/add/feed'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/feed',
    'router_path' => 'node/add/feed',
    'link_title' => 'Feed',
    'options' => array(
      'attributes' => array(
        'title' => 'Subscribe to RSS or Atom feeds. Creates nodes of the content type "Feed item" from feed content.',
      ),
      'identifier' => 'navigation_feed:node/add/feed',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Feed');
  t('Feed item');
  t('Feeds importers');


  return $menu_links;
}
