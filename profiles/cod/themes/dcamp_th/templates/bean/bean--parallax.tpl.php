<?php
/**
 * @file
 * Default theme implementation for beans.
 *
 * Available variables:
 * - $content: An array of comment items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $title: The (sanitized) entity label.
 * - $url: Direct url of the current entity if specified.
 * - $page: Flag for the full page state.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity-{ENTITY_TYPE}
 *   - {ENTITY_TYPE}-{BUNDLE}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
hide($content['field_prallax_image']);
hide($content['field_parallax_cover_ratio']);
hide($content['field_parallax_speed']);
$image_info = image_get_info($content['field_prallax_image'][0]['#item']['uri']);
?>
<section class="parallax-wrapper content-absolute-centered" data-image="<?php print file_create_url($content['field_prallax_image'][0]['#item']['uri']); ?>" data-width="<?php print $image_info['width']; ?>" data-height="<?php print $image_info['height']; ?>" data-cover-ratio="<?php print $content['field_parallax_cover_ratio']['#items'][0]['value']; ?>" data-speed="<?php print $content['field_parallax_speed']['#items'][0]['value']; ?>">
  <?php if (isset($content)): ?>

    <div class="parallax-content content">
      <div class="inner">
        <div class="vertical-content">
          <?php print render($content); ?>
        </div>
      </div>

    </div>
  <?php endif; ?>
</section>
