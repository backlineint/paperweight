<?php

/**
 * @file
 * Display Suite Jonah configuration.
 */

function ds_jonah() {
  return array(
    'label' => t('Jonah'),
    'regions' => array(
      'full_width' => t('Full Width'),
    ),
    // Uncomment if you want to include a CSS file for this layout (jonah.css)
    'css' => TRUE,
    // Uncomment if you want to include a preview for this layout (jonah.png)
    // 'image' => TRUE,
  );
}
