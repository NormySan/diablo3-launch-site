<?php
/**
 * @file
 * f_frontpage.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function f_frontpage_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'frontpage';
  $context->description = 'Defines content to be displayed on the frontpage.';
  $context->tag = 'Core';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'custom_frontpage' => 'custom_frontpage',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-6208469ffed39ab3e42d08b737416932' => array(
          'module' => 'views',
          'delta' => '6208469ffed39ab3e42d08b737416932',
          'region' => 'content',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-3a93eb24efc27f85083ae45244b8601b' => array(
          'module' => 'views',
          'delta' => '3a93eb24efc27f85083ae45244b8601b',
          'region' => 'sidebar_right',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Core');
  t('Defines content to be displayed on the frontpage.');
  $export['frontpage'] = $context;

  return $export;
}
