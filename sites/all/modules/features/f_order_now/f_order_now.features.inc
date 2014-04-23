<?php
/**
 * @file
 * f_order_now.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_order_now_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function f_order_now_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entityform_type().
 */
function f_order_now_default_entityform_type() {
  $items = array();
  $items['order_now'] = entity_import('entityform_type', '{
    "type" : "order_now",
    "label" : "Order Now",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "filtered_html" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "\\u003Cnone\\u003E",
      "preview_page" : 0,
      "submission_page_title" : "Thank you!",
      "submission_text" : {
        "value" : "\\u003Cp\\u003ESuccess but the shit wont work!\\u0026nbsp;\\u003C\\/p\\u003E",
        "format" : "filtered_html"
      },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2" },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "\\u003Cp\\u003ENow is the time! PAY US and you forever play the game!\\u003C\\/p\\u003E",
        "format" : "filtered_html"
      }
    },
    "weight" : "0",
    "paths" : []
  }');
  return $items;
}

/**
 * Implements hook_node_info().
 */
function f_order_now_node_info() {
  $items = array(
    'entity_form' => array(
      'name' => t('Entity Form'),
      'base' => 'node_content',
      'description' => t('This is a simple page with the option to use entity forms.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
