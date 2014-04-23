<?php
/**
 * @file
 * f_news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function f_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear feed feeds'.
  $permissions['clear feed feeds'] = array(
    'name' => 'clear feed feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'create feed content'.
  $permissions['create feed content'] = array(
    'name' => 'create feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create feed_item content'.
  $permissions['create feed_item content'] = array(
    'name' => 'create feed_item content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create news content'.
  $permissions['create news content'] = array(
    'name' => 'create news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any feed content'.
  $permissions['delete any feed content'] = array(
    'name' => 'delete any feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any feed_item content'.
  $permissions['delete any feed_item content'] = array(
    'name' => 'delete any feed_item content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any news content'.
  $permissions['delete any news content'] = array(
    'name' => 'delete any news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own feed content'.
  $permissions['delete own feed content'] = array(
    'name' => 'delete own feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own feed_item content'.
  $permissions['delete own feed_item content'] = array(
    'name' => 'delete own feed_item content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own news content'.
  $permissions['delete own news content'] = array(
    'name' => 'delete own news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any feed content'.
  $permissions['edit any feed content'] = array(
    'name' => 'edit any feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any feed_item content'.
  $permissions['edit any feed_item content'] = array(
    'name' => 'edit any feed_item content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any news content'.
  $permissions['edit any news content'] = array(
    'name' => 'edit any news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own feed content'.
  $permissions['edit own feed content'] = array(
    'name' => 'edit own feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own feed_item content'.
  $permissions['edit own feed_item content'] = array(
    'name' => 'edit own feed_item content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own news content'.
  $permissions['edit own news content'] = array(
    'name' => 'edit own news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'import feed feeds'.
  $permissions['import feed feeds'] = array(
    'name' => 'import feed feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock feed feeds'.
  $permissions['unlock feed feeds'] = array(
    'name' => 'unlock feed feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  return $permissions;
}
