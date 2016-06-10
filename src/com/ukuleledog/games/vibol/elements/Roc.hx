package com.ukuleledog.games.vibol.elements;

import com.ukuleledog.games.core.AnimatedObject;
import openfl.Assets;

/**
 * ...
 * @author matt
 */
class Roc extends AnimatedObject
{

	public function new() 
	{
		super();
		
		bmd = Assets.getBitmapData( 'img/sprite/sword-roc.png' );
		
		createAnimation( 'idle', 0, 0, 1, 64, 64 );
		createAnimation( 'empty', 64, 0, 1, 64, 64 );
		
		animate();
	}
	
}