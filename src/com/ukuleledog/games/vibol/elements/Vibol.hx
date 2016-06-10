package com.ukuleledog.games.vibol.elements;

import com.ukuleledog.games.core.Hero;
import motion.Actuate;
import motion.easing.Bounce;
import motion.easing.Linear;
import openfl.Assets;
import openfl.display.BitmapData;

/**
 * ...
 * @author Matt
 */
class Vibol extends Hero
{

	public function new() 
	{
		super();
		
		bmd = Assets.getBitmapData( 'img/sprite/vibol.png' );
		
		createAnimation( 'idle', 0, 0, 1, 64, 64 );
		createAnimation( 'walk', 64, 0, 2, 64, 64, 0.1 );
		createAnimation( 'sword', 192, 0, 1, 64, 64 );
		createAnimation( 'sword2', 256, 0, 1, 64, 64 );
		
		animate();
		
		/*var imageData:BitmapData = Assets.getBitmapData( 'img/sprite/vibol.png' );
		this.graphics.beginBitmapFill( imageData );
		
		this.graphics.drawRect( 0, 0, 64, 64 );
		this.graphics.endFill();*/
		
	}
	
}