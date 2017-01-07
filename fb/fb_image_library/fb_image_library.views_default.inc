<?php
/**
 * @file
 * fb_image_library.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function fb_image_library_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'image_library';
  $view->description = '';
  $view->tag = 'fb_media_browser';
  $view->base_table = 'xml';
  $view->human_name = 'Image Library';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Image Library';
  $handler->display->display_options['css_class'] = 'fb-media-browser';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['xml_file'] = 'http://fandbmedia.auth.abs.vmhost.psu.edu/image';
  $handler->display->display_options['query']['options']['row_xpath'] = 'node';
  $handler->display->display_options['query']['options']['show_errors'] = 1;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '40';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '7';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Empty';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no items that match this search criteria.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Field: url */
  $handler->display->display_options['fields']['text_1']['id'] = 'text_1';
  $handler->display->display_options['fields']['text_1']['table'] = 'xml';
  $handler->display->display_options['fields']['text_1']['field'] = 'text';
  $handler->display->display_options['fields']['text_1']['ui_name'] = 'url';
  $handler->display->display_options['fields']['text_1']['label'] = '';
  $handler->display->display_options['fields']['text_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['text_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['text_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['text_1']['xpath_selector'] = 'image-orig/img/@src';
  $handler->display->display_options['fields']['text_1']['multiple'] = 0;
  /* Field: thumb */
  $handler->display->display_options['fields']['text']['id'] = 'text';
  $handler->display->display_options['fields']['text']['table'] = 'xml';
  $handler->display->display_options['fields']['text']['field'] = 'text';
  $handler->display->display_options['fields']['text']['ui_name'] = 'thumb';
  $handler->display->display_options['fields']['text']['label'] = '';
  $handler->display->display_options['fields']['text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['text']['alter']['text'] = '<img src="[text]"/>';
  $handler->display->display_options['fields']['text']['alter']['path'] = '[text_1]';
  $handler->display->display_options['fields']['text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['text']['xpath_selector'] = 'image/img/@src';
  $handler->display->display_options['fields']['text']['multiple'] = 0;
  /* Field: sites */
  $handler->display->display_options['fields']['text_2']['id'] = 'text_2';
  $handler->display->display_options['fields']['text_2']['table'] = 'xml';
  $handler->display->display_options['fields']['text_2']['field'] = 'text';
  $handler->display->display_options['fields']['text_2']['ui_name'] = 'sites';
  $handler->display->display_options['fields']['text_2']['label'] = '';
  $handler->display->display_options['fields']['text_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['text_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['text_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['text_2']['xpath_selector'] = 'sites';
  $handler->display->display_options['fields']['text_2']['multiple'] = 1;
  /* Field: categories */
  $handler->display->display_options['fields']['text_3']['id'] = 'text_3';
  $handler->display->display_options['fields']['text_3']['table'] = 'xml';
  $handler->display->display_options['fields']['text_3']['field'] = 'text';
  $handler->display->display_options['fields']['text_3']['ui_name'] = 'categories';
  $handler->display->display_options['fields']['text_3']['label'] = '';
  $handler->display->display_options['fields']['text_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['text_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['text_3']['xpath_selector'] = 'categories';
  $handler->display->display_options['fields']['text_3']['multiple'] = 0;
  /* Filter criterion: sites: Text */
  $handler->display->display_options['filters']['text']['id'] = 'text';
  $handler->display->display_options['filters']['text']['table'] = 'xml';
  $handler->display->display_options['filters']['text']['field'] = 'text';
  $handler->display->display_options['filters']['text']['exposed'] = TRUE;
  $handler->display->display_options['filters']['text']['expose']['operator_id'] = 'text_op';
  $handler->display->display_options['filters']['text']['expose']['operator'] = 'text_op';
  $handler->display->display_options['filters']['text']['expose']['identifier'] = 'text';
  $handler->display->display_options['filters']['text']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['text']['group_info']['label'] = 'Sites';
  $handler->display->display_options['filters']['text']['group_info']['identifier'] = 'text';
  $handler->display->display_options['filters']['text']['group_info']['group_items'] = array(
    0 => array(
      'title' => 'Abington Campus Living',
      'operator' => '=',
      'value' => 'abingtoncampusliving',
    ),
    1 => array(
      'title' => 'AB Services',
      'operator' => '=',
      'value' => 'abservices',
    ),
    2 => array(
      'title' => 'ABS HR',
      'operator' => '=',
      'value' => 'abshr',
    ),
    3 => array(
      'title' => 'ABS Marketing',
      'operator' => '=',
      'value' => 'abs_marketing',
    ),
    4 => array(
      'title' => 'Altoona Campus Living',
      'operator' => '=',
      'value' => 'altoonacampusliving',
    ),
    5 => array(
      'title' => 'Airport',
      'operator' => '=',
      'value' => 'airport',
    ),
    6 => array(
      'title' => 'Bakery',
      'operator' => '=',
      'value' => 'bakery',
    ),
    7 => array(
      'title' => 'Beaver Campus Living',
      'operator' => '=',
      'value' => 'beavercampusliving',
    ),
    8 => array(
      'title' => 'Behrend Campus Living',
      'operator' => '=',
      'value' => 'behrendcampusliving',
    ),
    9 => array(
      'title' => 'Berks Campus Living',
      'operator' => '=',
      'value' => 'berkscampusliving',
    ),
    10 => array(
      'title' => 'Big Ten Housing',
      'operator' => '=',
      'value' => 'big_ten_housing',
    ),
    11 => array(
      'title' => 'Blue Chip Bistro',
      'operator' => '=',
      'value' => 'blue_chip_bistro',
    ),
    12 => array(
      'title' => 'Brandywine Campus Living',
      'operator' => '=',
      'value' => 'brandywinecampusliving',
    ),
    13 => array(
      'title' => 'Cafe Laura',
      'operator' => '=',
      'value' => 'cafe_laura',
    ),
    14 => array(
      'title' => 'Campus Catering',
      'operator' => '=',
      'value' => 'campus_catering',
    ),
    15 => array(
      'title' => 'Clery',
      'operator' => '=',
      'value' => 'clery',
    ),
    16 => array(
      'title' => 'Common Wealth Campus',
      'operator' => '=',
      'value' => 'CWC',
    ),
    17 => array(
      'title' => 'Common Wealth Campus Police',
      'operator' => '=',
      'value' => 'cwc_police',
    ),
    18 => array(
      'title' => 'EHS',
      'operator' => '=',
      'value' => 'ehs',
    ),
    19 => array(
      'title' => 'Ebuy',
      'operator' => '=',
      'value' => 'ebuy',
    ),
    20 => array(
      'title' => 'Emergency Management',
      'operator' => '=',
      'value' => 'emergency_management',
    ),
    21 => array(
      'title' => 'F&B',
      'operator' => '=',
      'value' => 'fandb',
    ),
    22 => array(
      'title' => 'F&B Diversity',
      'operator' => '=',
      'value' => 'fandbdiversity',
    ),
    23 => array(
      'title' => 'F&B Financial',
      'operator' => '=',
      'value' => 'fandb_financial',
    ),
    24 => array(
      'title' => 'F&B Sites',
      'operator' => '=',
      'value' => 'fandbsites',
    ),
    25 => array(
      'title' => 'Food Services',
      'operator' => '=',
      'value' => 'food_services',
    ),
    26 => array(
      'title' => 'General Stores and Central Distribution',
      'operator' => '=',
      'value' => 'general_stores_and_cds',
    ),
    27 => array(
      'title' => 'Greater Allegheny',
      'operator' => '=',
      'value' => 'gacampusliving',
    ),
    28 => array(
      'title' => 'HFS',
      'operator' => '=',
      'value' => 'hfs',
    ),
    29 => array(
      'title' => 'Harrisburg Campus Living',
      'operator' => '=',
      'value' => 'harrisburgcampusliving',
    ),
    30 => array(
      'title' => 'Hazleton Campus Living',
      'operator' => '=',
      'value' => 'hazletoncampusliving',
    ),
    31 => array(
      'title' => 'Housing',
      'operator' => '=',
      'value' => 'housing',
    ),
    32 => array(
      'title' => 'Hub Dining',
      'operator' => '=',
      'value' => 'hub_dining',
    ),
    33 => array(
      'title' => 'ID Card',
      'operator' => '=',
      'value' => 'idcard',
    ),
    34 => array(
      'title' => 'IT',
      'operator' => '=',
      'value' => 'it',
    ),
    35 => array(
      'title' => 'Internal Audit',
      'operator' => '=',
      'value' => 'internalaudit',
    ),
    36 => array(
      'title' => 'Licensing',
      'operator' => '=',
      'value' => 'licensing',
    ),
    37 => array(
      'title' => 'Mont Alto Campus Living',
      'operator' => '=',
      'value' => 'montaltocampusliving',
    ),
    38 => array(
      'title' => 'Multimedia Print Center',
      'operator' => '=',
      'value' => 'multimedia_print_center',
    ),
    39 => array(
      'title' => 'Nittany Lion Inn',
      'operator' => '=',
      'value' => 'nittany_lion_inn',
    ),
    40 => array(
      'title' => 'OHR',
      'operator' => '=',
      'value' => 'ohr',
    ),
    41 => array(
      'title' => 'OPP',
      'operator' => '=',
      'value' => 'opp',
    ),
    42 => array(
      'title' => 'PSU Police',
      'operator' => '=',
      'value' => 'psu_police',
    ),
    43 => array(
      'title' => 'Physical Security',
      'operator' => '=',
      'value' => 'physical_security',
    ),
    44 => array(
      'title' => 'Purchasing',
      'operator' => '=',
      'value' => 'purpurchasing',
    ),
    45 => array(
      'title' => 'Rescom',
      'operator' => '=',
      'value' => 'rescom',
    ),
    46 => array(
      'title' => 'Schuylkill Campus Living',
      'operator' => '=',
      'value' => 'schuylkillcampusliving',
    ),
    47 => array(
      'title' => 'Supplier Diversity',
      'operator' => '=',
      'value' => 'supplier_diversity',
    ),
    48 => array(
      'title' => 'Surplus',
      'operator' => '=',
      'value' => 'surplus',
    ),
    49 => array(
      'title' => 'The Penn Stater Hotel',
      'operator' => '=',
      'value' => 'the_penn_stater_hotel',
    ),
    50 => array(
      'title' => 'Transportation',
      'operator' => '=',
      'value' => 'transportation',
    ),
    51 => array(
      'title' => 'Travel',
      'operator' => '=',
      'value' => 'travel',
    ),
    52 => array(
      'title' => 'University Ethics',
      'operator' => '=',
      'value' => 'university_ethics',
    ),
    53 => array(
      'title' => 'University Park',
      'operator' => '=',
      'value' => 'university_park',
    ),
    54 => array(
      'title' => 'University Park Police',
      'operator' => '=',
      'value' => 'up_police',
    ),
  );
  $handler->display->display_options['filters']['text']['xpath_selector'] = 'sites';
  /* Filter criterion: categories: Text */
  $handler->display->display_options['filters']['text_1']['id'] = 'text_1';
  $handler->display->display_options['filters']['text_1']['table'] = 'xml';
  $handler->display->display_options['filters']['text_1']['field'] = 'text';
  $handler->display->display_options['filters']['text_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['text_1']['expose']['operator_id'] = 'text_1_op';
  $handler->display->display_options['filters']['text_1']['expose']['label'] = 'Text';
  $handler->display->display_options['filters']['text_1']['expose']['operator'] = 'text_1_op';
  $handler->display->display_options['filters']['text_1']['expose']['identifier'] = 'text_1';
  $handler->display->display_options['filters']['text_1']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['text_1']['group_info']['label'] = 'Categories';
  $handler->display->display_options['filters']['text_1']['group_info']['identifier'] = 'text_1';
  $handler->display->display_options['filters']['text_1']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Cake',
      'operator' => '=',
      'value' => 'cake',
    ),
    2 => array(
      'title' => 'Food',
      'operator' => '=',
      'value' => 'food',
    ),
    3 => array(
      'title' => 'General Campus',
      'operator' => '=',
      'value' => 'general_campus',
    ),
    4 => array(
      'title' => 'Housing',
      'operator' => '=',
      'value' => 'housing',
    ),
    5 => array(
      'title' => 'Police',
      'operator' => '=',
      'value' => 'police',
    ),
    6 => array(
      'title' => 'Staff',
      'operator' => '=',
      'value' => 'staff',
    ),
    7 => array(
      'title' => 'Students',
      'operator' => '=',
      'value' => 'students',
    ),
    8 => array(
      'title' => 'Stock Photos',
      'operator' => '=',
      'value' => 'stock',
    ),
    9 => array(
      'title' => 'Technology',
      'operator' => '=',
      'value' => 'technology',
    ),
  );
  $handler->display->display_options['filters']['text_1']['xpath_selector'] = 'categories';

  /* Display: FB Media Browser */
  $handler = $view->new_display('page', 'FB Media Browser', 'page');
  $handler->display->display_options['display_description'] = 'Browse images from another website.';
  $handler->display->display_options['path'] = 'fb_media_image_library';
  $export['image_library'] = $view;

  return $export;
}
