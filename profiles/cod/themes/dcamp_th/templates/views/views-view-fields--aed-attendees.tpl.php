<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>

<div class="user-item clearfix">

  <div class="image">
    <div class="inner-content">
      <?php print $fields['picture']->content; ?>
      <div class="featured">

        <?php
        // Todo mover a un preprocess.
        $u = user_load($fields['uid']->raw);

        if (isset($u->roles[6])) {
          print t("Featured Speaker");
        }

        if (isset($u->roles[8])) {
          print t("Sponsor");
        }

        ?>

      </div>
    </div>
  </div>

  <div class="content">
    <div class="name">
      <?php print $fields['field_profile_first']->content; ?><?php print $fields['field_profile_last']->content; ?>
    </div>

    <div class="organization">
      <?php print $fields['field_profile_org']->content; ?>
    </div>

    <div class="nick">
      <?php print $fields['field_nick']->content; ?>
    </div>
  </div>

</div>
