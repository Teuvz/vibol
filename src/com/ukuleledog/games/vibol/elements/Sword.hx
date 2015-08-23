package com.ukuleledog.games.vibol.elements;

import com.ukuleledog.games.core.Weapon;

/**
 * ...
 * @author matt
 */
class Sword extends Weapon
{

	public function new() 
	{
		super();
		
		this.graphics.beginFill(0x800080);
		this.graphics.drawRect( 0, 0, 64, 32 );
		this.graphics.endFill();
	}
	
}