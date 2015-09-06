package com.ukuleledog.games.vibol.elements;
import com.ukuleledog.games.core.GameObject;

/**
 * ...
 * @author matt
 */
class GameEvent extends GameObject
{

	private var _name:String;
	
	public function new( name:String = null ) 
	{
		super();
		this.graphics.drawRect( 0, 0, 128, 128 );		
		_name = name;
	}
	
	public function getName():String
	{
		return _name;
	}
	
}