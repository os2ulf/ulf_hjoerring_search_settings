<?php

/**
 * @file
 * ulf_hjoerring_search_settings.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ulf_hjoerring_search_settings_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'search_educations';
  $page->task = 'page';
  $page->admin_title = 'Search - Educations';
  $page->admin_description = '';
  $page->path = 'uddannelse-og-job';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Uddannelse og job',
    'name' => 'main-menu',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_search_educations__panel_context_53ef60d7-27ce-4bd1-aa44-6737cd7bc12a';
  $handler->task = 'page';
  $handler->subtask = 'search_educations';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '628079a0-513c-4ad1-965b-dc9dd22943cc';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_search_educations__panel_context_53ef60d7-27ce-4bd1-aa44-6737cd7bc12a';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-dfa56415-9735-4149-b13c-fecff6fecb10';
  $pane->panel = 'middle';
  $pane->type = 'search_box';
  $pane->subtype = 'search_box';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'text' => '',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'search_node' => array(
      'id' => '1580996428',
      'server' => 'search_node',
      'index' => 'internships',
      'options' => array(
        'match_type' => 'best_fields',
        'match_operator' => 'or',
        'cache_expire' => '300',
        'size' => '14',
        'initial_query_enable' => 1,
        'initial_query_text' => '',
        'fields' => array(
          'author:field_profile_name' => 'author:field_profile_name',
          'field_educational_goals' => 'field_educational_goals',
          'field_full_description:value' => 'field_full_description:value',
          'field_subject' => 'field_subject',
          'title' => 'title',
          'author' => 0,
          'author:url' => 0,
          'changed' => 0,
          'created' => 0,
          'field_image:file' => 0,
          'field_location' => 0,
          'field_offer_type' => 0,
          'field_period:value2' => 0,
          'field_price' => 0,
          'field_subject:url' => 0,
          'field_subjects_primary_school' => 0,
          'field_subjects_youth' => 0,
          'field_target_group' => 0,
          'field_target_group_sub' => 0,
          'nid' => 0,
          'search_api_language' => 0,
          'type' => 0,
          'url' => 0,
        ),
        'filters' => array(
          'taxonomy' => array(
            'field_educational_goals' => 'field_educational_goals',
            'field_offer_type' => 'field_offer_type',
            'field_subject' => 'field_subject',
            'field_target_group_sub' => 'field_target_group_sub',
            'field_subjects_primary_school' => 0,
            'field_subjects_youth' => 0,
            'field_target_group' => 0,
          ),
          'boolean' => array(
            'field_free' => 'field_free',
            'field_period_full_year' => 0,
          ),
        ),
      ),
      'filters' => array(
        'type' => array(
          'field_educational_goals' => 'or',
          'field_offer_type' => 'or',
          'field_subject' => 'or',
          'field_subjects_primary_school' => 'or',
          'field_subjects_youth' => 'or',
          'field_target_group' => 'or',
          'field_target_group_sub' => 'or',
        ),
      ),
      'sorting' => array(
        'field' => 'changed',
        'order' => 'desc',
      ),
      'dates' => array(
        'fields' => array(
          'field_period:value' => 'field_period:value',
        ),
      ),
      'intervals' => array(
        'fields' => array(
          'author' => 0,
          'author:field_profile_name' => 0,
          'author:url' => 0,
          'changed' => 0,
          'created' => 0,
          'field_educational_goals' => 0,
          'field_full_description:value' => 0,
          'field_image:file' => 0,
          'field_location' => 0,
          'field_offer_type' => 0,
          'field_period:value2' => 0,
          'field_price' => 0,
          'field_subject' => 0,
          'field_subject:url' => 0,
          'field_subjects_primary_school' => 0,
          'field_subjects_youth' => 0,
          'field_target_group' => 0,
          'field_target_group_sub' => 0,
          'nid' => 0,
          'search_api_language' => 0,
          'title' => 0,
          'type' => 0,
          'url' => 0,
        ),
      ),
      'forces' => array(
        'field' => 'field_target_group',
        'selected' => array(
          'Dagtilbud' => 'Dagtilbud',
          'Grundskole' => 0,
          'Ungdomsuddannelse' => 0,
        ),
      ),
      'highlight' => array(
        'fields' => array(
          'author' => 0,
          'author:field_profile_name' => 0,
          'author:url' => 0,
          'changed' => 0,
          'created' => 0,
          'field_educational_goals' => 0,
          'field_full_description:value' => 0,
          'field_image:file' => 0,
          'field_location' => 0,
          'field_offer_type' => 0,
          'field_period:value2' => 0,
          'field_price' => 0,
          'field_subject' => 0,
          'field_subject:url' => 0,
          'field_subjects_primary_school' => 0,
          'field_subjects_youth' => 0,
          'field_target_group' => 0,
          'field_target_group_sub' => 0,
          'nid' => 0,
          'search_api_language' => 0,
          'title' => 0,
          'type' => 0,
          'url' => 0,
        ),
      ),
      'templates' => array(
        'box' => '/profiles/ulf/themes/ulf_default/templates/search/angular/search-course.html',
        'result' => '/profiles/ulf/themes/ulf_default/templates/search/angular/results-course.html',
        'pager' => '/profiles/ulf/themes/ulf_default/templates/search/angular/pager.html',
        'popup' => '/profiles/ulf/themes/ulf_default/templates/search/angular/popup-course.html',
      ),
      'autocomplete' => array(
        'index' => '_none_',
        'field' => '_none_',
        'minChars' => '3',
        'size' => '1',
      ),
      'map' => array(
        'points' => '10000',
        'markers' => '/profiles/ulf/themes/ulf_default/images/leaflet/',
      ),
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'dfa56415-9735-4149-b13c-fecff6fecb10';
  $display->content['new-dfa56415-9735-4149-b13c-fecff6fecb10'] = $pane;
  $display->panels['middle'][0] = 'new-dfa56415-9735-4149-b13c-fecff6fecb10';
  $pane = new stdClass();
  $pane->pid = 'new-485b89b0-43a3-4592-8e8e-d0f5160a9288';
  $pane->panel = 'middle';
  $pane->type = 'search_result';
  $pane->subtype = 'search_result';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '485b89b0-43a3-4592-8e8e-d0f5160a9288';
  $display->content['new-485b89b0-43a3-4592-8e8e-d0f5160a9288'] = $pane;
  $display->panels['middle'][1] = 'new-485b89b0-43a3-4592-8e8e-d0f5160a9288';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['search_educations'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'search_internships';
  $page->task = 'page';
  $page->admin_title = 'Search - Internships';
  $page->admin_description = '';
  $page->path = 'erhvervspraktik';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Erhvervspraktik',
    'name' => 'main-menu',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_search_internships__panel_context_53ef60d7-27ce-4bd1-aa44-6737cd7bc12a';
  $handler->task = 'page';
  $handler->subtask = 'search_internships';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '628079a0-513c-4ad1-965b-dc9dd22943cc';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_search_internships__panel_context_53ef60d7-27ce-4bd1-aa44-6737cd7bc12a';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-dfa56415-9735-4149-b13c-fecff6fecb10';
  $pane->panel = 'middle';
  $pane->type = 'search_box';
  $pane->subtype = 'search_box';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'text' => '',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'search_node' => array(
      'id' => '1581322885',
      'server' => 'search_node',
      'index' => 'internships',
      'options' => array(
        'match_type' => 'best_fields',
        'match_operator' => 'or',
        'cache_expire' => '300',
        'size' => '14',
        'initial_query_enable' => 1,
        'initial_query_text' => '',
        'fields' => array(
          'author:field_profile_name' => 'author:field_profile_name',
          'field_educational_goals' => 'field_educational_goals',
          'title' => 'title',
          'author' => 0,
          'author:url' => 0,
          'changed' => 0,
          'created' => 0,
          'field_location' => 0,
          'field_price' => 0,
          'field_subject' => 0,
          'field_subjects_primary_school' => 0,
          'field_subjects_youth' => 0,
          'field_target_group' => 0,
          'field_target_group_sub' => 0,
          'nid' => 0,
          'search_api_language' => 0,
          'type' => 0,
          'url' => 0,
        ),
        'filters' => array(
          'taxonomy' => array(
            'field_educational_goals' => 'field_educational_goals',
            'field_subject' => 0,
            'field_subjects_primary_school' => 0,
            'field_subjects_youth' => 0,
            'field_target_group' => 0,
            'field_target_group_sub' => 0,
          ),
          'boolean' => array(
            'field_free' => 'field_free',
          ),
        ),
      ),
      'filters' => array(
        'type' => array(
          'field_educational_goals' => 'or',
          'field_subject' => 'or',
          'field_subjects_primary_school' => 'or',
          'field_subjects_youth' => 'or',
          'field_target_group' => 'or',
          'field_target_group_sub' => 'or',
        ),
      ),
      'sorting' => array(
        'field' => 'changed',
        'order' => 'desc',
      ),
      'dates' => array(
        'fields' => array(),
      ),
      'intervals' => array(
        'fields' => array(
          'author' => 0,
          'author:field_profile_name' => 0,
          'author:url' => 0,
          'changed' => 0,
          'created' => 0,
          'field_educational_goals' => 0,
          'field_location' => 0,
          'field_price' => 0,
          'field_subject' => 0,
          'field_subjects_primary_school' => 0,
          'field_subjects_youth' => 0,
          'field_target_group' => 0,
          'field_target_group_sub' => 0,
          'nid' => 0,
          'search_api_language' => 0,
          'title' => 0,
          'type' => 0,
          'url' => 0,
        ),
      ),
      'forces' => array(
        'field' => '_none_',
        'selected' => array(),
      ),
      'highlight' => array(
        'fields' => array(
          'author' => 0,
          'author:field_profile_name' => 0,
          'author:url' => 0,
          'changed' => 0,
          'created' => 0,
          'field_educational_goals' => 0,
          'field_location' => 0,
          'field_price' => 0,
          'field_subject' => 0,
          'field_subjects_primary_school' => 0,
          'field_subjects_youth' => 0,
          'field_target_group' => 0,
          'field_target_group_sub' => 0,
          'nid' => 0,
          'search_api_language' => 0,
          'title' => 0,
          'type' => 0,
          'url' => 0,
        ),
      ),
      'templates' => array(
        'box' => '/profiles/ulf/themes/ulf_default/templates/search/angular/search-course.html',
        'result' => '/profiles/ulf/themes/ulf_default/templates/search/angular/results-course.html',
        'pager' => '/profiles/ulf/themes/ulf_default/templates/search/angular/pager.html',
        'popup' => '/profiles/ulf/themes/ulf_default/templates/search/angular/popup-course.html',
      ),
      'autocomplete' => array(
        'index' => 'internships',
        'field' => '_none_',
        'minChars' => '3',
        'size' => '1',
      ),
      'map' => array(
        'points' => '10000',
        'markers' => '/profiles/ulf/themes/ulf_default/images/leaflet/',
      ),
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'dfa56415-9735-4149-b13c-fecff6fecb10';
  $display->content['new-dfa56415-9735-4149-b13c-fecff6fecb10'] = $pane;
  $display->panels['middle'][0] = 'new-dfa56415-9735-4149-b13c-fecff6fecb10';
  $pane = new stdClass();
  $pane->pid = 'new-485b89b0-43a3-4592-8e8e-d0f5160a9288';
  $pane->panel = 'middle';
  $pane->type = 'search_result';
  $pane->subtype = 'search_result';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '485b89b0-43a3-4592-8e8e-d0f5160a9288';
  $display->content['new-485b89b0-43a3-4592-8e8e-d0f5160a9288'] = $pane;
  $display->panels['middle'][1] = 'new-485b89b0-43a3-4592-8e8e-d0f5160a9288';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['search_internships'] = $page;

  return $pages;

}
