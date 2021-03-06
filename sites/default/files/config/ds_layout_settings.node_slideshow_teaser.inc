<?php
/**
 * @file
 * ds_layout_settings.node_slideshow_teaser.inc
 */

$api = '2.0.0';

$data = $ds_layout = new stdClass();
$ds_layout->api_version = 1;
$ds_layout->id = 'node|slideshow|teaser';
$ds_layout->entity_type = 'node';
$ds_layout->bundle = 'slideshow';
$ds_layout->view_mode = 'teaser';
$ds_layout->layout = 'ds_2col';
$ds_layout->settings = array(
  'regions' => array(
    'left' => array(
      0 => 'field_riktig_text',
    ),
    'right' => array(
      1 => 'field_slideshow_image',
    ),
  ),
  'fields' => array(
    'field_riktig_text' => 'left',
    'field_slideshow_image' => 'right',
  ),
  'classes' => array(),
  'wrappers' => array(
    'left' => 'div',
    'right' => 'div',
  ),
  'layout_wrapper' => 'div',
  'layout_attributes' => '',
  'layout_attributes_merge' => 1,
  'layout_link_attribute' => '',
  'layout_link_custom' => '',
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);
