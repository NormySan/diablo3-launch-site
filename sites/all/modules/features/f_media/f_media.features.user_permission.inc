<?php
/**
 * @file
 * f_media.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function f_media_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer youtube'.
  $permissions['administer youtube'] = array(
    'name' => 'administer youtube',
    'roles' => array(),
    'module' => 'youtube',
  );

  // Exported permission: 'create media_fanart content'.
  $permissions['create media_fanart content'] = array(
    'name' => 'create media_fanart content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create media_screenshot content'.
  $permissions['create media_screenshot content'] = array(
    'name' => 'create media_screenshot content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create media_video content'.
  $permissions['create media_video content'] = array(
    'name' => 'create media_video content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any media_fanart content'.
  $permissions['delete any media_fanart content'] = array(
    'name' => 'delete any media_fanart content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any media_screenshot content'.
  $permissions['delete any media_screenshot content'] = array(
    'name' => 'delete any media_screenshot content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any media_video content'.
  $permissions['delete any media_video content'] = array(
    'name' => 'delete any media_video content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own media_fanart content'.
  $permissions['delete own media_fanart content'] = array(
    'name' => 'delete own media_fanart content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own media_screenshot content'.
  $permissions['delete own media_screenshot content'] = array(
    'name' => 'delete own media_screenshot content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own media_video content'.
  $permissions['delete own media_video content'] = array(
    'name' => 'delete own media_video content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any media_fanart content'.
  $permissions['edit any media_fanart content'] = array(
    'name' => 'edit any media_fanart content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any media_screenshot content'.
  $permissions['edit any media_screenshot content'] = array(
    'name' => 'edit any media_screenshot content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any media_video content'.
  $permissions['edit any media_video content'] = array(
    'name' => 'edit any media_video content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own media_fanart content'.
  $permissions['edit own media_fanart content'] = array(
    'name' => 'edit own media_fanart content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own media_screenshot content'.
  $permissions['edit own media_screenshot content'] = array(
    'name' => 'edit own media_screenshot content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own media_video content'.
  $permissions['edit own media_video content'] = array(
    'name' => 'edit own media_video content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
