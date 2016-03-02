<?php
/**
 * @file
 * smartaarhus_images.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function smartaarhus_images_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-news_article-field_main_image'
  $field_instances['node-news_article-field_main_image'] = array(
    'bundle' => 'news_article',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'project_large',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_main_image',
    'label' => 'Billede',
    'required' => 1,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'news',
      'file_extensions' => 'png gif jpg jpeg',
      'focus' => 0,
      'focus_lock_ratio' => 0,
      'focus_min_size' => '750x250',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '750x250',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 0,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(
          'news_thumbnail_normalcustom_user_normal_breakpoint_1x' => 'news_thumbnail_normalcustom_user_normal_breakpoint_1x',
          'project_large' => 'project_large',
        ),
        'manualcrop_styles_list' => array(
          'news_thumbnail_normalcustom_user_normal_breakpoint_1x' => 'news_thumbnail_normalcustom_user_normal_breakpoint_1x',
          'project_large' => 'project_large',
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => 'medium',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-project-field_group_image'
  $field_instances['node-project-field_group_image'] = array(
    'bundle' => 'project',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'project_large',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_group_image',
    'label' => 'Billede',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'group',
      'file_extensions' => 'png gif jpg jpeg',
      'focus' => 0,
      'focus_lock_ratio' => 0,
      'focus_min_size' => '750x250',
      'max_filesize' => '10MB',
      'max_resolution' => '',
      'min_resolution' => '750x250',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 0,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(
          'project_large' => 'project_large',
          'project_thumbnail_rsbreakpointscustom_user_normal_1x' => 'project_thumbnail_rsbreakpointscustom_user_normal_1x',
        ),
        'manualcrop_styles_list' => array(
          'project_large' => 'project_large',
          'project_thumbnail_rsbreakpointscustom_user_normal_1x' => 'project_thumbnail_rsbreakpointscustom_user_normal_1x',
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => 'medium',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Billede');

  return $field_instances;
}
