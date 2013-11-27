<?php
/**
 * @file
 * media.features.inc
 */

/**
 * Implements hook_views_api().
 */
function media_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function media_image_default_styles() {
  $styles = array();

  // Exported image style: gallery_img_tn.
  $styles['gallery_img_tn'] = array(
    'name' => 'gallery_img_tn',
    'label' => 'gallery_img_tn',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 120,
          'height' => 120,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function media_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Media'),
      'base' => 'node_content',
      'description' => t('Use <em>media</em> for items such as press releases, featured articles and videos. These pages will feed to the <em>Media</em> page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
