<?php
/**
 * @file
 * fb_news_feature_5_stories_homepage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fb_news_feature_5_stories_homepage_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
