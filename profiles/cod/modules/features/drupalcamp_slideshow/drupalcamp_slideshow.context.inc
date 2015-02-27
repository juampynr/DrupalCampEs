<?php
/**
 * @file
 * drupalcamp_slideshow.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function drupalcamp_slideshow_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'frontpage';
  $context->description = 'Context that applies to frontpage';
  $context->tag = 'Frontpage';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-landing_slide-block' => array(
          'module' => 'views',
          'delta' => 'landing_slide-block',
          'region' => 'pre_content_fw',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context that applies to frontpage');
  t('Frontpage');
  $export['frontpage'] = $context;

  return $export;
}
