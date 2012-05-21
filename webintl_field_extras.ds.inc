<?php
/**
 * @file
 * webintl_field_extras.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function webintl_field_extras_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_address|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_address';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_address_label',
        1 => 'field_address_line_1',
        2 => 'field_address_line_2',
        3 => 'field_address_city',
        4 => 'field_address_state',
        5 => 'field_address_zip',
      ),
    ),
    'fields' => array(
      'field_address_label' => 'ds_content',
      'field_address_line_1' => 'ds_content',
      'field_address_line_2' => 'ds_content',
      'field_address_city' => 'ds_content',
      'field_address_state' => 'ds_content',
      'field_address_zip' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['field_collection_item|field_address|default'] = $ds_layout;

  return $export;
}
