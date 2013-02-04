<?php
/**
 * @file
 * mailit.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function mailit_filter_default_formats() {
  $formats = array();

  // Exported format: mail.
  $formats['mail'] = array(
    'format' => 'mail',
    'name' => 'mail',
    'cache' => '1',
    'status' => '1',
    'weight' => '0',
    'filters' => array(
      'htmlpurifier_basic' => array(
        'weight' => '-44',
        'status' => '1',
        'settings' => array(
          'htmlpurifier_help' => 1,
          'htmlpurifier_basic_config' => array(
            'Attr.EnableID' => '0',
            'AutoFormat.AutoParagraph' => '1',
            'AutoFormat.Linkify' => '1',
            'AutoFormat.RemoveEmpty' => '0',
            'HTML.Allowed' => 'h1, h2, h3, h4, h5, a[href], em, strong, cite, blockquote, code, ul, ol, li, dl, dt, dd, p',
            'HTML.ForbiddenAttributes' => 'style
class
',
            'HTML.ForbiddenElements' => '',
            'HTML.SafeObject' => '0',
            'Output.FlashCompat' => '0',
            'URI.DisableExternalResources' => '0',
            'URI.DisableResources' => '0',
            'Null_URI.Munge' => '1',
          ),
        ),
      ),
      'pathologic' => array(
        'weight' => '-43',
        'status' => '1',
        'settings' => array(
          'local_paths' => '',
          'protocol_style' => 'full',
        ),
      ),
    ),
  );

  return $formats;
}
