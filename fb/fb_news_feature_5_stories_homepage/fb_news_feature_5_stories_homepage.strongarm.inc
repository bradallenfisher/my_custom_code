<?php
/**
 * @file
 * fb_news_feature_5_stories_homepage.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function fb_news_feature_5_stories_homepage_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'authcache_block-fb_news_feed-fb_news_feed_3_sb_block';
  $strongarm->value = array(
    'status' => '1',
    'lifespan' => '0',
    'clients' => array(
      'authcache_esi' => array(
        'status' => '1',
        'weight' => '0',
      ),
    ),
    'fallback' => 'cancel',
    'peruser' => 0,
    'perpage' => 0,
  );
  $export['authcache_block-fb_news_feed-fb_news_feed_3_sb_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'authcache_block-fb_news_feed-fb_news_feed_5_hp_block';
  $strongarm->value = array(
    'status' => '1',
    'lifespan' => '0',
    'clients' => array(
      'authcache_esi' => array(
        'status' => '1',
        'weight' => '0',
      ),
    ),
    'fallback' => 'cancel',
    'peruser' => 0,
    'perpage' => 0,
  );
  $export['authcache_block-fb_news_feed-fb_news_feed_5_hp_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'authcache_block-fb_news_feed-fb_news_feed_all_block';
  $strongarm->value = array(
    'status' => '1',
    'lifespan' => '0',
    'clients' => array(
      'authcache_esi' => array(
        'status' => '1',
        'weight' => '0',
      ),
    ),
    'fallback' => 'cancel',
    'peruser' => 0,
    'perpage' => 0,
  );
  $export['authcache_block-fb_news_feed-fb_news_feed_all_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'authcache_block-fb_news_feed-fb_news_feed_landing_page_block';
  $strongarm->value = array(
    'status' => '1',
    'lifespan' => '0',
    'clients' => array(
      'authcache_esi' => array(
        'status' => '1',
        'weight' => '0',
      ),
    ),
    'fallback' => 'cancel',
    'peruser' => 0,
    'perpage' => 0,
  );
  $export['authcache_block-fb_news_feed-fb_news_feed_landing_page_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'authcache_http200';
  $strongarm->value = 1;
  $export['authcache_http200'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'authcache_mimetype';
  $strongarm->value = 'text/html
text/javascript
text/plain
application/xml
application/atom+xml
';
  $export['authcache_mimetype'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'authcache_noajax';
  $strongarm->value = 1;
  $export['authcache_noajax'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'authcache_roles';
  $strongarm->value = array(
    1 => '1',
    2 => '2',
    3 => '3',
    7 => '7',
    4 => '4',
    10 => '10',
  );
  $export['authcache_roles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rrssb_chosen';
  $strongarm->value = array(
    'facebook' => 'facebook',
    'tumblr' => 'tumblr',
    'linkedin' => 'linkedin',
    'twitter' => 'twitter',
    'reddit' => 'reddit',
    'googleplus' => 'googleplus',
    'email' => 0,
    'hackernews' => 0,
    'youtube' => 0,
    'pinterest' => 0,
    'pocket' => 0,
    'github' => 0,
    'vk' => 0,
  );
  $export['rrssb_chosen'] = $strongarm;

  return $export;
}
