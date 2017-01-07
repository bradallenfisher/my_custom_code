<?php
/**
 * @file
 * fb_news_feature_3_stories_homepage.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function fb_news_feature_3_stories_homepage_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'fb_news_feed_3_stories_homepage';
  $context->description = '';
  $context->tag = 'FB News 2.0';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'fb_news_feed-fb_news_feed_3_hp_block' => array(
          'module' => 'fb_news_feed',
          'delta' => 'fb_news_feed_3_hp_block',
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
  $export['fb_news_feed_3_stories_homepage'] = $context;

  return $export;
}
