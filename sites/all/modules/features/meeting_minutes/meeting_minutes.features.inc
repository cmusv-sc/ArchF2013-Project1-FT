<?php
/**
 * @file
 * meeting_minutes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function meeting_minutes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function meeting_minutes_node_info() {
  $items = array(
    'meeting_minutes' => array(
      'name' => t('Meeting Minutes'),
      'base' => 'node_content',
      'description' => t('Meeting minutes '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
