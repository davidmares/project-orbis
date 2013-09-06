<?php

/**
 * @file template.php
 */
function Orbis_theme(&$existing, $type, $theme, $path){
	$items = array();

	$items['user_login'] = array(
		'render element' => 'form',
		'path' => drupal_get_path('theme','Orbis') . '/templates',
		'template' => 'user-login',
		'preprocess functions' => array(
			'Orbis_preprocess_user_login'
		)
	);

	$items['user_login_block'] = array(
		'template' => 'templates/user-login-block',
		'render element' => 'form',
	);

	return $items;
}

function Orbis_preprocess_user_login_block(&$vars) {
  $vars['name'] = render($vars['form']['name']);
  $vars['pass'] = render($vars['form']['pass']);
  $vars['submit'] = render($vars['form']['actions']['submit']);
  $vars['rendered'] = drupal_render_children($vars['form']);
}