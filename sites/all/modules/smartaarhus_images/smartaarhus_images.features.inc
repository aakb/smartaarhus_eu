<?php
/**
 * @file
 * smartaarhus_images.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function smartaarhus_images_image_default_styles() {
  $styles = array();

  // Exported image style: avatar_large.
  $styles['avatar_large'] = array(
    'name' => 'avatar_large',
    'label' => 'Avatar Large',
    'effects' => array(
      5 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 250,
          'height' => 225,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: avatar_thumbnail.
  $styles['avatar_thumbnail'] = array(
    'name' => 'avatar_thumbnail',
    'label' => 'Avatar Thumbnail',
    'effects' => array(
      1 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 45,
          'height' => 45,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: logo_large.
  $styles['logo_large'] = array(
    'name' => 'logo_large',
    'label' => 'Logo large',
    'effects' => array(
      10 => array(
        'label' => 'Skalér',
        'help' => 'Skalering bevarer billedets højde-bredde-forhold. Hvis kun den ene dimension angives vil den anden blive beregnet.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => 200,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: news_sidebar_thumbnail.
  $styles['news_sidebar_thumbnail'] = array(
    'name' => 'news_sidebar_thumbnail',
    'label' => 'News sidebar thumbnail',
    'effects' => array(
      31 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 240,
          'height' => 170,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: news_sidebar_thumbnail_mobilecustom_user_mobile_breakpoint_1x.
  $styles['news_sidebar_thumbnail_mobilecustom_user_mobile_breakpoint_1x'] = array(
    'name' => 'news_sidebar_thumbnail_mobilecustom_user_mobile_breakpoint_1x',
    'label' => 'news_sidebar_thumbnail_mobilecustom_user_mobile_breakpoint_1x',
    'effects' => array(
      32 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 740,
          'height' => 170,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: news_sidebar_thumbnail_narrowcustom_user_narrow_breakpoint_1x.
  $styles['news_sidebar_thumbnail_narrowcustom_user_narrow_breakpoint_1x'] = array(
    'name' => 'news_sidebar_thumbnail_narrowcustom_user_narrow_breakpoint_1x',
    'label' => 'news_sidebar_thumbnail_narrowcustom_user_narrow_breakpoint_1x',
    'effects' => array(
      33 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 170,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: news_sidebar_thumbnail_normalcustom_user_normal_breakpoint_1x.
  $styles['news_sidebar_thumbnail_normalcustom_user_normal_breakpoint_1x'] = array(
    'name' => 'news_sidebar_thumbnail_normalcustom_user_normal_breakpoint_1x',
    'label' => 'news_sidebar_thumbnail_normalcustom_user_normal_breakpoint_1x',
    'effects' => array(
      34 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 240,
          'height' => 160,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: news_thumbnail.
  $styles['news_thumbnail'] = array(
    'name' => 'news_thumbnail',
    'label' => 'News thumbnail',
    'effects' => array(
      24 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 235,
          'height' => 265,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: news_thumbnail_mobilecustom_user_mobile_breakpoint_1x.
  $styles['news_thumbnail_mobilecustom_user_mobile_breakpoint_1x'] = array(
    'name' => 'news_thumbnail_mobilecustom_user_mobile_breakpoint_1x',
    'label' => 'news_thumbnail_mobilecustom_user_mobile_breakpoint_1x',
    'effects' => array(
      25 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 740,
          'height' => 345,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: news_thumbnail_narrowcustom_user_narrow_breakpoint_1x.
  $styles['news_thumbnail_narrowcustom_user_narrow_breakpoint_1x'] = array(
    'name' => 'news_thumbnail_narrowcustom_user_narrow_breakpoint_1x',
    'label' => 'news_thumbnail_narrowcustom_user_narrow_breakpoint_1x',
    'effects' => array(
      26 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 350,
          'height' => 315,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: news_thumbnail_normalcustom_user_normal_breakpoint_1x.
  $styles['news_thumbnail_normalcustom_user_normal_breakpoint_1x'] = array(
    'name' => 'news_thumbnail_normalcustom_user_normal_breakpoint_1x',
    'label' => 'News teaser on desktop display',
    'effects' => array(
      50 => array(
        'label' => 'Manual Crop: Crop and scale',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 235,
          'height' => 345,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'news_thumbnail_normalcustom_user_normal_breakpoint_1x',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: node_banner.
  $styles['node_banner'] = array(
    'name' => 'node_banner',
    'label' => 'Node Banner',
    'effects' => array(
      29 => array(
        'label' => 'Skalér',
        'help' => 'Skalering bevarer billedets højde-bredde-forhold. Hvis kun den ene dimension angives vil den anden blive beregnet.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 750,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: node_banner_thumbnail.
  $styles['node_banner_thumbnail'] = array(
    'name' => 'node_banner_thumbnail',
    'label' => 'Node banner thumbnail',
    'effects' => array(
      30 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 750,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: product_thumbnail.
  $styles['product_thumbnail'] = array(
    'name' => 'product_thumbnail',
    'label' => 'Product thumbnail',
    'effects' => array(
      21 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 80,
          'height' => 55,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: project_large.
  $styles['project_large'] = array(
    'name' => 'project_large',
    'label' => 'Content image large',
    'effects' => array(
      49 => array(
        'label' => 'Manual Crop: Crop and scale',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 750,
          'height' => 250,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'project_large',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: project_medium.
  $styles['project_medium'] = array(
    'name' => 'project_medium',
    'label' => 'Project Medium',
    'effects' => array(
      18 => array(
        'label' => 'Focus Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_scale_and_crop_effect',
        'form callback' => 'imagefield_focus_scale_and_crop_form',
        'summary theme' => 'imagefield_focus_scale_and_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 250,
          'height' => 220,
          'strength' => 'high',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: project_small.
  $styles['project_small'] = array(
    'name' => 'project_small',
    'label' => 'Project Small',
    'effects' => array(
      20 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 301,
          'height' => 150,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: project_thumbnail.
  $styles['project_thumbnail'] = array(
    'name' => 'project_thumbnail',
    'label' => 'Project thumbnail',
    'effects' => array(
      22 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 330,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: project_thumbnail_rsbreakpointscustom_user_mobile_1x.
  $styles['project_thumbnail_rsbreakpointscustom_user_mobile_1x'] = array(
    'name' => 'project_thumbnail_rsbreakpointscustom_user_mobile_1x',
    'label' => 'project_thumbnail_rsbreakpointscustom_user_mobile_1x ',
    'effects' => array(
      46 => array(
        'label' => 'Manual Crop: Crop and scale',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 740,
          'height' => 330,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'project_thumbnail_rsbreakpointscustom_user_mobile_1x',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: project_thumbnail_rsbreakpointscustom_user_narrow_1x.
  $styles['project_thumbnail_rsbreakpointscustom_user_narrow_1x'] = array(
    'name' => 'project_thumbnail_rsbreakpointscustom_user_narrow_1x',
    'label' => 'project_thumbnail_rsbreakpointscustom_user_narrow_1x',
    'effects' => array(
      47 => array(
        'label' => 'Manual Crop: Crop and scale',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 220,
          'height' => 315,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'project_thumbnail_rsbreakpointscustom_user_narrow_1x',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: project_thumbnail_rsbreakpointscustom_user_normal_1x.
  $styles['project_thumbnail_rsbreakpointscustom_user_normal_1x'] = array(
    'name' => 'project_thumbnail_rsbreakpointscustom_user_normal_1x',
    'label' => 'Project teaser on desktop display',
    'effects' => array(
      48 => array(
        'label' => 'Manual Crop: Crop and scale',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 300,
          'height' => 330,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'project_thumbnail_rsbreakpointscustom_user_normal_1x',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: projects_sidebar_thumbnail.
  $styles['projects_sidebar_thumbnail'] = array(
    'name' => 'projects_sidebar_thumbnail',
    'label' => 'Projects sidebar thumbnail',
    'effects' => array(
      35 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 230,
          'height' => 160,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: projects_sidebar_thumbnail_mobcustom_user_mobile_breakpoint_1x.
  $styles['projects_sidebar_thumbnail_mobcustom_user_mobile_breakpoint_1x'] = array(
    'name' => 'projects_sidebar_thumbnail_mobcustom_user_mobile_breakpoint_1x',
    'label' => 'projects_sidebar_thumbnail_mobcustom_user_mobile_breakpoint_1x',
    'effects' => array(
      36 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 740,
          'height' => 240,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: projects_sidebar_thumbnail_narcustom_user_narrow_breakpoint_1x.
  $styles['projects_sidebar_thumbnail_narcustom_user_narrow_breakpoint_1x'] = array(
    'name' => 'projects_sidebar_thumbnail_narcustom_user_narrow_breakpoint_1x',
    'label' => 'projects_sidebar_thumbnail_narcustom_user_narrow_breakpoint_1x',
    'effects' => array(
      37 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 170,
          'height' => 180,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: projects_sidebar_thumbnail_norcustom_user_normal_breakpoint_1x.
  $styles['projects_sidebar_thumbnail_norcustom_user_normal_breakpoint_1x'] = array(
    'name' => 'projects_sidebar_thumbnail_norcustom_user_normal_breakpoint_1x',
    'label' => 'projects_sidebar_thumbnail_norcustom_user_normal_breakpoint_1x',
    'effects' => array(
      38 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 230,
          'height' => 160,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sidebar_profile_image.
  $styles['sidebar_profile_image'] = array(
    'name' => 'sidebar_profile_image',
    'label' => 'Sidebar profile image',
    'effects' => array(
      8 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 50,
          'height' => 50,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: signup_block.
  $styles['signup_block'] = array(
    'name' => 'signup_block',
    'label' => 'Signup Block',
    'effects' => array(
      7 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 280,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: slideshow_large.
  $styles['slideshow_large'] = array(
    'name' => 'slideshow_large',
    'label' => 'Slideshow Large',
    'effects' => array(
      6 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1920,
          'height' => 1000,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
