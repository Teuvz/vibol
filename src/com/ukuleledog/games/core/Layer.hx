package com.ukuleledog.games.core;
import openfl.display.Sprite;

/**
 * ...
 * @author Matt
 */
class Layer extends Sprite
{

	public function new() 
	{
		super();
	}
	
	public function add( e:GameObject )
	{
		addChild( e );
	}
	
	public function remove( e:GameObject )
	{
		removeChild( e );
	}
	
}