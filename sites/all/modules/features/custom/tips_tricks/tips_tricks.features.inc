<?php
/**
 * @file
 * tips_tricks.features.inc
 */

/**
 * Implements hook_node_info().
 */
function tips_tricks_node_info() {
  $items = array(
    'tips_tricks' => array(
      'name' => t('Tips & Tricks'),
      'base' => 'node_content',
      'description' => t('Got a really neat kitchen tip or trick?  Put it here! '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
