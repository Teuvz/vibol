package com.ukuleledog.games.core ;

import com.ukuleledog.games.core.AnimatedObject;
import haxe.Timer;
import flash.events.Event;
import openfl.display.Bitmap;
import openfl.display.BitmapData;

/**
 * ...
 * @author Matt
 */
class Ennemy extends AnimatedObject
{
	private var health:Int = 1;
	private var untouchable:Bool = false;
	
	//private var speed:Int = 5;
	private var roaming:Bool = false;
	private var roamingDistance:Int;
	private var roamingMaxLeft:Float;
	private var roamingMaxRight:Float;
	private var roamingDirection:String = 'right';
	
	public function new( imageData:BitmapData = null ) 
	{
		super();
		speed = 5;

		if ( imageData != null )
		{
			var imageBmp:Bitmap = new Bitmap( imageData );
			this.addChild( imageBmp );
		}
		
		// debug
		//this.graphics.lineStyle( 1, 0xFF0000 );
		//this.graphics.drawRect( 0, 0, this.width, this.height);
	}
	
	public function setRoaming( block:UInt, _direction:String = 'right' )
	{
		roaming = true;
		roamingDistance = 64 * block;
		roamingMaxLeft = this.x - roamingDistance;
		roamingMaxRight = this.x + roamingDistance;
		
		roamingDirection = _direction;
		
	}
		
	public function roam()
	{
		if ( roaming == true )
		{
			
			if ( roamingDirection == 'right' && this.x <= roamingMaxRight )
			{
				this.x += speed;
				
				if ( this.x >= roamingMaxRight )
				{
					this.x = roamingMaxRight;
					roamingDirection = 'left';
				}
			}
			else
			{
				this.x -= speed;
				
				if ( this.x <= roamingMaxLeft )
				{
					this.x = roamingMaxLeft;
					roamingDirection = 'right';
				}
			}
			
		}
	}
	
	public function getHealth() : Int
	{
		return health;
	}
	
	public function setHealth( health:Int )
	{
		this.health = health;
	}
	
	public function isTouchable() : Bool
	{
		return !untouchable;
	}
	
	public function decreaseHealth()
	{
		--health;
		
		untouchable = true;
		addEventListener( Event.ENTER_FRAME, flash );
		
		Timer.delay( function() {
			untouchable = false;
			removeEventListener( Event.ENTER_FRAME, flash );
			alpha = 1;
		}, 2000 );
		
	}
	
	private function flash( e:Event )
	{
		if ( alpha == 1 )
			alpha = 0.6;
		else
			alpha = 1;
	}
	
}