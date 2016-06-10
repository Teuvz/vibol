package com.ukuleledog.games.vibol.elements;

import com.ukuleledog.games.core.GameObject;
import openfl.Assets;
import openfl.display.BitmapData;

/**
 * ...
 * @author Matt
 */
class LongBlock extends GameObject
{

	public function new( _length:Float, type:String = 'longblock' ) 
	{
		super();
		
		var imageData:BitmapData = Assets.getBitmapData( 'img/sprite/'+type+'.png' );
		this.graphics.beginBitmapFill( imageData, null, true );
		
		//this.graphics.beginFill( 0xFF0000 );
		this.graphics.drawRect( 0, 0, _length * 64, 64 );
		this.graphics.endFill();
	}
	
	override public function mustTestCollision( _x:Float, _y:Float ) : Bool
	{
		return true;
	}
	
}