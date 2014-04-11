<?php
/**
 * @file
 * f_frontpage.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function f_frontpage_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'diablo_3_news';
  $feeds_importer->config = array(
    'name' => 'Diablo 3 News',
    'description' => 'News pulled from the official diablo 3 site.',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSyndicationParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => -1,
        'author' => 0,
        'authorize' => TRUE,
        'mappings' => array(),
        'update_existing' => 0,
        'input_format' => NULL,
        'skip_hash_check' => FALSE,
        'bundle' => NULL,
      ),
    ),
    'content_type' => 'news',
    'update' => 0,
    'import_period' => '900',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['diablo_3_news'] = $feeds_importer;

  return $export;
}
