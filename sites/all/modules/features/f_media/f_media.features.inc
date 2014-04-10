<?php
/**
 * @file
 * f_media.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_media_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function f_media_node_info() {
  $items = array(
    'media_fanart' => array(
      'name' => t('Media Fanart'),
      'base' => 'node_content',
      'description' => t('Fanart displayed on the media page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'media_screenshot' => array(
      'name' => t('Media Screenshot'),
      'base' => 'node_content',
      'description' => t('Displays one single screenshot on the media page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'media_video' => array(
      'name' => t('Media Video'),
      'base' => 'node_content',
      'description' => t('Video displayed on the media page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
