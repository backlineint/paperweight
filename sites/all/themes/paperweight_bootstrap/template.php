<?php

/**
 * @file template.php
 */

function paperweight_bootstrap_preprocess_page(&$variables) { 
	if (isset($variables['node']->type)) { 
		$variables['theme_hook_suggestions'][] = 'page__' . $variables['node']->type; 
	}
  	if (arg(0) == 'node') {
	  $variables['node_content'] =& $variables['page']['content']['system_main']['nodes'][arg(1)];
    }
	 
}