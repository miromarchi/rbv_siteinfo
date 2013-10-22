<?php
/**
 * @file
 * rbv_siteinfo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rbv_siteinfo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
