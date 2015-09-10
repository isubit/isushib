<?php

/**
 * @file
 * Configuration of Active Directory sync.
 */
function isushibsiteaccesssync_settings() {
  // Add form to get screenshot server URL.
  $form['isushibsiteaccesssync'] = array(
    '#type' => 'fieldset',
    '#title' => t('Configure Active Directory Sync'),
  );

  $form['isushibsiteaccesssync']['isushibsiteaccesssync_ad_username'] = array(
    '#type' => 'textfield',
    '#title' => t('Email Address'),
    '#default_value' => variable_get('isushibsiteaccesssync_ad_username', ''),
    '#description' => t('This is the email address of the account that will be used to read from Active Directory. Do not use your own account')
  );

  $form['isushibsiteaccesssync']['isushibsiteaccesssync_ad_password'] = array(
    '#type' => 'textfield',
    '#title' => t('Password'),
    '#default_value' => variable_get('isushibsiteaccesssync_ad_password', ''),
    '#description' => t('Password for the above account. Note: this is not a secure password storage facility, so you should be using an account that has basically no rights.')
  );

  $form['isushibsiteaccesssync']['isushibsiteaccesssync_ad_group_names'] = array(
    '#type' => 'textfield',
    '#title' => t('Group Name(s)'),
    '#default_value' => variable_get('isushibsiteaccesssync_ad_group_names', ''),
    '#description' => t('Name(s) of the groups you want to use from Active Directory. If there are more than one, use a comma to separate them. ie: cropnews, eitdev')
  );

  $form['isushibsiteaccesssync']['isushibsiteaccesssync_ad_ldap_server'] = array(
    '#type' => 'textfield',
    '#title' => t('Active Domain Controller'),
    '#default_value' => variable_get('isushibsiteaccesssync_ad_ldap_server', 'windc.iastate.edu'),
    '#description' => t('Fully Quallified Domain Name of the AD domain controller.')
  );

  $form['isushibsiteaccesssync']['isushibsiteaccesssync_ad_ldap_dn'] = array(
    '#type' => 'textfield',
    '#title' => t('Starting Distinguished Name'),
    '#default_value' => variable_get('isushibsiteaccesssync_ad_ldap_dn', 'dc=iastate,dc=edu'),
    '#description' => t('Starting point in Active Directory to do the search. dc=iastate,dc=edu will search the entire directory. ou=c ext,dc=iastate,dc=edu will search just the Extension OU.')
  );

  return system_settings_form($form);
}