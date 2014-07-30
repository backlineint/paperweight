<?php
/**
 * @file
 * paperweight_interview_with_cover.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function paperweight_interview_with_cover_default_picture_mapping() {
  $export = array();

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'paperweight_bootstrap';
  $picture_mapping->breakpoint_group = 'paperweight_bootstrap';
  $picture_mapping->mapping = array(
    'breakpoints.theme.paperweight_bootstrap.mobile' => array(
      '1x' => 'large_breakpoints_theme_paperweight_bootstrap_mobile_port_1x',
    ),
    'breakpoints.theme.paperweight_bootstrap.tablet' => array(
      '1x' => 'large_breakpoints_theme_paperweight_bootstrap_tablet_1x',
    ),
    'breakpoints.theme.paperweight_bootstrap.normal' => array(
      '1x' => 'large_breakpoints_theme_paperweight_bootstrap_normal_1x',
    ),
    'breakpoints.theme.paperweight_bootstrap.wide' => array(
      '1x' => 'large_breakpoints_theme_paperweight_bootstrap_wide_1x',
    ),
  );
  $export['paperweight_bootstrap'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'paperweight_bootstrap_half';
  $picture_mapping->breakpoint_group = 'paperweight_bootstrap_half';
  $picture_mapping->mapping = array(
    'breakpoints.theme.paperweight_bootstrap.mobile' => array(
      '1x' => 'half_breakpoints_theme_paperweight_bootstrap_mobile_1x',
    ),
    'breakpoints.theme.paperweight_bootstrap.tablet' => array(
      '1x' => 'half_breakpoints_theme_paperweight_bootstrap_tablet_1x',
    ),
    'breakpoints.theme.paperweight_bootstrap.normal' => array(
      '1x' => 'half_breakpoints_theme_paperweight_bootstrap_normal_1x',
    ),
    'breakpoints.theme.paperweight_bootstrap.wide' => array(
      '1x' => 'half_breakpoints_theme_paperweight_bootstrap_wide_1x',
    ),
  );
  $export['paperweight_bootstrap_half'] = $picture_mapping;

  return $export;
}
