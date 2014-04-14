<?php
/**
 * @file
 * f_frontpage.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function f_frontpage_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_frontslide_meta|node|frontpage_slide|full';
  $field_group->group_name = 'group_frontslide_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'frontpage_slide';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Frontslide meta',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Frontslide meta',
      'instance_settings' => array(
        'classes' => 'meta',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_frontslide_meta|node|frontpage_slide|full'] = $field_group;

  return $export;
}
