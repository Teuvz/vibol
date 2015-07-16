package com.ukuleledog.games.vibol.elements;

import com.ukuleledog.games.core.AnimatedObject;

/**
 * ...
 * @author Matt
 */
class Coin extends AnimatedObject
{

	public function new() 
	{
		super();
		
		this.graphics.beginFill(0xFFFF00);
		this.graphics.drawRect( 0, 0, 64, 64 );
		this.graphics.endFill();
	}
	
}