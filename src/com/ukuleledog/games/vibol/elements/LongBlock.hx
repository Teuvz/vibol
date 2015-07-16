package com.ukuleledog.games.vibol.elements;

import com.ukuleledog.games.core.GameObject;

/**
 * ...
 * @author Matt
 */
class LongBlock extends GameObject
{

	public function new() 
	{
		super();
		
		this.graphics.beginFill( 0xFF0000 );
		this.graphics.drawRect( 0, 0, 256, 64 );
		this.graphics.endFill();
	}
	
}