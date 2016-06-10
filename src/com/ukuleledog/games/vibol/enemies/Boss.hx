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
		
		bmd = Assets.getBitmapData( 'img/sprite/boss.png' );
		
		createAnimation( 'idle', 0, 0, 1, 256, 256 );
		createAnimation( 'shout', 256, 0, 1, 256, 256 );
		
		animate();
	}
	
}