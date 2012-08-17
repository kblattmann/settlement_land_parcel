<?php

/**
 * Implementation of hook_content_default_fields().
 */
function settlement_land_parcel_content_default_fields() {
  $fields = array();

  // Exported field: field_parcel_linkclean
  $fields['slparcel-field_parcel_linkclean'] = array(
    'field_name' => 'field_parcel_linkclean',
    'type_name' => 'slparcel',
    'display_settings' => array(
      'weight' => '14',
      'parent' => '',
      '5' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'markup',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'computed',
    'required' => '0',
    'multiple' => '0',
    'module' => 'computed_field',
    'active' => '1',
    'code' => 'if (is_null($node->field_slparcel_planno[0][\'value\'])) 
 {
$node_field[0][\'value\'] = "";
 }
else
 {
$front = "http://clss.nrcan.gc.ca/plan-eng.php?id=";
$back = "+CLSR+YT";
$myurl = $front . $node->field_slparcel_planno[0][\'value\'] . $back;
$survey = $node->field_slparcel_planno[0][\'value\'] . " CLSR YT";
$node_field[0][\'value\'] = "<a href =$myurl>$survey</a>";
}',
    'display_format' => '$display = $node_field_item[\'value\'];',
    'store' => 1,
    'data_type' => 'varchar',
    'data_length' => '100',
    'data_size' => 'normal',
    'data_precision' => '10',
    'data_scale' => '2',
    'data_not_NULL' => 0,
    'data_default' => '',
    'data_sortable' => 1,
    'widget' => array(
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Survey Link',
      'weight' => '14',
      'description' => '',
      'type' => 'computed',
      'module' => 'computed_field',
    ),
  );

  // Exported field: field_parcel_lua
  $fields['slparcel-field_parcel_lua'] = array(
    'field_name' => 'field_parcel_lua',
    'type_name' => 'slparcel',
    'display_settings' => array(
      'weight' => '15',
      'parent' => '',
      '5' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereferrer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereferrer',
    'active' => '1',
    'referrer_types' => array(
      'landuseauthorization' => 'landuseauthorization',
      'feed' => 0,
      'feed_item' => 0,
      'fnsettlementlands' => 0,
      'instrument' => 0,
      'land_use_client' => 0,
      'open_page' => 0,
      'page' => 0,
      'panel' => 0,
      'slparcel' => 0,
      'slsubparcel' => 0,
      'ttboundary' => 0,
    ),
    'referrer_fields' => array(
      'field_lua_parcel' => 'field_lua_parcel',
      'field_instrument_lua_ref' => 0,
      'field_lua_subparcel' => 0,
      'field_lua_client' => 0,
      'field_slsubparcel_slparcelref' => 0,
    ),
    'referrer_nodes_per_page' => '0',
    'referrer_pager_element' => '0',
    'referrer_order' => 'TITLE_ASC',
    'widget' => array(
      'label' => 'Land use authorization',
      'weight' => '15',
      'description' => '',
      'type' => 'nodereferrer_list',
      'module' => 'nodereferrer',
    ),
  );

  // Exported field: field_slparcel_area
  $fields['slparcel-field_slparcel_area'] = array(
    'field_name' => 'field_slparcel_area',
    'type_name' => 'slparcel',
    'display_settings' => array(
      'weight' => '6',
      'parent' => '',
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'us_2',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'us_2',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_float',
    'required' => '1',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '  ha',
    'min' => '',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_slparcel_area][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Area',
      'weight' => '6',
      'description' => 'The area of the parcel in hectares.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_slparcel_category
  $fields['slparcel-field_slparcel_category'] = array(
    'field_name' => 'field_slparcel_category',
    'type_name' => 'slparcel',
    'display_settings' => array(
      'weight' => '4',
      'parent' => '',
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'A
B
FS
Retained Reserve',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Category',
      'weight' => '4',
      'description' => 'Settlement land category.',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_slparcel_class
  $fields['slparcel-field_slparcel_class'] = array(
    'field_name' => 'field_slparcel_class',
    'type_name' => 'slparcel',
    'display_settings' => array(
      'weight' => '2',
      'parent' => '',
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Land claim selection parcel
Sub-parcel',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Class',
      'weight' => '2',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_slparcel_develstatus
  $fields['slparcel-field_slparcel_develstatus'] = array(
    'field_name' => 'field_slparcel_develstatus',
    'type_name' => 'slparcel',
    'display_settings' => array(
      'weight' => '7',
      'parent' => '',
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Undeveloped
Developed',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'Undeveloped',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Development Status',
      'weight' => '7',
      'description' => 'The development status of the parcel. This is an official status agreed to between the First Nation and the Yukon government, as described pursuant to 6.1.8 or 7.5.2.9.',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_slparcel_fa_notation
  $fields['slparcel-field_slparcel_fa_notation'] = array(
    'field_name' => 'field_slparcel_fa_notation',
    'type_name' => 'slparcel',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '1',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_slparcel_fa_notation][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Final Agreement Notation',
      'weight' => '16',
      'description' => 'Notation pursuant to the Kluane First Nation Final Agreement.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_slparcel_fn
  $fields['slparcel-field_slparcel_fn'] = array(
    'field_name' => 'field_slparcel_fn',
    'type_name' => 'slparcel',
    'display_settings' => array(
      'weight' => '3',
      'parent' => '',
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Kluane First Nation',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'First Nation',
      'weight' => '3',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_slparcel_lu_designation
  $fields['slparcel-field_slparcel_lu_designation'] = array(
    'field_name' => 'field_slparcel_lu_designation',
    'type_name' => 'slparcel',
    'display_settings' => array(
      'weight' => '8',
      'parent' => '',
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '1',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Commercial
Commercial/Recreation
Community Facilities
Future Development
Future Development/Recreation
Light Industrial
Open Space
Residential
Residential/Future Development

',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Land Use Designation',
      'weight' => '8',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_slparcel_map
  $fields['slparcel-field_slparcel_map'] = array(
    'field_name' => 'field_slparcel_map',
    'type_name' => 'slparcel',
    'display_settings' => array(
      'weight' => '18',
      'parent' => '',
      '5' => array(
        'format' => 'openlayers_map_parcel_printing_map',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'openlayers_wkt',
    'required' => '0',
    'multiple' => '1',
    'module' => 'openlayers_cck',
    'active' => '1',
    'openlayers_cck_feature_types' => array(
      'polygon' => 'polygon',
      'point' => 0,
      'path' => 0,
    ),
    'widget' => array(
      'openlayers_cck_preset_map' => 'parcel_map',
      'openlayers_behaviors' => array(
        'openlayers_behavior_zoomtolayer' => array(
          'enabled' => 1,
          'options' => array(
            'zoomtolayer' => 'openlayers_cck_vector_layer',
            'point_zoom_level' => '8',
          ),
        ),
      ),
      'spatial_widget_save_file' => 0,
      'default_value' => array(
        '0' => array(
          'openlayers_wkt' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Map',
      'weight' => '19',
      'description' => 'Upload a Shapefile in a .zip format.',
      'type' => 'spatial_widget_combo',
      'module' => 'spatial_widget',
    ),
  );

  // Exported field: field_slparcel_parcel
  $fields['slparcel-field_slparcel_parcel'] = array(
    'field_name' => 'field_slparcel_parcel',
    'type_name' => 'slparcel',
    'display_settings' => array(
      'weight' => '1',
      'parent' => '',
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_slparcel_parcel][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Parcel',
      'weight' => '1',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_slparcel_photo
  $fields['slparcel-field_slparcel_photo'] = array(
    'field_name' => 'field_slparcel_photo',
    'type_name' => 'slparcel',
    'display_settings' => array(
      'weight' => '17',
      'parent' => '',
      '5' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'imagefield__lightbox2_compact__not_sure__not_sure',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'imagefield__lightbox2__not_sure__original',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '640x480',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Photo',
      'weight' => '18',
      'description' => 'Upload a photo of this settlement land parcel.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_slparcel_planno
  $fields['slparcel-field_slparcel_planno'] = array(
    'field_name' => 'field_slparcel_planno',
    'type_name' => 'slparcel',
    'display_settings' => array(
      'weight' => '10',
      'parent' => '',
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '   CLSR YT',
    'min' => '',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_slparcel_planno][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Plan Number',
      'weight' => '10',
      'description' => 'The CLSR Plan number (five digits).',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_slparcel_quad
  $fields['slparcel-field_slparcel_quad'] = array(
    'field_name' => 'field_slparcel_quad',
    'type_name' => 'slparcel',
    'display_settings' => array(
      'weight' => '12',
      'parent' => '',
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '1',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '15',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_slparcel_quad][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Quad',
      'weight' => '12',
      'description' => 'QUAD number. For example, 105 D/11.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_slparcel_structures
  $fields['slparcel-field_slparcel_structures'] = array(
    'field_name' => 'field_slparcel_structures',
    'type_name' => 'slparcel',
    'display_settings' => array(
      'weight' => '16',
      'parent' => '',
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_slparcel_structures][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Structures',
      'weight' => '17',
      'description' => 'A description of structures and buildings on the parcel.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_slparcel_surveylink
  $fields['slparcel-field_slparcel_surveylink'] = array(
    'field_name' => 'field_slparcel_surveylink',
    'type_name' => 'slparcel',
    'display_settings' => array(
      'weight' => '13',
      'parent' => '',
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'markup',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'markup',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'computed',
    'required' => '0',
    'multiple' => '0',
    'module' => 'computed_field',
    'active' => '1',
    'code' => 'if (is_null($node->field_slparcel_planno[0][\'value\'])) 
 {
$node_field[0][\'value\'] = "";
 }
else
 {
$node_field[0][\'value\'] = "http://clss.nrcan.gc.ca/plan-eng.php?id=" . $node->field_slparcel_planno[0][\'value\'] . "+CLSR+YT";
}',
    'display_format' => '$display = $node_field_item[\'value\'];',
    'store' => 1,
    'data_type' => 'varchar',
    'data_length' => '200',
    'data_size' => 'normal',
    'data_precision' => '10',
    'data_scale' => '2',
    'data_not_NULL' => 0,
    'data_default' => '',
    'data_sortable' => 1,
    'widget' => array(
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Survey Link',
      'weight' => '13',
      'description' => '',
      'type' => 'computed',
      'module' => 'computed_field',
    ),
  );

  // Exported field: field_slparcel_tax
  $fields['slparcel-field_slparcel_tax'] = array(
    'field_name' => 'field_slparcel_tax',
    'type_name' => 'slparcel',
    'display_settings' => array(
      'weight' => '9',
      'parent' => '',
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_decimal',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '$',
    'suffix' => '',
    'min' => '0',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'precision' => '10',
    'scale' => '2',
    'decimal' => '.',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '0',
          '_error_element' => 'default_value_widget][field_slparcel_tax][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Tax Rate',
      'weight' => '9',
      'description' => 'The parcel\'s annual tax rate.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_slparcel_title
  $fields['slparcel-field_slparcel_title'] = array(
    'field_name' => 'field_slparcel_title',
    'type_name' => 'slparcel',
    'display_settings' => array(
      'weight' => '11',
      'parent' => '',
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '140',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_slparcel_title][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Title',
      'weight' => '11',
      'description' => 'Enter the Plan Title name.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_slparcel_type
  $fields['slparcel-field_slparcel_type'] = array(
    'field_name' => 'field_slparcel_type',
    'type_name' => 'slparcel',
    'display_settings' => array(
      'weight' => '5',
      'parent' => '',
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Community lands
Site specific lands
Rural lands
Reserve No 1',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Type',
      'weight' => '5',
      'description' => 'The type of the land selection. C=Community, S= Site Specific, R= Rural.',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Area');
  t('Category');
  t('Class');
  t('Development Status');
  t('Final Agreement Notation');
  t('First Nation');
  t('Land Use Designation');
  t('Land use authorization');
  t('Map');
  t('Parcel');
  t('Photo');
  t('Plan Number');
  t('Quad');
  t('Structures');
  t('Survey Link');
  t('Tax Rate');
  t('Title');
  t('Type');

  return $fields;
}
