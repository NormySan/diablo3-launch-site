<?php
/**
 * @file
 * f_media.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function f_media_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mediapage';
  $context->description = 'Defines which media content to be displayed ';
  $context->tag = 'Core';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'media' => 'media',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'header',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-media-media_video_block' => array(
          'module' => 'views',
          'delta' => 'media-media_video_block',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-media-media_fanart_block' => array(
          'module' => 'views',
          'delta' => 'media-media_fanart_block',
          'region' => 'sidebar_right',
          'weight' => '-10',
        ),
        'views-media-media_screenshot_block' => array(
          'module' => 'views',
          'delta' => 'media-media_screenshot_block',
          'region' => 'sidebar_right',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Core');
  t('Defines which media content to be displayed ');
  $export['mediapage'] = $context;

  return $export;
}
