<?php
/**
 * @file
 * fb_news_feature_dependencies.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function fb_news_feature_dependencies_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'fb_news_feed_3_stories_sidebar';
  $context->description = '';
  $context->tag = 'FB News 2.0';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
        '~feature-story/all' => '~feature-story/all',
        'feature-story/*' => 'feature-story/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'fb_news_feed-fb_news_feed_3_sb_block' => array(
          'module' => 'fb_news_feed',
          'delta' => 'fb_news_feed_3_sb_block',
          'region' => 'sidebar_second',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('FB News 2.0');
  $export['fb_news_feed_3_stories_sidebar'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'fb_news_feed_all_block';
  $context->description = '';
  $context->tag = 'FB News 2.0';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'feature-story/all' => 'feature-story/all',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'fb_news_feed-fb_news_feed_all_block' => array(
          'module' => 'fb_news_feed',
          'delta' => 'fb_news_feed_all_block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('FB News 2.0');
  $export['fb_news_feed_all_block'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'fb_news_feed_landing_page_block';
  $context->description = '';
  $context->tag = 'FB News 2.0';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'feature-story/*' => 'feature-story/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'fb_news_feed-fb_news_feed_landing_page_block' => array(
          'module' => 'fb_news_feed',
          'delta' => 'fb_news_feed_landing_page_block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('FB News 2.0');
  $export['fb_news_feed_landing_page_block'] = $context;

  return $export;
}
