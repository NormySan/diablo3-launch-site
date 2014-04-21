<?php
/**
 * @file
 * f_news.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function f_news_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_item_display';
  $context->description = 'When a single news items page is viewed.';
  $context->tag = 'News';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'news/*' => 'news/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-slider-slider_full' => array(
          'module' => 'views',
          'delta' => 'slider-slider_full',
          'region' => 'header',
          'weight' => '-10',
        ),
        'views-news-recent_articles' => array(
          'module' => 'views',
          'delta' => 'news-recent_articles',
          'region' => 'sidebar_right',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('News');
  t('When a single news items page is viewed.');
  $export['news_item_display'] = $context;

  return $export;
}
