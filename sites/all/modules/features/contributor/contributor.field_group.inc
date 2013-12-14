<?php
/**
 * @file
 * contributor.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function contributor_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_info|node|contributor|form';
  $field_group->group_name = 'group_contact_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contributor';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Information',
    'weight' => '3',
    'children' => array(
      0 => 'field_email',
      1 => 'field_page_url',
      2 => 'field_contact_number',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contact-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_contact_info|node|contributor|form'] = $field_group;

  return $export;
}
