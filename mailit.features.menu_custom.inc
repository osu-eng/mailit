<?php
/**
 * @file
 * mailit.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function mailit_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-mailit-anonymous.
  $menus['menu-mailit-anonymous'] = array(
    'menu_name' => 'menu-mailit-anonymous',
    'title' => 'MailIt Anonymous',
    'description' => 'A menu for anonymous users',
  );
  // Exported menu: menu-mailit-authenticated.
  $menus['menu-mailit-authenticated'] = array(
    'menu_name' => 'menu-mailit-authenticated',
    'title' => 'MailIt Authenticated',
    'description' => 'A pre-configured menu for authenticated users.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('A menu for anonymous users');
  t('A pre-configured menu for authenticated users.');
  t('MailIt Anonymous');
  t('MailIt Authenticated');
  t('Main menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}
