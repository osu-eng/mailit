<?php
/**
 * @file
 * mailit.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mailit_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'mail_template_options';
  $view->description = 'This provides a listing of template options for use in the Campaign content type.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Mail Template Options';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Preview */
  $handler->display->display_options['fields']['field_mail_tpl_preview']['id'] = 'field_mail_tpl_preview';
  $handler->display->display_options['fields']['field_mail_tpl_preview']['table'] = 'field_data_field_mail_tpl_preview';
  $handler->display->display_options['fields']['field_mail_tpl_preview']['field'] = 'field_mail_tpl_preview';
  $handler->display->display_options['fields']['field_mail_tpl_preview']['label'] = '';
  $handler->display->display_options['fields']['field_mail_tpl_preview']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mail_tpl_preview']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_mail_tpl_preview']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_mail_tpl_description']['id'] = 'field_mail_tpl_description';
  $handler->display->display_options['fields']['field_mail_tpl_description']['table'] = 'field_data_field_mail_tpl_description';
  $handler->display->display_options['fields']['field_mail_tpl_description']['field'] = 'field_mail_tpl_description';
  $handler->display->display_options['fields']['field_mail_tpl_description']['label'] = '';
  $handler->display->display_options['fields']['field_mail_tpl_description']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mail_template' => 'mail_template',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
    'field_mail_tpl_description' => 'field_mail_tpl_description',
    'field_mail_tpl_preview' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['mail_template_options'] = $view;

  return $export;
}
