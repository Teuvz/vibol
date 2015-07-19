package com.ukuleledog.games.vibol.elements;

import com.ukuleledog.games.core.AnimatedObject;

/**
 * ...
 * @author matt
 */
class Water extends AnimatedObject
{

	public function new() 
	{
		super();
		
		this.graphics.beginFill( 0x0000FF );
		this.graphics.drawRect( 0, 64, 64, 16 );
		this.graphics.endFill();
		
		setColider(false);
	}
	
}