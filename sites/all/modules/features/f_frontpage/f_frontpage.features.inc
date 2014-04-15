<?php
/**
 * @file
 * f_frontpage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_frontpage_ctools_plugin_api($module = NULL, $api = NULL) {
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
function f_frontpage_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function f_frontpage_image_default_styles() {
  $styles = array();

  // Exported image style: frontpage_slide.
  $styles['frontpage_slide'] = array(
    'name' => 'frontpage_slide',
    'label' => 'Frontpage Slide',
    'effects' => array(
      4 => array(
        'label' => 'Crop',
        'help' => 'Cropping will remove portions of an image to make it the specified dimensions.',
        'effect callback' => 'image_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => 1980,
          'height' => 500,
          'anchor' => 'center-top',
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
function f_frontpage_node_info() {
  $items = array(
    'frontpage_slide' => array(
      'name' => t('Frontpage Slide'),
      'base' => 'node_content',
      'description' => t('Single slide displayed on the frontpage slider.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
