<?php
/**
 * @file
 * f_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_news_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function f_news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function f_news_image_default_styles() {
  $styles = array();

  // Exported image style: news_item.
  $styles['news_item'] = array(
    'name' => 'news_item',
    'label' => 'News Item (600x400)',
    'effects' => array(
      5 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 600,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function f_news_node_info() {
  $items = array(
    'feed' => array(
      'name' => t('Feed'),
      'base' => 'node_content',
      'description' => t('Subscribe to RSS or Atom feeds. Creates nodes of the content type "Feed item" from feed content.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'feed_item' => array(
      'name' => t('Feed item'),
      'base' => 'node_content',
      'description' => t('This content type is being used for automatically aggregated content from feeds.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('A single news item'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
