<?php
/**
 * @file
 * mailit.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function mailit_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:node/add/mail-campaign
  $menu_links['main-menu:node/add/mail-campaign'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/mail-campaign',
    'router_path' => 'node/add/mail-campaign',
    'link_title' => 'Create a Message',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-mailit-anonymous:https://lists.engineering.osu.edu/Shibboleth.sso/Login?target=https%3A%2F%2Flists.engineering.osu.edu%2Fmail%2Fmy-campaigns
  $menu_links['menu-mailit-anonymous:https://lists.engineering.osu.edu/Shibboleth.sso/Login?target=https%3A%2F%2Flists.engineering.osu.edu%2Fmail%2Fmy-campaigns'] = array(
    'menu_name' => 'menu-mailit-anonymous',
    'link_path' => 'https://lists.engineering.osu.edu/Shibboleth.sso/Login?target=https%3A%2F%2Flists.engineering.osu.edu%2Fmail%2Fmy-campaigns',
    'router_path' => '',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-mailit-anonymous:mail/lists
  $menu_links['menu-mailit-anonymous:mail/lists'] = array(
    'menu_name' => 'menu-mailit-anonymous',
    'link_path' => 'mail/lists',
    'router_path' => 'mail/lists',
    'link_title' => 'Lists',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-mailit-authenticated:mail/lists
  $menu_links['menu-mailit-authenticated:mail/lists'] = array(
    'menu_name' => 'menu-mailit-authenticated',
    'link_path' => 'mail/lists',
    'router_path' => 'mail/lists',
    'link_title' => 'Lists',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-mailit-authenticated:mail/my-campaigns
  $menu_links['menu-mailit-authenticated:mail/my-campaigns'] = array(
    'menu_name' => 'menu-mailit-authenticated',
    'link_path' => 'mail/my-campaigns',
    'router_path' => 'mail/my-campaigns',
    'link_title' => 'My Messages',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-mailit-authenticated:node/add/mail-campaign
  $menu_links['menu-mailit-authenticated:node/add/mail-campaign'] = array(
    'menu_name' => 'menu-mailit-authenticated',
    'link_path' => 'node/add/mail-campaign',
    'router_path' => 'node/add/mail-campaign',
    'link_title' => 'New Message',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-mailit-authenticated:user/logout
  $menu_links['menu-mailit-authenticated:user/logout'] = array(
    'menu_name' => 'menu-mailit-authenticated',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Create a Message');
  t('Lists');
  t('Login');
  t('Logout');
  t('My Messages');
  t('New Message');


  return $menu_links;
}
