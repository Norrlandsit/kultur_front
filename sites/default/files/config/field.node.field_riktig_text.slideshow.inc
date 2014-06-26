<?php
/**
 * @file
 * field.node.field_riktig_text.slideshow.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_riktig_text' => array(
              'value' => 'field_riktig_text_value',
              'summary' => 'field_riktig_text_summary',
              'format' => 'field_riktig_text_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_riktig_text' => array(
              'value' => 'field_riktig_text_value',
              'summary' => 'field_riktig_text_summary',
              'format' => 'field_riktig_text_format',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(
      'format' => array(
        'table' => 'filter_format',
        'columns' => array(
          'format' => 'format',
        ),
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'field_name' => 'field_riktig_text',
    'type' => 'text_with_summary',
    'module' => 'text',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'text',
        'size' => 'big',
        'not null' => FALSE,
      ),
      'summary' => array(
        'type' => 'text',
        'size' => 'big',
        'not null' => FALSE,
      ),
      'format' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'riktig_text',
    'widget' => array(
      'weight' => '-2',
      'type' => 'text_textarea_with_summary',
      'module' => 'text',
      'active' => 1,
      'settings' => array(
        'rows' => '20',
        'summary_rows' => 5,
      ),
    ),
    'settings' => array(
      'text_processing' => '1',
      'display_summary' => 0,
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'text_default',
        'settings' => array(),
        'module' => 'text',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'type' => 'text_default',
        'weight' => '0',
        'settings' => array(),
        'module' => 'text',
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_riktig_text',
    'entity_type' => 'node',
    'bundle' => 'slideshow',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.slideshow' => 'content_type.slideshow',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'text',
);
