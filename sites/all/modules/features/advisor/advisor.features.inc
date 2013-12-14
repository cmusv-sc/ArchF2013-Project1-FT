<?php
/**
 * @file
 * advisor.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function advisor_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function advisor_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function advisor_node_info() {
  $items = array(
    'advisor' => array(
      'name' => t('Advisor'),
      'base' => 'node_content',
      'description' => t('Project advisor profile'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
