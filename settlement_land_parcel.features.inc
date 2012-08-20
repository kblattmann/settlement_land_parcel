<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function settlement_land_parcel_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function settlement_land_parcel_node_info() {
  $items = array(
    'slparcel' => array(
      'name' => t('Settlement Land Parcel'),
      'module' => 'features',
      'description' => t('SL parcel information.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
