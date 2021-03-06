<?php
/**
 * @file
 * contributor.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function contributor_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function contributor_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function contributor_node_info() {
  $items = array(
    'contributor' => array(
      'name' => t('Contributor'),
      'base' => 'node_content',
      'description' => t('Project Contributor'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
