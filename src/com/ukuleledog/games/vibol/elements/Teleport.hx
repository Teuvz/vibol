package com.ukuleledog.games.vibol.elements;

import com.ukuleledog.games.core.GameObject;
import openfl.Assets;
import openfl.display.BitmapData;

/**
 * ...
 * @author Matt
 */
class Teleport extends GameObject
{	
	public function new() 
	{
		super();
			
		var imageData:BitmapData = Assets.getBitmapData( 'img/sprite/teleport.png' );
		this.graphics.beginBitmapFill( imageData );
		
		//this.graphics.beginFill(0x0000FF);
		this.graphics.drawRect( 0, 0, 64, 128 );
		this.graphics.endFill();
	}
	
}