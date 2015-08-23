package com.ukuleledog.games.vibol.elements;

import com.ukuleledog.games.core.GameObject;
import openfl.text.TextField;

/**
 * ...
 * @author Matt
 */
class Block extends GameObject
{

	public function new( name:String = null ) 
	{
		super();
		
		this.graphics.beginFill( 0xFF0000 );
		this.graphics.drawRect( 0, 0, 64, 64 );
		this.graphics.endFill();
		
		if ( name != null )
		{
			var textField:TextField = new TextField();
			textField.text = name;
			addChild( textField );
		}
	}
	
}