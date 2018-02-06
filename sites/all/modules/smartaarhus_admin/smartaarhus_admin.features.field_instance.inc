<?php
/**
 * @file
 * smartaarhus_admin.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function smartaarhus_admin_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-project-field_sharing_economy_project'.
  $field_instances['node-project-field_sharing_economy_project'] = array(
    'bundle' => 'project',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sharing_economy_project',
    'label' => 'Deleøkonomisk projekt',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Deleøkonomisk projekt');

  return $field_instances;
}
