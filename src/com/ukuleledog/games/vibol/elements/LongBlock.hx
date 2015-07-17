package com.ukuleledog.games.vibol.elements;

import com.ukuleledog.games.core.GameObject;

/**
 * ...
 * @author Matt
 */
class LongBlock extends GameObject
{

	public function new( _length:Int = 0 ) 
	{
		super();
		
		//this.graphics.beginFill( 0xFF0000 );
		this.graphics.drawRect( 0, 0, _length, 64 );
		//this.graphics.endFill();
	}
	
}