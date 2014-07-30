<?php
/**
 * @file
 * paperweight_interview_with_cover.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function paperweight_interview_with_cover_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function paperweight_interview_with_cover_image_default_styles() {
  $styles = array();

  // Exported image style: half_breakpoints_theme_paperweight_bootstrap_mobile_1x.
  $styles['half_breakpoints_theme_paperweight_bootstrap_mobile_1x'] = array(
    'name' => 'half_breakpoints_theme_paperweight_bootstrap_mobile_1x',
    'label' => 'half_breakpoints_theme_paperweight_bootstrap_mobile_1x',
    'effects' => array(
      5 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 767,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: half_breakpoints_theme_paperweight_bootstrap_normal_1x.
  $styles['half_breakpoints_theme_paperweight_bootstrap_normal_1x'] = array(
    'name' => 'half_breakpoints_theme_paperweight_bootstrap_normal_1x',
    'label' => 'half_breakpoints_theme_paperweight_bootstrap_normal_1x',
    'effects' => array(
      7 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 600,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: half_breakpoints_theme_paperweight_bootstrap_tablet_1x.
  $styles['half_breakpoints_theme_paperweight_bootstrap_tablet_1x'] = array(
    'name' => 'half_breakpoints_theme_paperweight_bootstrap_tablet_1x',
    'label' => 'half_breakpoints_theme_paperweight_bootstrap_tablet_1x',
    'effects' => array(
      6 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 991,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: half_breakpoints_theme_paperweight_bootstrap_wide_1x.
  $styles['half_breakpoints_theme_paperweight_bootstrap_wide_1x'] = array(
    'name' => 'half_breakpoints_theme_paperweight_bootstrap_wide_1x',
    'label' => 'half_breakpoints_theme_paperweight_bootstrap_wide_1x',
    'effects' => array(),
  );

  // Exported image style: large_breakpoints_theme_paperweight_bootstrap_mobile_port_1x.
  $styles['large_breakpoints_theme_paperweight_bootstrap_mobile_port_1x'] = array(
    'name' => 'large_breakpoints_theme_paperweight_bootstrap_mobile_port_1x',
    'label' => 'large_breakpoints_theme_paperweight_bootstrap_mobile_1x',
    'effects' => array(
      4 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 520,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: large_breakpoints_theme_paperweight_bootstrap_normal_1x.
  $styles['large_breakpoints_theme_paperweight_bootstrap_normal_1x'] = array(
    'name' => 'large_breakpoints_theme_paperweight_bootstrap_normal_1x',
    'label' => 'large_breakpoints_theme_paperweight_bootstrap_normal_1x',
    'effects' => array(
      3 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 1199,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: large_breakpoints_theme_paperweight_bootstrap_tablet_1x.
  $styles['large_breakpoints_theme_paperweight_bootstrap_tablet_1x'] = array(
    'name' => 'large_breakpoints_theme_paperweight_bootstrap_tablet_1x',
    'label' => 'large_breakpoints_theme_paperweight_bootstrap_tablet_1x',
    'effects' => array(
      2 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 991,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: large_breakpoints_theme_paperweight_bootstrap_wide_1x.
  $styles['large_breakpoints_theme_paperweight_bootstrap_wide_1x'] = array(
    'name' => 'large_breakpoints_theme_paperweight_bootstrap_wide_1x',
    'label' => 'large_breakpoints_theme_paperweight_bootstrap_wide_1x',
    'effects' => array(),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function paperweight_interview_with_cover_node_info() {
  $items = array(
    'interview_with_cover' => array(
      'name' => t('Interview with Cover'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
