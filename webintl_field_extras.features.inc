<?php
/**
 * @file
 * webintl_field_extras.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function webintl_field_extras_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}
