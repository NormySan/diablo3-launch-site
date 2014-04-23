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
  $context->name = 'media_page';
  $context->description = 'The main media page.';
  $context->tag = 'Media';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'media' => 'media',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-media_videos-block' => array(
          'module' => 'views',
          'delta' => 'media_videos-block',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-media_fanart-block' => array(
          'module' => 'views',
          'delta' => 'media_fanart-block',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-media_screenshots-block' => array(
          'module' => 'views',
          'delta' => 'media_screenshots-block',
          'region' => 'content',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Media');
  t('The main media page.');
  $export['media_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'media_views';
  $context->description = 'Context for fanart, screenshot and video pages.';
  $context->tag = 'Media';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'media/*' => 'media/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'blockify-blockify-page-title' => array(
          'module' => 'blockify',
          'delta' => 'blockify-page-title',
          'region' => 'content',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for fanart, screenshot and video pages.');
  t('Media');
  $export['media_views'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'single_fanart';
  $context->description = 'When displaying a single fanart node.';
  $context->tag = 'Media';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'media/fanart/*' => 'media/fanart/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'blockify-blockify-page-title' => array(
          'module' => 'blockify',
          'delta' => 'blockify-page-title',
          'region' => 'content',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-media_fanart-other' => array(
          'module' => 'views',
          'delta' => 'media_fanart-other',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Media');
  t('When displaying a single fanart node.');
  $export['single_fanart'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'single_screenshot';
  $context->description = 'When displaying a single screenshot node.';
  $context->tag = 'Media';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'media/screenshots/*' => 'media/screenshots/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'blockify-blockify-page-title' => array(
          'module' => 'blockify',
          'delta' => 'blockify-page-title',
          'region' => 'content',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-media_screenshots-other' => array(
          'module' => 'views',
          'delta' => 'media_screenshots-other',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Media');
  t('When displaying a single screenshot node.');
  $export['single_screenshot'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'single_video';
  $context->description = 'When displaying a single video node.';
  $context->tag = 'Media';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'media/videos/*' => 'media/videos/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'blockify-blockify-page-title' => array(
          'module' => 'blockify',
          'delta' => 'blockify-page-title',
          'region' => 'content',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-media_videos-other' => array(
          'module' => 'views',
          'delta' => 'media_videos-other',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Media');
  t('When displaying a single video node.');
  $export['single_video'] = $context;

  return $export;
}
