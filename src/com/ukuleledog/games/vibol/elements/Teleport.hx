package com.ukuleledog.games.vibol.elements;

import com.ukuleledog.games.core.GameObject;

/**
 * ...
 * @author Matt
 */
class Teleport extends GameObject
{

	public function new() 
	{
		super();
		
		this.graphics.beginFill(0x0000FF);
		this.graphics.drawRect( 0, 0, 64, 128 );
		this.graphics.endFill();
	}
	
}