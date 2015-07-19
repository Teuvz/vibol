package com.ukuleledog.games.vibol.levels;

import com.ukuleledog.games.core.Level;
import com.ukuleledog.games.vibol.elements.Teleport;
import motion.Actuate;
import motion.easing.Linear;
import openfl.errors.Error;
import openfl.events.Event;

/**
 * ...
 * @author Matt
 */
class VibolLevel extends Level
{

	private var fightRoom:Bool = false;
	private var endTeleport:Teleport;
	private var fallingSpeed:Int = 1;
	private var minFallingSpeed:Int = 1;
	private var maxFallingSpeed:Int = 5;
	
	public function new() 
	{
		super();
		
	}
	
	public function activateFighting()
	{
		fightRoom = true;
	}
	
	override public function loop( e:Event )
	{
		
		if ( playing == false )
			return;
		
		onGround = false;
				
		for ( element in elements )
		{
			if ( element.isColider() )
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
			hero.x = startingPosition.x * 64;
			hero.y = startingPosition.y * 64;
			
			Actuate.tween( this, 1, { x: 0 } ).ease( Linear.easeNone );
		}
	
		for ( ennemy in ennemies )
		{
			if ( ennemy.hitTestObject( hero ) )
			{
				hero.x = startingPosition.x * 64;
				hero.y = startingPosition.y * 64;
				
				Actuate.tween( this, 1, { x: 0 } ).ease( Linear.easeNone );
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
		
		for ( gameEvent in gameEvents )
		{
			if ( gameEvent.hitTestObject( hero ) )
			{
				removeChild( gameEvent );
				gameEvents.remove( gameEvent );
				manageEvent( gameEvent );
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
			Actuate.tween( hero, 1, { y: hero.y - jumpPower } ).onComplete( endJump );
		}
	}
	
	private function endJump()
	{
		jumping = false;
	}
	
	override public function action()
	{
		if ( fightRoom )
		{
			trace( 'hello' );
		}
	}
	
}