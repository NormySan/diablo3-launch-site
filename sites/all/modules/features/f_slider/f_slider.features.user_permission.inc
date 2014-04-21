<?php
/**
 * @file
 * f_slider.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function f_slider_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create frontpage_slide content'.
  $permissions['create frontpage_slide content'] = array(
    'name' => 'create frontpage_slide content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any frontpage_slide content'.
  $permissions['delete any frontpage_slide content'] = array(
    'name' => 'delete any frontpage_slide content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own frontpage_slide content'.
  $permissions['delete own frontpage_slide content'] = array(
    'name' => 'delete own frontpage_slide content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any frontpage_slide content'.
  $permissions['edit any frontpage_slide content'] = array(
    'name' => 'edit any frontpage_slide content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own frontpage_slide content'.
  $permissions['edit own frontpage_slide content'] = array(
    'name' => 'edit own frontpage_slide content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
