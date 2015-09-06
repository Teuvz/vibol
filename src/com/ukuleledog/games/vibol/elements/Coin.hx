package com.ukuleledog.games.vibol.elements;

import com.ukuleledog.games.core.AnimatedObject;
import openfl.Assets;
import openfl.display.BitmapData;

/**
 * ...
 * @author Matt
 */
class Coin extends AnimatedObject
{

	public function new() 
	{
		super();
		
		var imageData:BitmapData = Assets.getBitmapData( 'img/sprite/coin.png' );
		this.graphics.beginBitmapFill( imageData );
		
		//this.graphics.beginFill(0xFFFF00);
		this.graphics.drawRect( 0, 0, 64, 64 );
		this.graphics.endFill();
	}
	
}