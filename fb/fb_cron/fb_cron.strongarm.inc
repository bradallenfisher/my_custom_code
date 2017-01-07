<?php
/**
 * @file
 * fb_cron.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function fb_cron_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'elysia_cron_alert_interval';
  $strongarm->value = '60';
  $export['elysia_cron_alert_interval'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'elysia_cron_default_rules';
  $strongarm->value = array(
    '* * * * *' => 'Every Minute',
    '*/15 * * * *' => 'Every 15 minutes',
    '*/30 * * * *' => 'Every 30 minutes',
    '0 * * * *' => 'Every hour',
    '0 */6 * * *' => 'Every 6 hours',
    '0 4 * * *' => 'Once a day',
    '0 4 * * 0' => 'Once a week',
    '0 0 1 * *' => 'Once a month',
  );
  $export['elysia_cron_default_rules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'elysia_cron_time_limit';
  $strongarm->value = '240';
  $export['elysia_cron_time_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'elysia_cron_version';
  $strongarm->value = 20111020;
  $export['elysia_cron_version'] = $strongarm;

  return $export;
}
