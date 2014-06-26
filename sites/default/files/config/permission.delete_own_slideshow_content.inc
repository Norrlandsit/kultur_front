<?php
/**
 * @file
 * permission.delete_own_slideshow_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete own slideshow content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.slideshow' => 'content_type.slideshow',
);

$optional = array();

$modules = array(
  0 => 'node',
);
