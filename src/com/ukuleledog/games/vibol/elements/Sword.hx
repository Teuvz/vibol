package com.ukuleledog.games.vibol.elements;

import com.ukuleledog.games.core.Weapon;
import openfl.Assets;
import openfl.display.BitmapData;

/**
 * ...
 * @author matt
 */
class Sword extends Weapon
{

	public function new() 
	{
		super();
		
		var imageData:BitmapData = Assets.getBitmapData( 'img/sprite/sword.png' );
		this.graphics.beginBitmapFill( imageData );
		
		//this.graphics.beginFill(0x800080);
		this.graphics.drawRect( 0, 0, 64, 32 );
		this.graphics.endFill();
	}
	
}