package com.ukuleledog.games.vibol.elements;

import com.ukuleledog.games.core.Hero;
import motion.Actuate;
import motion.easing.Bounce;
import motion.easing.Linear;
import openfl.Assets;

/**
 * ...
 * @author Matt
 */
class Vibol extends Hero
{

	public function new() 
	{
		super();
		
		this.graphics.beginBitmapFill( Assets.getBitmapData('img/hero.png') );
		this.graphics.drawRect( 0, 0, 64, 64 );
		this.graphics.endFill();
		
	}
	
}