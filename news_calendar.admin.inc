<?php
// $Id:
/**
 * @file
 */

/**
 * 
 */ 
function news_calendar_configuration_form() {		
	$form['base'] = array(
		'#type' => 'fieldset',
		'#title' => t('News calendar settings'),
		'#collapsible' => true,  
		'#collapsed' => false,
	);

	$form['base']['news_calendar_node_type'] = array(
		'#type' => 'textfield',
		'#title' => t('Node type'),
		'#description' => t('The type of nodes to work with.'),
		'#default_value' => variable_get('news_calendar_node_type', 'news'),
	);
	
	$form['base']['news_calendar_year_path'] = array(
		'#type' => 'textfield',
		'#title' => t('The path of a year calendar'),
		'#description' => t('Type the drupal path with a signle % argument. WARNING: After change this setting you should flush the site cache.'),
		'#default_value' => variable_get('news_calendar_year_path', 'calendar/year/%'),
	);
	
	$form['base']['news_calendar_day_path'] = array(
		'#type' => 'textfield',
		'#title' => t('The path of a day calendar'),
		'#description' => t('Type the drupal path. Following arguments are available: %year%, %month%, %day%.'),
		'#default_value' => variable_get('news_calendar_day_path', 'calendar/%year%/%month%/%day%'),
	);
	
	return system_settings_form($form);
}
