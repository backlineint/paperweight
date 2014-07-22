<?php drupal_add_js(drupal_get_path('theme', 'paperweight_bootstrap') . '/js/slide_up_with_image.js'); // Change the name of JS to be more generic ?>
<?php drupal_add_js(drupal_get_path('theme', 'paperweight_bootstrap') . '/js/jquery.fittext.js'); ?>
<?php drupal_add_js(drupal_get_path('theme', 'paperweight_bootstrap') . '/js/interview_with_cover.js'); ?>
<?php //drupal_add_css(drupal_get_path('theme', 'paperweight_bootstrap') . '/css/slide_up_with_image.css'); ?>

<header id="navbar" role="banner" class="<?php print $navbar_classes; ?>">
  <div class="container">
    <div class="navbar-header">
      <?php if ($logo): ?>
      <a class="logo navbar-btn pull-left" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
        <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
      </a>
      <?php endif; ?>

      <?php if (!empty($site_name)): ?>
      <a class="name navbar-brand" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"><?php print $site_name; ?></a>
      <?php endif; ?>

      <!-- .btn-navbar is used as the toggle for collapsed navbar content -->
      <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
        <span class="sr-only">Toggle navigation</span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
      </button>
    </div>

    <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
      <div class="navbar-collapse collapse">
        <nav role="navigation">
          <?php if (!empty($primary_nav)): ?>
            <?php print render($primary_nav); ?>
          <?php endif; ?>
          <?php if (!empty($secondary_nav)): ?>
            <?php print render($secondary_nav); ?>
          <?php endif; ?>
          <?php if (!empty($page['navigation'])): ?>
            <?php print render($page['navigation']); ?>
          <?php endif; ?>
        </nav>
      </div>
    <?php endif; ?>
  </div>
</header>

<?php //$path = drupal_get_path('theme', 'paperweight_bootstrap').'/images/logo.png'; var_dump($path); ?>

	      	<div class = "stretch container" id = "header_title">
	      		<img class="img-responsive" src = "<?php print drupal_get_path('theme', 'paperweight_bootstrap').'/images/logo.png'; ?>" />
		      <?php if (isset($node_content) && $node_content['field_header_title']): ?>
			      <?php print render($node_content['field_header_title']); ?>
			  <?php endif; ?>
		      <?php if (isset($node_content) && $node_content['field_name']): ?>
			      <div id = "name">
			      <?php print render($node_content['field_name']); ?>
			      </div>	      
			  <?php endif; ?>
	      	</div>   	

      <?php if (isset($node_content) && $node_content['field_header_image']): ?>
	      <?php print render($node_content['field_header_image']); ?>
	  <?php endif; ?>
<?php //if (isset($node) && ($node->nid == "39")): // Only print HR for Reeses ?>
<hr class = "show_header" />
<?php //endif; ?>
<div class = "wrapper">
<div class="main-container container">

  <header role="banner" id="page-header">
    <?php if (!empty($site_slogan)): ?>
      <p class="lead"><?php print $site_slogan; ?></p>
    <?php endif; ?>

    <?php print render($page['header']); ?>
  </header> <!-- /#header -->

  <div class="row">

    <?php if (!empty($page['sidebar_first'])): ?>
      <aside class="col-sm-3" role="complementary">
        <?php print render($page['sidebar_first']); ?>
      </aside>  <!-- /#sidebar-first -->
    <?php endif; ?>

    <section<?php print $content_column_class; ?>>
      <?php if (!empty($page['highlighted'])): ?>
        <div class="highlighted hero-unit"><?php print render($page['highlighted']); ?></div>
      <?php endif; ?>
      <?php if (!empty($breadcrumb)): print $breadcrumb; endif;?>
      <a id="main-content"></a>
      <?php print $messages; ?>
      <?php if (!empty($tabs)): ?>
        <?php print render($tabs); ?>
      <?php endif; ?>
      <?php if (!empty($page['help'])): ?>
        <?php print render($page['help']); ?>
      <?php endif; ?>
      <?php if (!empty($action_links)): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
    </section>

    <?php if (!empty($page['sidebar_second'])): ?>
      <aside class="col-sm-3" role="complementary">
        <?php print render($page['sidebar_second']); ?>
      </aside>  <!-- /#sidebar-second -->
    <?php endif; ?>

  </div>
</div>
</div>
<?php //if (isset($node) && ($node->nid == "39")): // Only print HR for Reeses ?>
<?php //endif; ?>
<!--<footer class="footer container">-->
  <?php //print render($page['footer']); ?>
<!--</footer>-->
