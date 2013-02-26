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
  $view->name = 'mail_list_directory';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Mail List Directory';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Mailing Lists';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: List Id */
  $handler->display->display_options['fields']['field_mail_list_id']['id'] = 'field_mail_list_id';
  $handler->display->display_options['fields']['field_mail_list_id']['table'] = 'field_data_field_mail_list_id';
  $handler->display->display_options['fields']['field_mail_list_id']['field'] = 'field_mail_list_id';
  $handler->display->display_options['fields']['field_mail_list_id']['label'] = '';
  $handler->display->display_options['fields']['field_mail_list_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mail_list_id']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_mail_list_description']['id'] = 'field_mail_list_description';
  $handler->display->display_options['fields']['field_mail_list_description']['table'] = 'field_data_field_mail_list_description';
  $handler->display->display_options['fields']['field_mail_list_description']['field'] = 'field_mail_list_description';
  $handler->display->display_options['fields']['field_mail_list_description']['label'] = '';
  $handler->display->display_options['fields']['field_mail_list_description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_mail_list_description']['alter']['text'] = '<h3>[title] ([field_mail_list_id])</h3>
[field_mail_list_description]';
  $handler->display->display_options['fields']['field_mail_list_description']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
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
    'mail_list' => 'mail_list',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'mail/lists';
  $export['mail_list_directory'] = $view;

  $view = new view();
  $view->name = 'mail_list_options';
  $view->description = 'This provides a listing of template options for use in the Campaign content type.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Mail List Options';
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
  /* Field: Content: List Id */
  $handler->display->display_options['fields']['field_mail_list_id']['id'] = 'field_mail_list_id';
  $handler->display->display_options['fields']['field_mail_list_id']['table'] = 'field_data_field_mail_list_id';
  $handler->display->display_options['fields']['field_mail_list_id']['field'] = 'field_mail_list_id';
  $handler->display->display_options['fields']['field_mail_list_id']['label'] = '';
  $handler->display->display_options['fields']['field_mail_list_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mail_list_id']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_mail_list_description']['id'] = 'field_mail_list_description';
  $handler->display->display_options['fields']['field_mail_list_description']['table'] = 'field_data_field_mail_list_description';
  $handler->display->display_options['fields']['field_mail_list_description']['field'] = 'field_mail_list_description';
  $handler->display->display_options['fields']['field_mail_list_description']['label'] = '';
  $handler->display->display_options['fields']['field_mail_list_description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_mail_list_description']['alter']['text'] = '[title] ([field_mail_list_id])';
  $handler->display->display_options['fields']['field_mail_list_description']['element_label_colon'] = FALSE;
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
    'mail_list' => 'mail_list',
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
    'field_mail_list_id' => 'field_mail_list_id',
    'title' => 'title',
    'field_mail_list_description' => 'field_mail_list_description',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['mail_list_options'] = $view;

  $view = new view();
  $view->name = 'mail_my_campaigns';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Mail My Campaigns';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Email Messages';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No Results';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'You do not have any email messages.  Perhaps you would like to <a href="/node/add/mail-campaign">create a new message</a>.';
  $handler->display->display_options['empty']['area']['format'] = 'mail';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_mail_cpn_tpl_ref_target_id']['id'] = 'field_mail_cpn_tpl_ref_target_id';
  $handler->display->display_options['relationships']['field_mail_cpn_tpl_ref_target_id']['table'] = 'field_data_field_mail_cpn_tpl_ref';
  $handler->display->display_options['relationships']['field_mail_cpn_tpl_ref_target_id']['field'] = 'field_mail_cpn_tpl_ref_target_id';
  $handler->display->display_options['relationships']['field_mail_cpn_tpl_ref_target_id']['label'] = 'Template';
  $handler->display->display_options['relationships']['field_mail_cpn_tpl_ref_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_mail_cpn_list_target_id']['id'] = 'field_mail_cpn_list_target_id';
  $handler->display->display_options['relationships']['field_mail_cpn_list_target_id']['table'] = 'field_data_field_mail_cpn_list';
  $handler->display->display_options['relationships']['field_mail_cpn_list_target_id']['field'] = 'field_mail_cpn_list_target_id';
  $handler->display->display_options['relationships']['field_mail_cpn_list_target_id']['label'] = 'List';
  $handler->display->display_options['relationships']['field_mail_cpn_list_target_id']['required'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Preview */
  $handler->display->display_options['fields']['field_mail_tpl_preview']['id'] = 'field_mail_tpl_preview';
  $handler->display->display_options['fields']['field_mail_tpl_preview']['table'] = 'field_data_field_mail_tpl_preview';
  $handler->display->display_options['fields']['field_mail_tpl_preview']['field'] = 'field_mail_tpl_preview';
  $handler->display->display_options['fields']['field_mail_tpl_preview']['relationship'] = 'field_mail_cpn_tpl_ref_target_id';
  $handler->display->display_options['fields']['field_mail_tpl_preview']['label'] = '';
  $handler->display->display_options['fields']['field_mail_tpl_preview']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_mail_tpl_preview']['alter']['path'] = 'campaign/[nid]/preview';
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
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'campaign/[nid]/preview';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: List Id */
  $handler->display->display_options['fields']['field_mail_list_id']['id'] = 'field_mail_list_id';
  $handler->display->display_options['fields']['field_mail_list_id']['table'] = 'field_data_field_mail_list_id';
  $handler->display->display_options['fields']['field_mail_list_id']['field'] = 'field_mail_list_id';
  $handler->display->display_options['fields']['field_mail_list_id']['relationship'] = 'field_mail_cpn_list_target_id';
  $handler->display->display_options['fields']['field_mail_list_id']['label'] = '';
  $handler->display->display_options['fields']['field_mail_list_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mail_list_id']['element_label_colon'] = FALSE;
  /* Field: Content revision: Updated date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['exclude'] = TRUE;
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'time ago';
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_mail_cpn_teaser']['id'] = 'field_mail_cpn_teaser';
  $handler->display->display_options['fields']['field_mail_cpn_teaser']['table'] = 'field_data_field_mail_cpn_teaser';
  $handler->display->display_options['fields']['field_mail_cpn_teaser']['field'] = 'field_mail_cpn_teaser';
  $handler->display->display_options['fields']['field_mail_cpn_teaser']['label'] = 'Message';
  $handler->display->display_options['fields']['field_mail_cpn_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mail_cpn_teaser']['alter']['text'] = '<h2>[title] ([field_mail_list_id])</h2>
<span style="font-size:smaller;">Updated [timestamp]</span><br />
<p>[field_mail_cpn_teaser]</p>';
  $handler->display->display_options['fields']['field_mail_cpn_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mail_cpn_teaser']['hide_alter_empty'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Message';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h2>[title] ([field_mail_list_id])</h2>
<p><span style="font-size:smaller;">Updated [timestamp]</span><br />
[field_mail_cpn_teaser]</p>';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
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
    'mail_campaign' => 'mail_campaign',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'mail/my-campaigns';
  $export['mail_my_campaigns'] = $view;

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
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_mail_tpl_description']['id'] = 'field_mail_tpl_description';
  $handler->display->display_options['fields']['field_mail_tpl_description']['table'] = 'field_data_field_mail_tpl_description';
  $handler->display->display_options['fields']['field_mail_tpl_description']['field'] = 'field_mail_tpl_description';
  $handler->display->display_options['fields']['field_mail_tpl_description']['label'] = '';
  $handler->display->display_options['fields']['field_mail_tpl_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mail_tpl_description']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Weight (field_mail_tpl_weight) */
  $handler->display->display_options['sorts']['field_mail_tpl_weight_value']['id'] = 'field_mail_tpl_weight_value';
  $handler->display->display_options['sorts']['field_mail_tpl_weight_value']['table'] = 'field_data_field_mail_tpl_weight';
  $handler->display->display_options['sorts']['field_mail_tpl_weight_value']['field'] = 'field_mail_tpl_weight_value';
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
  /* Filter criterion: Content: Archived (field_mail_tpl_archived) */
  $handler->display->display_options['filters']['field_mail_tpl_archived_value']['id'] = 'field_mail_tpl_archived_value';
  $handler->display->display_options['filters']['field_mail_tpl_archived_value']['table'] = 'field_data_field_mail_tpl_archived';
  $handler->display->display_options['filters']['field_mail_tpl_archived_value']['field'] = 'field_mail_tpl_archived_value';
  $handler->display->display_options['filters']['field_mail_tpl_archived_value']['value'] = array(
    0 => '0',
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
