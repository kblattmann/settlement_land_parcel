<?php

/**
 * Implementation of hook_strongarm().
 */
function settlement_land_parcel_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_slparcel';
  $strongarm->value = 0;
  $export['comment_anonymous_slparcel'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_slparcel';
  $strongarm->value = '3';
  $export['comment_controls_slparcel'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_slparcel';
  $strongarm->value = '4';
  $export['comment_default_mode_slparcel'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_slparcel';
  $strongarm->value = '1';
  $export['comment_default_order_slparcel'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_slparcel';
  $strongarm->value = '50';
  $export['comment_default_per_page_slparcel'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_slparcel';
  $strongarm->value = '0';
  $export['comment_form_location_slparcel'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_slparcel';
  $strongarm->value = '1';
  $export['comment_preview_slparcel'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_slparcel';
  $strongarm->value = '0';
  $export['comment_slparcel'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_slparcel';
  $strongarm->value = '1';
  $export['comment_subject_field_slparcel'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_slparcel';
  $strongarm->value = array(
    'title' => '20',
    'revision_information' => '22',
    'author' => '23',
    'options' => '24',
    'comment_settings' => '26',
    'menu' => '21',
    'path' => '27',
    'attachments' => '25',
    'print' => '28',
  );
  $export['content_extra_weights_slparcel'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ffp_slparcel_field_slparcel_photo';
  $strongarm->value = 0;
  $export['ffp_slparcel_field_slparcel_photo'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_slparcel';
  $strongarm->value = '0';
  $export['language_content_type_slparcel'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_slparcel';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_slparcel'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_slparcel';
  $strongarm->value = '1';
  $export['upload_slparcel'] = $strongarm;

  return $export;
}
