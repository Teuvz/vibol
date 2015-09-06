package com.ukuleledog.games.vibol.enemies;

import com.ukuleledog.games.core.AnimatedObject;
import com.ukuleledog.games.core.Ennemy;
import openfl.Assets;
import openfl.display.BitmapData;

/**
 * ...
 * @author Matt
 */
class Schroom extends Ennemy
{
	
	public function new() 
	{
		super();
		
		var imageData:BitmapData = Assets.getBitmapData( 'img/sprite/schroom.png' );
		this.graphics.beginBitmapFill( imageData );
		
		//this.graphics.beginFill(0x00FF00);
		this.graphics.drawRect( 0, 0, 64, 64 );
		this.graphics.endFill();
	}
	
}