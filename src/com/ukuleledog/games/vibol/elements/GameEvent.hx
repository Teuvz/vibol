package com.ukuleledog.games.vibol.elements;
import com.ukuleledog.games.core.GameObject;

/**
 * ...
 * @author matt
 */
class GameEvent extends GameObject
{

	public function new() 
	{
		super();
		this.graphics.beginFill( 0x00FF00 );
		this.graphics.drawRect( 0, 0, 128, 128 );
		this.graphics.endFill();
	}
	
}