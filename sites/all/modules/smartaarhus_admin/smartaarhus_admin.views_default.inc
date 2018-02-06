<?php
/**
 * @file
 * smartaarhus_admin.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function smartaarhus_admin_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sharing_economy';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sharing economy';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Projekter';
  $handler->display->display_options['css_class'] = 'project-overview';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Avancerede indstillinger',
    ),
    'field_project_category_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Vælg kategori',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'combine' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'grid-4';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p><a href="/node/add/project">+ Create project</a></p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p><em>No results.</em></p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Flags: subscribe_og */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'subscribe_og';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Relationship: Projektqueue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['ui_name'] = 'Projektqueue';
  $handler->display->display_options['relationships']['nodequeue_rel']['label'] = 'Projektqueue';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'projektqueue' => 'projektqueue',
    'slidequeue' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span class=\'ting-icon-file-xml\'></span> <span class=\'text\'>[title]</span>';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '85';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Offentlige partnere */
  $handler->display->display_options['fields']['field_main_partners']['id'] = 'field_main_partners';
  $handler->display->display_options['fields']['field_main_partners']['table'] = 'field_data_field_main_partners';
  $handler->display->display_options['fields']['field_main_partners']['field'] = 'field_main_partners';
  $handler->display->display_options['fields']['field_main_partners']['label'] = '';
  $handler->display->display_options['fields']['field_main_partners']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_main_partners']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_partners']['element_wrapper_class'] = 'partners';
  $handler->display->display_options['fields']['field_main_partners']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_main_partners']['empty'] = '-';
  $handler->display->display_options['fields']['field_main_partners']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_main_partners']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_main_partners']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_main_partners']['delta_offset'] = '0';
  /* Field: Content: Projektejer */
  $handler->display->display_options['fields']['field_project_owner']['id'] = 'field_project_owner';
  $handler->display->display_options['fields']['field_project_owner']['table'] = 'field_data_field_project_owner';
  $handler->display->display_options['fields']['field_project_owner']['field'] = 'field_project_owner';
  $handler->display->display_options['fields']['field_project_owner']['label'] = '';
  $handler->display->display_options['fields']['field_project_owner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_owner']['element_wrapper_class'] = 'owner';
  $handler->display->display_options['fields']['field_project_owner']['element_default_classes'] = FALSE;
  /* Field: Content: Billede */
  $handler->display->display_options['fields']['field_group_image']['id'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['table'] = 'field_data_field_group_image';
  $handler->display->display_options['fields']['field_group_image']['field'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['label'] = '';
  $handler->display->display_options['fields']['field_group_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group_image']['element_wrapper_class'] = 'image';
  $handler->display->display_options['fields']['field_group_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_group_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_group_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_group_image']['settings'] = array(
    'picture_mapping' => 'project_thumbnail_picture_mapping',
    'fallback_image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Resumé */
  $handler->display->display_options['fields']['field_group_resume']['id'] = 'field_group_resume';
  $handler->display->display_options['fields']['field_group_resume']['table'] = 'field_data_field_group_resume';
  $handler->display->display_options['fields']['field_group_resume']['field'] = 'field_group_resume';
  $handler->display->display_options['fields']['field_group_resume']['label'] = '';
  $handler->display->display_options['fields']['field_group_resume']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_group_resume']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_group_resume']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_group_resume']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group_resume']['element_wrapper_class'] = 'resume';
  $handler->display->display_options['fields']['field_group_resume']['element_default_classes'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'return og_extras_subscriber_count($row->nid);';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php print $value; ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['exclude'] = TRUE;
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class=\'members\'><span class=\'ting-icon-user\'></span> [php] medlemmer</div>
<div class=\'flag\'>[ops] </div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'meta';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Kategori (field_project_category) */
  $handler->display->display_options['filters']['field_project_category_tid']['id'] = 'field_project_category_tid';
  $handler->display->display_options['filters']['field_project_category_tid']['table'] = 'field_data_field_project_category';
  $handler->display->display_options['filters']['field_project_category_tid']['field'] = 'field_project_category_tid';
  $handler->display->display_options['filters']['field_project_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_project_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project_category_tid']['expose']['operator_id'] = 'field_project_category_tid_op';
  $handler->display->display_options['filters']['field_project_category_tid']['expose']['label'] = 'Filtrér projekter:';
  $handler->display->display_options['filters']['field_project_category_tid']['expose']['operator'] = 'field_project_category_tid_op';
  $handler->display->display_options['filters']['field_project_category_tid']['expose']['identifier'] = 'field_project_category_tid';
  $handler->display->display_options['filters']['field_project_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_project_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_project_category_tid']['vocabulary'] = 'project_categories';
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Kombinér felter filter';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'field_group_resume' => 'field_group_resume',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sharing economy';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'full_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Avancerede indstillinger',
      'secondary_collapse_override' => '0',
    ),
    'field_project_category_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'Vælg kategori',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'combine' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: subscribe_og */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'subscribe_og';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Relationship: Projektqueue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['ui_name'] = 'Projektqueue';
  $handler->display->display_options['relationships']['nodequeue_rel']['label'] = 'Projektqueue';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'projektqueue' => 'projektqueue',
    'slidequeue' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span class=\'ting-icon-file-xml\'></span> <span class=\'text\'>[title]</span>';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '85';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Brødtekst */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  /* Field: Content: Offentlige partnere */
  $handler->display->display_options['fields']['field_main_partners']['id'] = 'field_main_partners';
  $handler->display->display_options['fields']['field_main_partners']['table'] = 'field_data_field_main_partners';
  $handler->display->display_options['fields']['field_main_partners']['field'] = 'field_main_partners';
  $handler->display->display_options['fields']['field_main_partners']['label'] = '';
  $handler->display->display_options['fields']['field_main_partners']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_main_partners']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_partners']['element_wrapper_class'] = 'partners';
  $handler->display->display_options['fields']['field_main_partners']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_main_partners']['empty'] = '-';
  $handler->display->display_options['fields']['field_main_partners']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_main_partners']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_main_partners']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_main_partners']['delta_offset'] = '0';
  /* Field: Content: Projektejer */
  $handler->display->display_options['fields']['field_project_owner']['id'] = 'field_project_owner';
  $handler->display->display_options['fields']['field_project_owner']['table'] = 'field_data_field_project_owner';
  $handler->display->display_options['fields']['field_project_owner']['field'] = 'field_project_owner';
  $handler->display->display_options['fields']['field_project_owner']['label'] = '';
  $handler->display->display_options['fields']['field_project_owner']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_owner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_owner']['element_wrapper_class'] = 'owner';
  $handler->display->display_options['fields']['field_project_owner']['element_default_classes'] = FALSE;
  /* Field: Content: Billede */
  $handler->display->display_options['fields']['field_group_image']['id'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['table'] = 'field_data_field_group_image';
  $handler->display->display_options['fields']['field_group_image']['field'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['label'] = '';
  $handler->display->display_options['fields']['field_group_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_group_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group_image']['element_wrapper_class'] = 'image';
  $handler->display->display_options['fields']['field_group_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_group_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_group_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_group_image']['settings'] = array(
    'picture_mapping' => 'project_thumbnail_picture_mapping',
    'fallback_image_style' => 'project_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Resumé */
  $handler->display->display_options['fields']['field_group_resume']['id'] = 'field_group_resume';
  $handler->display->display_options['fields']['field_group_resume']['table'] = 'field_data_field_group_resume';
  $handler->display->display_options['fields']['field_group_resume']['field'] = 'field_group_resume';
  $handler->display->display_options['fields']['field_group_resume']['label'] = '';
  $handler->display->display_options['fields']['field_group_resume']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_group_resume']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_group_resume']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_group_resume']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_group_resume']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group_resume']['element_wrapper_class'] = 'resume';
  $handler->display->display_options['fields']['field_group_resume']['element_default_classes'] = FALSE;
  /* Field: Content: Undertitel */
  $handler->display->display_options['fields']['field_main_subtitle']['id'] = 'field_main_subtitle';
  $handler->display->display_options['fields']['field_main_subtitle']['table'] = 'field_data_field_main_subtitle';
  $handler->display->display_options['fields']['field_main_subtitle']['field'] = 'field_main_subtitle';
  $handler->display->display_options['fields']['field_main_subtitle']['exclude'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'return og_extras_subscriber_count($row->nid);';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php print $value; ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['exclude'] = TRUE;
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="node/[nid]">
<div class="project-entry-thumbnail">[field_group_image]</div>
<div class="project-entry-text">
<div class="project-entry-text-inner">
<div class="project-entry-text-content">
<span class="project-title">[title]</span>
<span class="project-subtitle">[field_main_subtitle]</span>
<span class="project-read-more">Se projekt</span>
</div>
</div>
</div>
</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Kategori (field_project_category) */
  $handler->display->display_options['filters']['field_project_category_tid']['id'] = 'field_project_category_tid';
  $handler->display->display_options['filters']['field_project_category_tid']['table'] = 'field_data_field_project_category';
  $handler->display->display_options['filters']['field_project_category_tid']['field'] = 'field_project_category_tid';
  $handler->display->display_options['filters']['field_project_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_project_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project_category_tid']['expose']['operator_id'] = 'field_project_category_tid_op';
  $handler->display->display_options['filters']['field_project_category_tid']['expose']['label'] = 'Filter projects:';
  $handler->display->display_options['filters']['field_project_category_tid']['expose']['operator'] = 'field_project_category_tid_op';
  $handler->display->display_options['filters']['field_project_category_tid']['expose']['identifier'] = 'field_project_category_tid';
  $handler->display->display_options['filters']['field_project_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_project_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_project_category_tid']['vocabulary'] = 'project_categories';
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'body' => 'body',
    'field_group_resume' => 'field_group_resume',
  );
  /* Filter criterion: Content: Deleøkonomisk projekt (field_sharing_economy_project) */
  $handler->display->display_options['filters']['field_sharing_economy_project_value']['id'] = 'field_sharing_economy_project_value';
  $handler->display->display_options['filters']['field_sharing_economy_project_value']['table'] = 'field_data_field_sharing_economy_project';
  $handler->display->display_options['filters']['field_sharing_economy_project_value']['field'] = 'field_sharing_economy_project_value';
  $handler->display->display_options['filters']['field_sharing_economy_project_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'sharing-economy';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Sharing economy';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Forsideblok */
  $handler = $view->new_display('block', 'Forsideblok', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Projekter';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹';
  $handler->display->display_options['pager']['options']['tags']['next'] = '›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'grid-4';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Entity: Rendered entity */
  $handler->display->display_options['footer']['entity']['id'] = 'entity';
  $handler->display->display_options['footer']['entity']['table'] = 'entity__global';
  $handler->display->display_options['footer']['entity']['field'] = 'entity';
  $handler->display->display_options['footer']['entity']['entity_type'] = 'bean';
  $handler->display->display_options['footer']['entity']['entity_id'] = 'beskrivelse-af-projekter-forside';
  $handler->display->display_options['footer']['entity']['view_mode'] = 'default';
  $handler->display->display_options['footer']['entity']['bypass_access'] = 1;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<p><a href="/projekter" class=\'btn-link\'>Se alle projekter</a></p>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span class=\'ting-icon-file-xml\'></span> <span class=\'text\'>[title]</span>';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '85';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Offentlige partnere */
  $handler->display->display_options['fields']['field_main_partners']['id'] = 'field_main_partners';
  $handler->display->display_options['fields']['field_main_partners']['table'] = 'field_data_field_main_partners';
  $handler->display->display_options['fields']['field_main_partners']['field'] = 'field_main_partners';
  $handler->display->display_options['fields']['field_main_partners']['label'] = '';
  $handler->display->display_options['fields']['field_main_partners']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_main_partners']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_partners']['element_wrapper_class'] = 'partners';
  $handler->display->display_options['fields']['field_main_partners']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_main_partners']['empty'] = '-';
  $handler->display->display_options['fields']['field_main_partners']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_main_partners']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_main_partners']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_main_partners']['delta_offset'] = '0';
  /* Field: Content: Projektejer */
  $handler->display->display_options['fields']['field_project_owner']['id'] = 'field_project_owner';
  $handler->display->display_options['fields']['field_project_owner']['table'] = 'field_data_field_project_owner';
  $handler->display->display_options['fields']['field_project_owner']['field'] = 'field_project_owner';
  $handler->display->display_options['fields']['field_project_owner']['label'] = '';
  $handler->display->display_options['fields']['field_project_owner']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_owner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_owner']['element_wrapper_class'] = 'owner';
  $handler->display->display_options['fields']['field_project_owner']['element_default_classes'] = FALSE;
  /* Field: Content: Billede */
  $handler->display->display_options['fields']['field_group_image']['id'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['table'] = 'field_data_field_group_image';
  $handler->display->display_options['fields']['field_group_image']['field'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['label'] = '';
  $handler->display->display_options['fields']['field_group_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_group_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group_image']['element_wrapper_class'] = 'image';
  $handler->display->display_options['fields']['field_group_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_group_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_group_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_group_image']['settings'] = array(
    'picture_mapping' => 'project_thumbnail_picture_mapping',
    'fallback_image_style' => 'project_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Resumé */
  $handler->display->display_options['fields']['field_group_resume']['id'] = 'field_group_resume';
  $handler->display->display_options['fields']['field_group_resume']['table'] = 'field_data_field_group_resume';
  $handler->display->display_options['fields']['field_group_resume']['field'] = 'field_group_resume';
  $handler->display->display_options['fields']['field_group_resume']['label'] = '';
  $handler->display->display_options['fields']['field_group_resume']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_group_resume']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_group_resume']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_group_resume']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_group_resume']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group_resume']['element_wrapper_class'] = 'resume';
  $handler->display->display_options['fields']['field_group_resume']['element_default_classes'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'return og_extras_subscriber_count($row->nid);';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php print $value; ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['exclude'] = TRUE;
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class=\'members\'><span class=\'ting-icon-user\'></span> [php] medlemmer</div>
<div class=\'flag\'>[ops] </div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'meta';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Undertitel */
  $handler->display->display_options['fields']['field_main_subtitle']['id'] = 'field_main_subtitle';
  $handler->display->display_options['fields']['field_main_subtitle']['table'] = 'field_data_field_main_subtitle';
  $handler->display->display_options['fields']['field_main_subtitle']['field'] = 'field_main_subtitle';
  $handler->display->display_options['fields']['field_main_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_main_subtitle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_main_subtitle']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<a href="node/[nid]">
<div class="project-entry-thumbnail">[field_group_image]</div>
<div class="project-entry-text">
<div class="project-entry-text-inner">
<div class="project-entry-text-content">
<span class="project-title">[title]</span>
<span class="project-subtitle">[field_main_subtitle]</span>
<span class="project-read-more">Se projekt</span>
</div>
</div>
</div>
</a>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['block_description'] = 'Projekter: Forfremmet til forside';

  /* Display: Communityblok */
  $handler = $view->new_display('block', 'Communityblok', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Projekter';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span class=\'ting-icon-file-xml\'></span> <span class=\'text\'>[title]</span>';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '90';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Projektejer */
  $handler->display->display_options['fields']['field_project_owner']['id'] = 'field_project_owner';
  $handler->display->display_options['fields']['field_project_owner']['table'] = 'field_data_field_project_owner';
  $handler->display->display_options['fields']['field_project_owner']['field'] = 'field_project_owner';
  $handler->display->display_options['fields']['field_project_owner']['label'] = '';
  $handler->display->display_options['fields']['field_project_owner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_owner']['element_wrapper_class'] = 'owner-sec';
  $handler->display->display_options['fields']['field_project_owner']['element_default_classes'] = FALSE;
  /* Field: Content: Offentlige partnere */
  $handler->display->display_options['fields']['field_main_partners']['id'] = 'field_main_partners';
  $handler->display->display_options['fields']['field_main_partners']['table'] = 'field_data_field_main_partners';
  $handler->display->display_options['fields']['field_main_partners']['field'] = 'field_main_partners';
  $handler->display->display_options['fields']['field_main_partners']['label'] = '';
  $handler->display->display_options['fields']['field_main_partners']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_main_partners']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_partners']['element_wrapper_class'] = 'partners-sec';
  $handler->display->display_options['fields']['field_main_partners']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_main_partners']['empty'] = '-';
  $handler->display->display_options['fields']['field_main_partners']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_main_partners']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_main_partners']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_main_partners']['delta_offset'] = '0';
  /* Field: Content: Billede */
  $handler->display->display_options['fields']['field_group_image']['id'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['table'] = 'field_data_field_group_image';
  $handler->display->display_options['fields']['field_group_image']['field'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['label'] = '';
  $handler->display->display_options['fields']['field_group_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group_image']['element_wrapper_class'] = 'image';
  $handler->display->display_options['fields']['field_group_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_group_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_group_image']['settings'] = array(
    'image_style' => 'project_large',
    'image_link' => 'content',
  );
  /* Field: Content: Resumé */
  $handler->display->display_options['fields']['field_group_resume']['id'] = 'field_group_resume';
  $handler->display->display_options['fields']['field_group_resume']['table'] = 'field_data_field_group_resume';
  $handler->display->display_options['fields']['field_group_resume']['field'] = 'field_group_resume';
  $handler->display->display_options['fields']['field_group_resume']['label'] = '';
  $handler->display->display_options['fields']['field_group_resume']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_group_resume']['alter']['max_length'] = '75';
  $handler->display->display_options['fields']['field_group_resume']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_group_resume']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_group_resume']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group_resume']['element_wrapper_class'] = 'resume';
  $handler->display->display_options['fields']['field_group_resume']['element_default_classes'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'return og_extras_subscriber_count($row->nid);';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php print $value; ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['exclude'] = TRUE;
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class=\'members\'><span class=\'ting-icon-user\'></span> [php] medlemmer</div>
<div class=\'flag\'>[ops] </div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'meta';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['block_description'] = 'Projekter: Community forside';

  /* Display: Footerblok */
  $handler = $view->new_display('block', 'Footerblok', 'block_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span class=\'ting-icon-file-xml\'></span> <span class=\'text\'>[title]</span>';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '85';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Sidebarblock */
  $handler = $view->new_display('block', 'Sidebarblock', 'block_4');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<p><a href="/projekter" class=\'btn-link\'>Se alle projekter</a></p>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Billede */
  $handler->display->display_options['fields']['field_group_image']['id'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['table'] = 'field_data_field_group_image';
  $handler->display->display_options['fields']['field_group_image']['field'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['label'] = '';
  $handler->display->display_options['fields']['field_group_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_group_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group_image']['element_wrapper_class'] = 'image';
  $handler->display->display_options['fields']['field_group_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_group_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_group_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_group_image']['settings'] = array(
    'picture_mapping' => 'projects_sidebar_thumbnail_picture_mapping',
    'fallback_image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span class=\'ting-icon-file-xml\'></span> <span class=\'text\'>[title]</span>';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '85';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Undertitel */
  $handler->display->display_options['fields']['field_main_subtitle']['id'] = 'field_main_subtitle';
  $handler->display->display_options['fields']['field_main_subtitle']['table'] = 'field_data_field_main_subtitle';
  $handler->display->display_options['fields']['field_main_subtitle']['field'] = 'field_main_subtitle';
  $handler->display->display_options['fields']['field_main_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_main_subtitle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_main_subtitle']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/node/[nid]">
<div class="project-entry-image">[field_group_image]</div>
<div class="project-entry-text">
<span class="project-entry-title">[title]</span>
<span class="project-entry-subtitle">[field_main_subtitle]</span>
<span class="project-entry-read-more">Se projekt</span>
</div>
</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $translatables['sharing_economy'] = array(
    t('Master'),
    t('Projekter'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Avancerede indstillinger'),
    t('Vælg kategori'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('<p><a href="/node/add/project">+ Create project</a></p>'),
    t('<p><em>No results.</em></p>'),
    t('flag'),
    t('author'),
    t('Projektqueue'),
    t('<span class=\'ting-icon-file-xml\'></span> <span class=\'text\'>[title]</span>'),
    t('-'),
    t('<div class=\'members\'><span class=\'ting-icon-user\'></span> [php] medlemmer</div>
<div class=\'flag\'>[ops] </div>'),
    t('Filtrér projekter:'),
    t('Kombinér felter filter'),
    t('Page'),
    t('Sharing economy'),
    t('more'),
    t('Search'),
    t('Select any filter and click on Apply to see results'),
    t('Show More'),
    t('Brødtekst'),
    t('Undertitel'),
    t('<a href="node/[nid]">
<div class="project-entry-thumbnail">[field_group_image]</div>
<div class="project-entry-text">
<div class="project-entry-text-inner">
<div class="project-entry-text-content">
<span class="project-title">[title]</span>
<span class="project-subtitle">[field_main_subtitle]</span>
<span class="project-read-more">Se projekt</span>
</div>
</div>
</div>
</a>'),
    t('Filter projects:'),
    t('Forsideblok'),
    t('‹'),
    t('›'),
    t('<p><a href="/projekter" class=\'btn-link\'>Se alle projekter</a></p>'),
    t('Projekter: Forfremmet til forside'),
    t('Communityblok'),
    t('Projekter: Community forside'),
    t('Footerblok'),
    t('Sidebarblock'),
    t('<a href="/node/[nid]">
<div class="project-entry-image">[field_group_image]</div>
<div class="project-entry-text">
<span class="project-entry-title">[title]</span>
<span class="project-entry-subtitle">[field_main_subtitle]</span>
<span class="project-entry-read-more">Se projekt</span>
</div>
</a>'),
  );
  $export['sharing_economy'] = $view;

  $view = new view();
  $view->name = 'ting_projects';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ting: Projects';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Projekter';
  $handler->display->display_options['css_class'] = 'project-overview';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Avancerede indstillinger',
    ),
    'field_project_category_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Vælg kategori',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'combine' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'grid-4';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p><a href="/node/add/project">+ Create project</a></p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p><em>No results.</em></p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Flags: subscribe_og */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'subscribe_og';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'forfatter';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Relationship: Projektqueue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['ui_name'] = 'Projektqueue';
  $handler->display->display_options['relationships']['nodequeue_rel']['label'] = 'Projektqueue';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'projektqueue' => 'projektqueue',
    'slidequeue' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span class=\'ting-icon-file-xml\'></span> <span class=\'text\'>[title]</span>';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '85';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Offentlige partnere */
  $handler->display->display_options['fields']['field_main_partners']['id'] = 'field_main_partners';
  $handler->display->display_options['fields']['field_main_partners']['table'] = 'field_data_field_main_partners';
  $handler->display->display_options['fields']['field_main_partners']['field'] = 'field_main_partners';
  $handler->display->display_options['fields']['field_main_partners']['label'] = '';
  $handler->display->display_options['fields']['field_main_partners']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_main_partners']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_partners']['element_wrapper_class'] = 'partners';
  $handler->display->display_options['fields']['field_main_partners']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_main_partners']['empty'] = '-';
  $handler->display->display_options['fields']['field_main_partners']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_main_partners']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_main_partners']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_main_partners']['delta_offset'] = '0';
  /* Field: Content: Projektejer */
  $handler->display->display_options['fields']['field_project_owner']['id'] = 'field_project_owner';
  $handler->display->display_options['fields']['field_project_owner']['table'] = 'field_data_field_project_owner';
  $handler->display->display_options['fields']['field_project_owner']['field'] = 'field_project_owner';
  $handler->display->display_options['fields']['field_project_owner']['label'] = '';
  $handler->display->display_options['fields']['field_project_owner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_owner']['element_wrapper_class'] = 'owner';
  $handler->display->display_options['fields']['field_project_owner']['element_default_classes'] = FALSE;
  /* Field: Content: Billede */
  $handler->display->display_options['fields']['field_group_image']['id'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['table'] = 'field_data_field_group_image';
  $handler->display->display_options['fields']['field_group_image']['field'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['label'] = '';
  $handler->display->display_options['fields']['field_group_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group_image']['element_wrapper_class'] = 'image';
  $handler->display->display_options['fields']['field_group_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_group_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_group_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_group_image']['settings'] = array(
    'picture_mapping' => 'project_thumbnail_picture_mapping',
    'fallback_image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Resumé */
  $handler->display->display_options['fields']['field_group_resume']['id'] = 'field_group_resume';
  $handler->display->display_options['fields']['field_group_resume']['table'] = 'field_data_field_group_resume';
  $handler->display->display_options['fields']['field_group_resume']['field'] = 'field_group_resume';
  $handler->display->display_options['fields']['field_group_resume']['label'] = '';
  $handler->display->display_options['fields']['field_group_resume']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_group_resume']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_group_resume']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_group_resume']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group_resume']['element_wrapper_class'] = 'resume';
  $handler->display->display_options['fields']['field_group_resume']['element_default_classes'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'return og_extras_subscriber_count($row->nid);';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php print $value; ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['exclude'] = TRUE;
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class=\'members\'><span class=\'ting-icon-user\'></span> [php] medlemmer</div>
<div class=\'flag\'>[ops] </div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'meta';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Kategori (field_project_category) */
  $handler->display->display_options['filters']['field_project_category_tid']['id'] = 'field_project_category_tid';
  $handler->display->display_options['filters']['field_project_category_tid']['table'] = 'field_data_field_project_category';
  $handler->display->display_options['filters']['field_project_category_tid']['field'] = 'field_project_category_tid';
  $handler->display->display_options['filters']['field_project_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_project_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project_category_tid']['expose']['operator_id'] = 'field_project_category_tid_op';
  $handler->display->display_options['filters']['field_project_category_tid']['expose']['label'] = 'Filtrér projekter:';
  $handler->display->display_options['filters']['field_project_category_tid']['expose']['operator'] = 'field_project_category_tid_op';
  $handler->display->display_options['filters']['field_project_category_tid']['expose']['identifier'] = 'field_project_category_tid';
  $handler->display->display_options['filters']['field_project_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_project_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_project_category_tid']['vocabulary'] = 'project_categories';
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Kombinér felter filter';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'field_group_resume' => 'field_group_resume',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Projects';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'full_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Avancerede indstillinger',
      'secondary_collapse_override' => '0',
    ),
    'field_project_category_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'Vælg kategori',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'combine' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span class=\'ting-icon-file-xml\'></span> <span class=\'text\'>[title]</span>';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '85';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Offentlige partnere */
  $handler->display->display_options['fields']['field_main_partners']['id'] = 'field_main_partners';
  $handler->display->display_options['fields']['field_main_partners']['table'] = 'field_data_field_main_partners';
  $handler->display->display_options['fields']['field_main_partners']['field'] = 'field_main_partners';
  $handler->display->display_options['fields']['field_main_partners']['label'] = '';
  $handler->display->display_options['fields']['field_main_partners']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_main_partners']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_partners']['element_wrapper_class'] = 'partners';
  $handler->display->display_options['fields']['field_main_partners']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_main_partners']['empty'] = '-';
  $handler->display->display_options['fields']['field_main_partners']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_main_partners']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_main_partners']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_main_partners']['delta_offset'] = '0';
  /* Field: Content: Projektejer */
  $handler->display->display_options['fields']['field_project_owner']['id'] = 'field_project_owner';
  $handler->display->display_options['fields']['field_project_owner']['table'] = 'field_data_field_project_owner';
  $handler->display->display_options['fields']['field_project_owner']['field'] = 'field_project_owner';
  $handler->display->display_options['fields']['field_project_owner']['label'] = '';
  $handler->display->display_options['fields']['field_project_owner']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_owner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_owner']['element_wrapper_class'] = 'owner';
  $handler->display->display_options['fields']['field_project_owner']['element_default_classes'] = FALSE;
  /* Field: Content: Billede */
  $handler->display->display_options['fields']['field_group_image']['id'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['table'] = 'field_data_field_group_image';
  $handler->display->display_options['fields']['field_group_image']['field'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['label'] = '';
  $handler->display->display_options['fields']['field_group_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_group_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group_image']['element_wrapper_class'] = 'image';
  $handler->display->display_options['fields']['field_group_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_group_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_group_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_group_image']['settings'] = array(
    'picture_mapping' => 'project_thumbnail_picture_mapping',
    'fallback_image_style' => 'product_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Undertitel */
  $handler->display->display_options['fields']['field_main_subtitle']['id'] = 'field_main_subtitle';
  $handler->display->display_options['fields']['field_main_subtitle']['table'] = 'field_data_field_main_subtitle';
  $handler->display->display_options['fields']['field_main_subtitle']['field'] = 'field_main_subtitle';
  $handler->display->display_options['fields']['field_main_subtitle']['exclude'] = TRUE;
  /* Field: Content: Resumé */
  $handler->display->display_options['fields']['field_group_resume']['id'] = 'field_group_resume';
  $handler->display->display_options['fields']['field_group_resume']['table'] = 'field_data_field_group_resume';
  $handler->display->display_options['fields']['field_group_resume']['field'] = 'field_group_resume';
  $handler->display->display_options['fields']['field_group_resume']['label'] = '';
  $handler->display->display_options['fields']['field_group_resume']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_group_resume']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_group_resume']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_group_resume']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_group_resume']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group_resume']['element_wrapper_class'] = 'resume';
  $handler->display->display_options['fields']['field_group_resume']['element_default_classes'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'return og_extras_subscriber_count($row->nid);';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php print $value; ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['exclude'] = TRUE;
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class=\'members\'><span class=\'ting-icon-user\'></span> [php] medlemmer</div>
<div class=\'flag\'>[ops] </div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'meta';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_class'] = 'read-more';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<a href="node/[nid]">
<div class="project-entry-thumbnail">[field_group_image]</div>
<div class="project-entry-text">
<div class="project-entry-text-inner">
<div class="project-entry-text-content">
<span class="project-title">[title]</span>
<span class="project-subtitle">[field_main_subtitle]</span>
<span class="project-read-more">View project</span>
</div>
</div>
</div>
</a>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Content: Brødtekst */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Kategori (field_project_category) */
  $handler->display->display_options['filters']['field_project_category_tid']['id'] = 'field_project_category_tid';
  $handler->display->display_options['filters']['field_project_category_tid']['table'] = 'field_data_field_project_category';
  $handler->display->display_options['filters']['field_project_category_tid']['field'] = 'field_project_category_tid';
  $handler->display->display_options['filters']['field_project_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_project_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project_category_tid']['expose']['operator_id'] = 'field_project_category_tid_op';
  $handler->display->display_options['filters']['field_project_category_tid']['expose']['label'] = 'Filter projects:';
  $handler->display->display_options['filters']['field_project_category_tid']['expose']['operator'] = 'field_project_category_tid_op';
  $handler->display->display_options['filters']['field_project_category_tid']['expose']['identifier'] = 'field_project_category_tid';
  $handler->display->display_options['filters']['field_project_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_project_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_project_category_tid']['vocabulary'] = 'project_categories';
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'field_group_resume' => 'field_group_resume',
    'body' => 'body',
  );
  /* Filter criterion: Content: Deleøkonomisk projekt (field_sharing_economy_project) */
  $handler->display->display_options['filters']['field_sharing_economy_project_value']['id'] = 'field_sharing_economy_project_value';
  $handler->display->display_options['filters']['field_sharing_economy_project_value']['table'] = 'field_data_field_sharing_economy_project';
  $handler->display->display_options['filters']['field_sharing_economy_project_value']['field'] = 'field_sharing_economy_project_value';
  $handler->display->display_options['filters']['field_sharing_economy_project_value']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_sharing_economy_project_value']['group'] = 2;
  /* Filter criterion: Content: Deleøkonomisk projekt (field_sharing_economy_project) */
  $handler->display->display_options['filters']['field_sharing_economy_project_value_1']['id'] = 'field_sharing_economy_project_value_1';
  $handler->display->display_options['filters']['field_sharing_economy_project_value_1']['table'] = 'field_data_field_sharing_economy_project';
  $handler->display->display_options['filters']['field_sharing_economy_project_value_1']['field'] = 'field_sharing_economy_project_value';
  $handler->display->display_options['filters']['field_sharing_economy_project_value_1']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_sharing_economy_project_value_1']['group'] = 2;
  $handler->display->display_options['path'] = 'projects';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Projects';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Forsideblok */
  $handler = $view->new_display('block', 'Forsideblok', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Projects';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹';
  $handler->display->display_options['pager']['options']['tags']['next'] = '›';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'grid-4';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Entity: Rendered entity */
  $handler->display->display_options['footer']['entity']['id'] = 'entity';
  $handler->display->display_options['footer']['entity']['table'] = 'entity__global';
  $handler->display->display_options['footer']['entity']['field'] = 'entity';
  $handler->display->display_options['footer']['entity']['entity_type'] = 'bean';
  $handler->display->display_options['footer']['entity']['entity_id'] = 'beskrivelse-af-projekter-forside';
  $handler->display->display_options['footer']['entity']['view_mode'] = 'default';
  $handler->display->display_options['footer']['entity']['bypass_access'] = 1;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<p><a href="/projects" class=\'btn-link\'>All projects</a></p>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span class=\'ting-icon-file-xml\'></span> <span class=\'text\'>[title]</span>';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '85';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Offentlige partnere */
  $handler->display->display_options['fields']['field_main_partners']['id'] = 'field_main_partners';
  $handler->display->display_options['fields']['field_main_partners']['table'] = 'field_data_field_main_partners';
  $handler->display->display_options['fields']['field_main_partners']['field'] = 'field_main_partners';
  $handler->display->display_options['fields']['field_main_partners']['label'] = '';
  $handler->display->display_options['fields']['field_main_partners']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_main_partners']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_partners']['element_wrapper_class'] = 'partners';
  $handler->display->display_options['fields']['field_main_partners']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_main_partners']['empty'] = '-';
  $handler->display->display_options['fields']['field_main_partners']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_main_partners']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_main_partners']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_main_partners']['delta_offset'] = '0';
  /* Field: Content: Projektejer */
  $handler->display->display_options['fields']['field_project_owner']['id'] = 'field_project_owner';
  $handler->display->display_options['fields']['field_project_owner']['table'] = 'field_data_field_project_owner';
  $handler->display->display_options['fields']['field_project_owner']['field'] = 'field_project_owner';
  $handler->display->display_options['fields']['field_project_owner']['label'] = '';
  $handler->display->display_options['fields']['field_project_owner']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_owner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_owner']['element_wrapper_class'] = 'owner';
  $handler->display->display_options['fields']['field_project_owner']['element_default_classes'] = FALSE;
  /* Field: Content: Billede */
  $handler->display->display_options['fields']['field_group_image']['id'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['table'] = 'field_data_field_group_image';
  $handler->display->display_options['fields']['field_group_image']['field'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['label'] = '';
  $handler->display->display_options['fields']['field_group_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_group_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group_image']['element_wrapper_class'] = 'image';
  $handler->display->display_options['fields']['field_group_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_group_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_group_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_group_image']['settings'] = array(
    'picture_mapping' => 'project_thumbnail_picture_mapping',
    'fallback_image_style' => 'project_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Resumé */
  $handler->display->display_options['fields']['field_group_resume']['id'] = 'field_group_resume';
  $handler->display->display_options['fields']['field_group_resume']['table'] = 'field_data_field_group_resume';
  $handler->display->display_options['fields']['field_group_resume']['field'] = 'field_group_resume';
  $handler->display->display_options['fields']['field_group_resume']['label'] = '';
  $handler->display->display_options['fields']['field_group_resume']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_group_resume']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_group_resume']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_group_resume']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_group_resume']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group_resume']['element_wrapper_class'] = 'resume';
  $handler->display->display_options['fields']['field_group_resume']['element_default_classes'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'return og_extras_subscriber_count($row->nid);';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php print $value; ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['exclude'] = TRUE;
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class=\'members\'><span class=\'ting-icon-user\'></span> [php] medlemmer</div>
<div class=\'flag\'>[ops] </div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'meta';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Undertitel */
  $handler->display->display_options['fields']['field_main_subtitle']['id'] = 'field_main_subtitle';
  $handler->display->display_options['fields']['field_main_subtitle']['table'] = 'field_data_field_main_subtitle';
  $handler->display->display_options['fields']['field_main_subtitle']['field'] = 'field_main_subtitle';
  $handler->display->display_options['fields']['field_main_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_main_subtitle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_main_subtitle']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<a href="node/[nid]">
<div class="project-entry-thumbnail">[field_group_image]</div>
<div class="project-entry-text">
<div class="project-entry-text-inner">
<div class="project-entry-text-content">
<span class="project-title">[title]</span>
<span class="project-subtitle">[field_main_subtitle]</span>
<span class="project-read-more">See project</span>
</div>
</div>
</div>
</a>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['block_description'] = 'Projekter: Forfremmet til forside';

  /* Display: Communityblok */
  $handler = $view->new_display('block', 'Communityblok', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Projekter';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span class=\'ting-icon-file-xml\'></span> <span class=\'text\'>[title]</span>';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '90';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Projektejer */
  $handler->display->display_options['fields']['field_project_owner']['id'] = 'field_project_owner';
  $handler->display->display_options['fields']['field_project_owner']['table'] = 'field_data_field_project_owner';
  $handler->display->display_options['fields']['field_project_owner']['field'] = 'field_project_owner';
  $handler->display->display_options['fields']['field_project_owner']['label'] = '';
  $handler->display->display_options['fields']['field_project_owner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_owner']['element_wrapper_class'] = 'owner-sec';
  $handler->display->display_options['fields']['field_project_owner']['element_default_classes'] = FALSE;
  /* Field: Content: Offentlige partnere */
  $handler->display->display_options['fields']['field_main_partners']['id'] = 'field_main_partners';
  $handler->display->display_options['fields']['field_main_partners']['table'] = 'field_data_field_main_partners';
  $handler->display->display_options['fields']['field_main_partners']['field'] = 'field_main_partners';
  $handler->display->display_options['fields']['field_main_partners']['label'] = '';
  $handler->display->display_options['fields']['field_main_partners']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_main_partners']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_partners']['element_wrapper_class'] = 'partners-sec';
  $handler->display->display_options['fields']['field_main_partners']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_main_partners']['empty'] = '-';
  $handler->display->display_options['fields']['field_main_partners']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_main_partners']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_main_partners']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_main_partners']['delta_offset'] = '0';
  /* Field: Content: Billede */
  $handler->display->display_options['fields']['field_group_image']['id'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['table'] = 'field_data_field_group_image';
  $handler->display->display_options['fields']['field_group_image']['field'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['label'] = '';
  $handler->display->display_options['fields']['field_group_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group_image']['element_wrapper_class'] = 'image';
  $handler->display->display_options['fields']['field_group_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_group_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_group_image']['settings'] = array(
    'image_style' => 'project_large',
    'image_link' => 'content',
  );
  /* Field: Content: Resumé */
  $handler->display->display_options['fields']['field_group_resume']['id'] = 'field_group_resume';
  $handler->display->display_options['fields']['field_group_resume']['table'] = 'field_data_field_group_resume';
  $handler->display->display_options['fields']['field_group_resume']['field'] = 'field_group_resume';
  $handler->display->display_options['fields']['field_group_resume']['label'] = '';
  $handler->display->display_options['fields']['field_group_resume']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_group_resume']['alter']['max_length'] = '75';
  $handler->display->display_options['fields']['field_group_resume']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_group_resume']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_group_resume']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group_resume']['element_wrapper_class'] = 'resume';
  $handler->display->display_options['fields']['field_group_resume']['element_default_classes'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'return og_extras_subscriber_count($row->nid);';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php print $value; ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['exclude'] = TRUE;
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class=\'members\'><span class=\'ting-icon-user\'></span> [php] medlemmer</div>
<div class=\'flag\'>[ops] </div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'meta';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['block_description'] = 'Projekter: Community forside';

  /* Display: Footerblok */
  $handler = $view->new_display('block', 'Footerblok', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Projects';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span class=\'ting-icon-file-xml\'></span> <span class=\'text\'>[title]</span>';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '85';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Sidebarblock */
  $handler = $view->new_display('block', 'Sidebarblock', 'block_4');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<p><a href="/projects" class=\'btn-link\'>All projects</a></p>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Billede */
  $handler->display->display_options['fields']['field_group_image']['id'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['table'] = 'field_data_field_group_image';
  $handler->display->display_options['fields']['field_group_image']['field'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['label'] = '';
  $handler->display->display_options['fields']['field_group_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_group_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group_image']['element_wrapper_class'] = 'image';
  $handler->display->display_options['fields']['field_group_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_group_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_group_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_group_image']['settings'] = array(
    'picture_mapping' => 'projects_sidebar_thumbnail_picture_mapping',
    'fallback_image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span class=\'ting-icon-file-xml\'></span> <span class=\'text\'>[title]</span>';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '85';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Undertitel */
  $handler->display->display_options['fields']['field_main_subtitle']['id'] = 'field_main_subtitle';
  $handler->display->display_options['fields']['field_main_subtitle']['table'] = 'field_data_field_main_subtitle';
  $handler->display->display_options['fields']['field_main_subtitle']['field'] = 'field_main_subtitle';
  $handler->display->display_options['fields']['field_main_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_main_subtitle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_main_subtitle']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/node/[nid]">
<div class="project-entry-image">[field_group_image]</div>
<div class="project-entry-text">
<span class="project-entry-title">[title]</span>
<span class="project-entry-subtitle">[field_main_subtitle]</span>
<span class="project-entry-read-more">See project</span>
</div>
</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $translatables['ting_projects'] = array(
    t('Master'),
    t('Projekter'),
    t('more'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Avancerede indstillinger'),
    t('Vælg kategori'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('<p><a href="/node/add/project">+ Create project</a></p>'),
    t('<p><em>No results.</em></p>'),
    t('flag'),
    t('forfatter'),
    t('Projektqueue'),
    t('<span class=\'ting-icon-file-xml\'></span> <span class=\'text\'>[title]</span>'),
    t('-'),
    t('<div class=\'members\'><span class=\'ting-icon-user\'></span> [php] medlemmer</div>
<div class=\'flag\'>[ops] </div>'),
    t('Filtrér projekter:'),
    t('Kombinér felter filter'),
    t('Page'),
    t('Projects'),
    t('Search'),
    t('Select any filter and click on Apply to see results'),
    t('Show More'),
    t('Undertitel'),
    t('Read more'),
    t('<a href="node/[nid]">
<div class="project-entry-thumbnail">[field_group_image]</div>
<div class="project-entry-text">
<div class="project-entry-text-inner">
<div class="project-entry-text-content">
<span class="project-title">[title]</span>
<span class="project-subtitle">[field_main_subtitle]</span>
<span class="project-read-more">View project</span>
</div>
</div>
</div>
</a>'),
    t('Brødtekst'),
    t('Filter projects:'),
    t('Forsideblok'),
    t('« first'),
    t('‹'),
    t('›'),
    t('last »'),
    t('<p><a href="/projects" class=\'btn-link\'>All projects</a></p>'),
    t('<a href="node/[nid]">
<div class="project-entry-thumbnail">[field_group_image]</div>
<div class="project-entry-text">
<div class="project-entry-text-inner">
<div class="project-entry-text-content">
<span class="project-title">[title]</span>
<span class="project-subtitle">[field_main_subtitle]</span>
<span class="project-read-more">See project</span>
</div>
</div>
</div>
</a>'),
    t('Projekter: Forfremmet til forside'),
    t('Communityblok'),
    t('Projekter: Community forside'),
    t('Footerblok'),
    t('Sidebarblock'),
    t('<a href="/node/[nid]">
<div class="project-entry-image">[field_group_image]</div>
<div class="project-entry-text">
<span class="project-entry-title">[title]</span>
<span class="project-entry-subtitle">[field_main_subtitle]</span>
<span class="project-entry-read-more">See project</span>
</div>
</a>'),
  );
  $export['ting_projects'] = $view;

  return $export;
}
