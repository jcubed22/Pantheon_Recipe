<?php
/**
 * @file
 * press_awards.features.inc
 */

/**
 * Implements hook_node_info().
 */
function press_awards_node_info() {
  $items = array(
    'press_awards' => array(
      'name' => t('Press & Awards'),
      'base' => 'node_content',
      'description' => t('A page to show off all your impressive awards, reviews, and other positive press.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
