package com.ukuleledog.games.core;

import motion.Actuate;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.Sprite;

/**
 * ...
 * @author Matt
 */
class GameObject extends Sprite
{

	public var bmd:BitmapData;
	
	private var colider:Bool = true;
	private var isMoving:Bool = false;
	private var moving:Bool = false;
	private var originalX:Float;
	private var originalY:Float;
	private var finalX:Float;
	private var finalY:Float;
	private var speed:Int;
	private var movingOriginal:Bool = true;
	
	public function new() 
	{
		super();
		
	}
	
	public function setMoving( _speed:Int, _finalX:Int, _finalY:Int )
	{
		moving = true;
		speed = _speed;
		finalX = _finalX * 64;
		finalY = _finalY * 64;
		originalX = this.x;
		originalY = this.y;
	}
	
	public function move()
	{
		if ( moving && !isMoving )
		{
			isMoving = true;
			
			if ( movingOriginal )
			{
				Actuate.tween( this, speed, { x: finalX, y: finalY } ).onComplete( moveEnd );
			}
			else
			{
				Actuate.tween( this, speed, { x: originalX, y: originalY } ).onComplete( moveEnd );
			}
			
		}
	}
	
	private function moveEnd()
	{
		movingOriginal = !movingOriginal;		
		isMoving = false;
	}
	
	public function setColider( value:Bool )
	{
		colider = value;
	}
	
	public function isColider() : Bool
	{
		return colider;
	}
	
}