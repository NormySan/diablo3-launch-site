<?php
/**
 * @file
 * f_media.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_media_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function f_media_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function f_media_image_default_styles() {
  $styles = array();

  // Exported image style: media_thumbnail.
  $styles['media_thumbnail'] = array(
    'name' => 'media_thumbnail',
    'label' => 'Media Thumbnail',
    'effects' => array(
      10 => array(
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
