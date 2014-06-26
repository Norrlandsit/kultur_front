<?php
/**
 * @file
 * content_type.slideshow.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'slideshow',
  'name' => 'slideshow',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.field_bundle_settings_node__slideshow' => 'variable.field_bundle_settings_node__slideshow',
  'variable.node_options_slideshow' => 'variable.node_options_slideshow',
  'variable.node_preview_slideshow' => 'variable.node_preview_slideshow',
  'variable.node_submitted_slideshow' => 'variable.node_submitted_slideshow',
  'variable.comment_default_per_page_slideshow' => 'variable.comment_default_per_page_slideshow',
  'variable.comment_form_location_slideshow' => 'variable.comment_form_location_slideshow',
  'variable.comment_preview_slideshow' => 'variable.comment_preview_slideshow',
  'variable.comment_subject_field_slideshow' => 'variable.comment_subject_field_slideshow',
);

$optional = array(
  'field.node.field_slideshow_image.slideshow' => 'field.node.field_slideshow_image.slideshow',
  'field.node.field_text.slideshow' => 'field.node.field_text.slideshow',
  'field.node.field_riktig_text.slideshow' => 'field.node.field_riktig_text.slideshow',
  'permission.create_slideshow_content' => 'permission.create_slideshow_content',
  'permission.edit_own_slideshow_content' => 'permission.edit_own_slideshow_content',
  'permission.edit_any_slideshow_content' => 'permission.edit_any_slideshow_content',
  'permission.delete_own_slideshow_content' => 'permission.delete_own_slideshow_content',
  'permission.delete_any_slideshow_content' => 'permission.delete_any_slideshow_content',
);

$modules = array(
  0 => 'node',
);
