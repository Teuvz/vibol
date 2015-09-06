package com.ukuleledog.games.vibol.enemies;

import com.ukuleledog.games.core.Ennemy;
import openfl.Assets;
import openfl.display.BitmapData;

/**
 * ...
 * @author matt
 */
class Boss extends Ennemy
{

	public function new() 
	{
		super();
				
		health = 20;
		speed = 1;
		
		var imageData:BitmapData = Assets.getBitmapData( 'img/sprite/boss.png' );
		this.graphics.beginBitmapFill( imageData );
		
		//this.graphics.beginFill(0x00FF00);
		this.graphics.drawRect( 0, 0, 256, 256 );
		this.graphics.endFill();
	}
	
}