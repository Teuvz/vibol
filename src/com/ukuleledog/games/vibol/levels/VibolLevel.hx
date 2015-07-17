package com.ukuleledog.games.vibol.levels;

import com.ukuleledog.games.core.Level;
import com.ukuleledog.games.vibol.elements.Teleport;
import motion.Actuate;
import openfl.errors.Error;
import openfl.events.Event;

/**
 * ...
 * @author Matt
 */
class VibolLevel extends Level
{

	private var endTeleport:Teleport;
	private var fallingSpeed:Int = 1;
	private var minFallingSpeed:Int = 1;
	private var maxFallingSpeed:Int = 5;
	
	public function new() 
	{
		super();
		
	}
	
	override public function loop( e:Event )
	{
		
		onGround = false;
				
		for ( element in elements )
		{
						
			if ( element.hitTestObject( hero.getLeftBumper() ) )
			{
				hero.x = element.x + element.width;
			}
			else if ( element.hitTestObject( hero.getTopBumper() ) )
			{
				Actuate.stop( hero );
				hero.y = element.y + element.height;
			}
			
			if ( element.hitTestObject( hero.getRightBumper() ) )
			{
				hero.x = element.x - hero.width;
			}
			
			if ( element.hitTestObject( hero.getBottomBumper() ) )
			{
				onGround = true;					
				fallingSpeed = minFallingSpeed;
			}
			
			element.move();
			
		}
	
		if ( !onGround && !jumping )
		{
			hero.y += fallingSpeed;
			
			if ( fallingSpeed < maxFallingSpeed )
				fallingSpeed += gravity;
		
		}
	
		if ( hero.y > stage.stageHeight )
		{
			trace( startingPosition );
			hero.x = startingPosition.x;
			hero.y = startingPosition.y;
			this.x = 0;
		}
	
		for ( ennemy in ennemies )
		{
			if ( ennemy.hitTestObject( hero ) )
			{
				hero.x = startingPosition.x;
				hero.y = startingPosition.y;
				this.x = 0;	
			}
			ennemy.roam();
		}
	
		for ( collectible in collectibles )
		{
			if ( collectible.hitTestObject( hero ) )
			{
				removeChild( collectible );
				collectibles.remove( collectible );
				collectible = null;
			}
		}
	
		if ( endTeleport != null && endTeleport.hitTestObject( hero ) )
		{
			dispatchEvent( new Event( Event.COMPLETE ) );
		}
		
	}
	
	override public function jump()
	{				
		if ( !jumping && onGround )
		{
			jumping = true;
			Actuate.tween( hero, 1, { y: hero.y - jumpPower } ).onComplete( function() { jumping = false; } );
		}
	}
	
}