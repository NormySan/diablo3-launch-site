<?php
/**
 * @file
 * f_frontpage.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function f_frontpage_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|frontpage_slide|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'frontpage_slide';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|frontpage_slide|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function f_frontpage_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|frontpage_slide|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'frontpage_slide';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_slide_img',
        1 => 'group_frontslide_meta',
        2 => 'title',
        3 => 'body',
      ),
    ),
    'fields' => array(
      'field_slide_img' => 'ds_content',
      'group_frontslide_meta' => 'ds_content',
      'title' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|frontpage_slide|full'] = $ds_layout;

  return $export;
}
