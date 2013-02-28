<?php

/**
 * Implementation of hook_token_info().
 */
function mailit_token_info() {

  $campaign_type = array(
    'name' => t('Email Message'),
    'description' => t('Tokens related to individual email message or campaign.'),
    'needs-data' => 'mailit_campaign',
    );

  $styles = image_styles();
  $campaign_tokens = array();
  foreach (array_keys(mailit_campaign_form_by_step()) as $field) {
  	$field = preg_replace('/field_mail_cpn_/', '', $field);
  	if (preg_match('/img/', $field)) {
	    foreach ($styles as $style => $desc) {
        if (preg_match('/mailit/', $style)) {
	  	    $token = $field . '_' . $style;
	        $campaign_tokens[$token] = array(
	          'name' => $field . ' (' . $style . ')',
	          'description' => 'An image tag using this preset.',
	          );
        }
	    }
  	}
  	else {
	    $campaign_tokens[$field] = array(
	     'name' => $field,
	     'description' => $field,
	     );
    }
  }
  $campaign_tokens['nid'] = array(
    'name' => 'nid',
    'description' => 'id of the campaign node');

  $campaign_tokens['vid'] = array(
    'name' => 'vid',
    'description' => 'version id of the campaign node');

  $campaign_tokens['title'] = array(
    'name' => 'title',
    'description' => 'title of the campaign node (not subject)');

  $campaign_tokens['url'] = array(
    'name' => 'url',
    'description' => 'url to view the message online');

  $campaign_tokens['sociallinks'] = array(
    'name' => 'sociallinks',
    'description' => 'pipe delimited list of links');

  $campaign_tokens['links'] = array(
    'name' => 'links',
    'description' => 'pipe delimited list of links with social links first');

  // Email List
  $list_type = array(
    'name' => t('Email List'),
    'description' => t('Tokens related to an email list.'),
    'needs-data' => 'mailit_list',
    );

  $list_tokens = array();

  $list_tokens['nid'] = array(
    'name' => 'nid',
    'description' => 'id of the list node');

  $list_tokens['vid'] = array(
    'name' => 'vid',
    'description' => 'version id of the list node');

  $list_tokens['title'] = array(
    'name' => 'title',
    'description' => 'title of the list node');

  $list_tokens['id'] = array(
    'name' => 'id',
    'description' => 'string identifier for the list (not nid)');

  $list_tokens['url'] = array(
    'name' => 'url',
    'description' => 'url to view the list online');

  $list_tokens['address'] = array(
    'name' => 'address',
    'description' => 'email address for the list');

  $list_tokens['description'] = array(
    'name' => 'description',
    'description' => 'description of the list');

  return array(
  	'types' => array(
      'mailit_campaign' => $campaign_type,
      'mailit_list' => $list_type,
      ),
  	'tokens' => array(
      'mailit_campaign' => $campaign_tokens,
      'mailit_list' => $list_tokens,
      ),
    );
}

/**
 * Implementation of hook_tokens().
 */
function mailit_tokens($type, $tokens, array $data = array(), array $options = array()) {

  $replacements = array();

  $node_fields = array('nid', 'vid', 'title');

  if ($type == 'mailit_campaign' && !empty($data['mailit_campaign'])) {
    $campaign = $data['mailit_campaign'];

    foreach ($tokens as $name => $original) {

      if (preg_match('/(img.*)_([^_]+)$/', $name, $matches)) {
        $field = 'field_mail_cpn_' . $matches[1];
        $style = $matches[2];
        $items = field_get_items('node', $campaign, $field);
        if ($items) {
          $options = array(
            'type' => 'image',
            'settings' => array(
              'image_style' => 'mailit_' . $style,
              ),
            );
          $output = field_view_value('node', $campaign, $field, $items[0], $options);
          $replacements[$original] = render($output);

          // This is a really bad way to do this, but we want image src's to always be http
          $replacements[$original] = preg_replace('|src\s*=\s*"https|', 'src="http', $replacements[$original]);
        }
        else {
          $replacements[$original] = '';
        }
      }
      else if (in_array($name, $node_fields)) {
        $replacements[$original] = check_plain($campaign->$name);
      }
      else if ($name == 'url') {
        global $base_url;
        $replacements[$original] = $base_url . base_path() . 'campaign/' . $campaign->nid . '/v/' . $campaign->vid ;
      }
      else if ($name == 'sociallinks') {
        $social = array('twitter', 'facebook', 'linkedin', 'youtube', 'flickr');
        $social_links = array();
        foreach ($social as $name) {
          $field = 'field_mail_cpn_' . $name;
          $items = field_get_items('node', $campaign, $field);
          if ($items) {
            $output = field_view_value('node', $campaign, $field, $items[0], 'Default');
            $social_links[] = render($output);
          }
        }
        $replacements[$original] = join (' | ', $social_links);
      }
      else if ($name == 'links') {
        $social = array('twitter', 'facebook', 'linkedin', 'youtube', 'flickr');
        $social_links = array();
        $links = array();
        foreach ($social as $name) {
          $field = 'field_mail_cpn_' . $name;
          $items = field_get_items('node', $campaign, $field);
          if ($items) {
            $output = field_view_value('node', $campaign, $field, $items[0], 'Default');
            $links[] = render($output);
          }
        }
        for ($i=1; $i<=6; $i++) {
          $field = 'field_mail_cpn_link' . $i;
          $items = field_get_items('node', $campaign, $field);
          if ($items) {
            $output = field_view_value('node', $campaign, $field, $items[0], 'Default');
            $links[] = render($output);
          }
        }
        $replacements[$original] = join (' | ', $links);
      }
      else {
      	// Non-images get the default handling of the node display.
	      $field = 'field_mail_cpn_' . $name;
	      $items = field_get_items('node', $campaign, $field);
        if ($items) {
          $output = field_view_value('node', $campaign, $field, $items[0], 'Default');
  	      $replacements[$original] = render($output);
        }
        else {
          $replacements[$original] = '';
        }
      }
    }
  }


  if ($type == 'mailit_list' && !empty($data['mailit_list'])) {
    $list = $data['mailit_list'];
    foreach ($tokens as $name => $original) {
      if (in_array($name, $node_fields)) {
        $replacements[$original] = check_plain($list->$name);
      }
      else if ($name == 'url') {
        global $base_url;
        $replacements[$original] = $base_url . base_path() . 'node/' . $list->nid ;
      }
      else {
        // Non-images get the default handling of the node display.
        $field = 'field_mail_list_' . $name;
        $items = field_get_items('node', $list, $field);
        if ($items) {
          $output = field_view_value('node', $list, $field, $items[0], 'Default');
          $replacements[$original] = render($output);
        }
        else {
          $replacements[$original] = '';
        }
      }
    }
  }

  return $replacements;
}
