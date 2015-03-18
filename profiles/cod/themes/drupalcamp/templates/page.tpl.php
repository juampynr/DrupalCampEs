<header id="navbar" role="banner" class="<?php print $navbar_classes; ?>">
  <div class="wrapper">
    <div class="container">
      <div class="navbar-header">

        <?php if (!empty($site_name)): ?>
          <a class="name navbar-brand" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
            <span class="site-name"><?php print $site_name; ?></span>
          </a>
        <?php endif; ?>

        <!-- .btn-navbar is used as the toggle for collapsed navbar content -->
        <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
          <span class="sr-only">Toggle navigation</span>
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
        </button>
      </div>

<!--        <div class="lead">GOOD WINE IMPROVES WITH TIME,<br />GOOD CODE IMPROVES WITH THE COMMUNITY</div>-->
        <div class="lead"><?php echo $site_slogan; ?></div>

      <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
        <div class="navbar-collapse collapse">
          <nav role="navigation">
            <?php if (!empty($secondary_nav)): ?>
              <?php print render($secondary_nav); ?>
            <?php endif; ?>
            <?php if (!empty($page['navigation'])): ?>
              <?php print render($page['navigation']); ?>
            <?php endif; ?>
          </nav>
        </div>
      <?php endif; ?>

      <div class="event-date">
        22 · 23 · 24
        <strong><?php print t('May 2015'); ?></strong>
        <strong><?php print t('Jerez de la Frontera'); ?></strong>
      </div>

    </div>
  </div>

</header>

<div class="main-container">

  <header class="content-header" role="banner" id="page-header">
    <div class="container">
      <?php print render($page['header']); ?>


      <div class="row">
        <div class="col-xs-12">
          <?php if (!empty($primary_nav)): ?>
            <nav class="main-navigation">
              <?php print render($primary_nav); ?>
            </nav>
          <?php endif; ?>
        </div>
      </div>
    </div>
  </header>
  <!-- /#page-header -->

  <?php if (!empty($page['pre_content_fw'])): ?>
    <div class="pre-content">
      <div class="wrapper">
        <?php print render($page['pre_content_fw']); ?>
      </div>
    </div>
  <?php endif; ?>

  <div class="container">
    <div class="row">

      <div class="col-sm-12">
        <?php if (!empty($page['highlighted'])): ?>
          <div class="highlighted jumbotron"><?php print render($page['highlighted']); ?></div>
        <?php endif; ?>
        <?php if (!empty($breadcrumb)): print $breadcrumb; endif; ?>
        <a id="main-content"></a>
        <?php print render($title_prefix); ?>
        <?php if (!empty($title)): ?>
          <h1 class="page-header"><?php print $title; ?></h1>
        <?php endif; ?>
        <?php print render($title_suffix); ?>
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
      </div>

      <?php if (!empty($page['sidebar_first'])): ?>
        <aside class="col-sm-4" role="complementary">
          <?php print render($page['sidebar_first']); ?>
        </aside>  <!-- /#sidebar-first -->
      <?php endif; ?>

      <section <?php print $content_column_class; ?>>
        <?php print render($page['content']); ?>
      </section>

      <?php if (!empty($page['sidebar_second'])): ?>
        <aside class="col-sm-4" role="complementary">
          <?php print render($page['sidebar_second']); ?>
        </aside>  <!-- /#sidebar-second -->
      <?php endif; ?>
    </div>
  </div>

  <?php if (!empty($page['post_content_fw'])): ?>
    <div class="post-content">
      <div class="container wrapper">
        <?php print render($page['post_content_fw']); ?>
      </div>
    </div>
  <?php endif; ?>
</div>

<footer class="footer">
  <div class="wrapper">
    <div class="container">
      <?php print render($page['footer']); ?>
      <section id="block-bean-logo-aed" class="block block-bean clearfix">


        <div class="entity entity-bean bean-simple clearfix">

          <div class="content">
            <div class="field field-name-field-simple-body field-type-text-long field-label-hidden"><div class="field-items"><div class="field-item even"><p><a href="http://asociaciondrupal.es" target="_blank"><img class="media-image" height="140" width="256" src="http://2015.drupalcamp.es/sites/default/files/logo_aed.png" alt="" title=""></a></p>
                </div></div></div>  </div>
        </div>

      </section>

      <section id="block-bean-copyright" class="block block-bean block-copyright clearfix">


        <div class="entity entity-bean bean-simple clearfix">

          <div class="content">
            <div class="field field-name-field-simple-body field-type-text-long field-label-hidden"><div class="field-items"><div class="field-item even"><p>© 2014 Asociación Española de Drupal</p>
                </div></div></div>  </div>
        </div>

      </section>

    </div>
  </div>
</footer>
