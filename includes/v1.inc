<?php

/**
 * @file
 * includes/v1.inc
 */

/**
 * Handle a DataONE API ver. 1 request.
 */
function _dataone_api_v1_request() {
  // Get the requested arguments.
  $args = func_get_args();

  // Figure out which class to call.
  $class = _dataone_api_version_class_name(DATAONE_API_VERSION_1);
  $class::requestHandler($args);
}

/**
 * How to load a pid. Used in hook_menu().
 */
function dataone_api_v1_pid_load($pid) {
  // Figure out which class to call.
  $class = _dataone_api_version_class_name(DATAONE_API_VERSION_1);
  return $class::getPid($pid);
}