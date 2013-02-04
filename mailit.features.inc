<?php
/**
 * @file
 * mailit.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mailit_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mailit_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function mailit_node_info() {
  $items = array(
    'mail_campaign' => array(
      'name' => t('Campaign'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'mail_list' => array(
      'name' => t('List'),
      'base' => 'node_content',
      'description' => t('A mailing list'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'mail_template' => array(
      'name' => t('Template'),
      'base' => 'node_content',
      'description' => t('This is a template for an email.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
