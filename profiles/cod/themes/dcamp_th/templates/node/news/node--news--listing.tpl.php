<?php
// @todo mover a un preprocess
$created = format_date($node->created, 'custom', 'd-F-Y');
$has_image = isset($content['field_main_image']);
$has_image_class = ($has_image) ? "with-image" : "no-image";

if ($has_image) {
  $uri = $content['field_main_image']['#items'][0]['uri'];
  $img_path = file_create_url($uri);
  $img = image_load($uri);

  hide($content['field_main_image']);
}


?>

<?php if ($has_image): ?>
  <style media="all" type="text/css">
    #id-node-<?= $node->nid; ?> {
      background-image: url("<?= $img_path; ?>");
    }
  </style>
<?php endif; ?>

<article<?php print $attributes; ?> id="id-node-<?php print $node->nid; ?>">
  <div class="inner-content <?php print $has_image_class; ?>">

    <div<?php print $content_attributes; ?>>
      <?php print render($content['group_content']['title_field']); ?>
      <div class="content">
        <span class="created"><?php print $created; ?></span>
        <?php print render($content['group_content']['body']); ?>
      </div>

    </div>
  </div>
</article>
