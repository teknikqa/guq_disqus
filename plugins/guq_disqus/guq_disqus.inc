<?php
/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Custom pane'),
  'description' => t('Custom pane for the site.'),
  'category' => t('Custom'),
  'single' => TRUE,
  'content type' => '[content_type]',
);

/**
 * Output function for the '[content_type]' content type.
 */
function guq_disqus_guq_disqus_content_type_render($subtype, $conf, $panel_args, $context) {
  $block = new stdClass();

  $block->title = "Title";
  $block->content = "Custom pane content";
  return $block;
}

/**
 * Returns an edit form for the custom type.
 */
function guq_disqus_guq_disqus_content_type_edit_form(&$form, &$form_state) {
  //Reference
}

/**
 * Returns an edit form for the custom type.
 */
function guq_disqus_guq_disqus_content_type_edit_form_submit(&$form, &$form_state) {
  //Reference
}
