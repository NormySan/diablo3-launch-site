<?php
/**
 * @file
 * Site aliases that are utilised by Drush.
 *
 * These aliases makes it possible to execute Drush on another site. By adding
 * the alias in the beginning of the command, the command will be executed on
 * the other site. E.g. drush @staging features.
 */

/**
 * An alias for the staging site.
 *
 * This should point to the site on Odd Server, for any normal circumstances.
 */
/*
$aliases['staging'] = array(
  'uri' => 'http://example.oddserver.se',
  'root' => '/var/www/example',
  'remote-host' => 'oddserver.se',
  'remote-user' => 'admin',
  'command-specific' => array (
    'sql-sync' => array (
      'create-db' => TRUE,
    ),
  ),
);
*/