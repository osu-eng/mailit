<?php
/**
 * @file
 * mailit.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mailit_user_default_permissions() {
  $permissions = array();

  // Exported permission: create mail_campaign content.
  $permissions['create mail_campaign content'] = array(
    'name' => 'create mail_campaign content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own mail_campaign content.
  $permissions['delete own mail_campaign content'] = array(
    'name' => 'delete own mail_campaign content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit mimemail user settings.
  $permissions['edit mimemail user settings'] = array(
    'name' => 'edit mimemail user settings',
    'roles' => array(),
    'module' => 'mimemail',
  );

  // Exported permission: edit own mail_campaign content.
  $permissions['edit own mail_campaign content'] = array(
    'name' => 'edit own mail_campaign content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: use text format mail.
  $permissions['use text format mail'] = array(
    'name' => 'use text format mail',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
