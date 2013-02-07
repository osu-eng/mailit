<?php
/**
 * @file
 * mailit.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mailit_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mail_cpn_email|node|mail_campaign|form';
  $field_group->group_name = 'group_mail_cpn_email';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mail_campaign';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tell us about your Email',
    'weight' => '0',
    'children' => array(
      0 => 'field_mail_cpn_cc',
      1 => 'field_mail_cpn_from',
      2 => 'field_mail_cpn_from_name',
      3 => 'field_mail_cpn_subject',
      4 => 'field_mail_cpn_replyto',
      5 => 'field_mail_cpn_list',
      6 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_mail_cpn_email|node|mail_campaign|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mail_cpn_tpl_fields|node|mail_campaign|form';
  $field_group->group_name = 'group_mail_cpn_tpl_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mail_campaign';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Complete your email',
    'weight' => '2',
    'children' => array(
      0 => 'field_mail_cpn_plain1',
      1 => 'field_mail_cpn_plain2',
      2 => 'field_mail_cpn_plain4',
      3 => 'field_mail_cpn_plain3',
      4 => 'field_mail_cpn_plain5',
      5 => 'field_mail_cpn_plain6',
      6 => 'field_mail_cpn_html1',
      7 => 'field_mail_cpn_html2',
      8 => 'field_mail_cpn_html3',
      9 => 'field_mail_cpn_html4',
      10 => 'field_mail_cpn_html5',
      11 => 'field_mail_cpn_html6',
      12 => 'field_mail_cpn_teaser',
      13 => 'field_mail_cpn_body',
      14 => 'field_mail_cpn_contact',
      15 => 'field_mail_cpn_img1',
      16 => 'field_mail_cpn_img2',
      17 => 'field_mail_cpn_img3',
      18 => 'field_mail_cpn_img4',
      19 => 'field_mail_cpn_img5',
      20 => 'field_mail_cpn_img6',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Complete your email',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_mail_cpn_tpl_fields|node|mail_campaign|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mail_cpn_tpl|node|mail_campaign|form';
  $field_group->group_name = 'group_mail_cpn_tpl';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mail_campaign';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Choose a Template',
    'weight' => '1',
    'children' => array(
      0 => 'field_mail_cpn_tpl_ref',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_mail_cpn_tpl|node|mail_campaign|form'] = $field_group;

  return $export;
}
