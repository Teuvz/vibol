package com.ukuleledog.games.core ;

import com.ukuleledog.games.core.AnimatedObject;

/**
 * ...
 * @author Matt
 */
class Ennemy extends AnimatedObject
{

	private var speed:Int = 5;
	private var roaming:Bool = false;
	private var roamingDistance:Int;
	private var roamingMaxLeft:Float;
	private var roamingMaxRight:Float;
	private var roamingDirection:String = 'right';
	
	public function new() 
	{
		super();
		
	}
	
	public function setRoaming( block:UInt )
	{
		roaming = true;
		roamingDistance = 64 * block;
		roamingMaxLeft = this.x - roamingDistance;
		roamingMaxRight = this.x + roamingDistance;
		
		
		
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
	
}