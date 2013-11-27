<?php
/**
 * @file
 * documentation.features.inc
 */

/**
 * Implements hook_views_api().
 */
function documentation_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function documentation_node_info() {
  $items = array(
    'documentation' => array(
      'name' => t('Documentation'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
