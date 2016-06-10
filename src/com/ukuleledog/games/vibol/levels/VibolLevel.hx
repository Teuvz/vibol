package com.ukuleledog.games.vibol.levels;

import com.ukuleledog.games.core.Level;
import com.ukuleledog.games.vibol.elements.Sword;
import com.ukuleledog.games.vibol.elements.Teleport;
import haxe.Timer;
import motion.Actuate;
import openfl.Assets;
import motion.easing.Bounce;
import motion.easing.Linear;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.errors.Error;
import openfl.events.Event;
import openfl.media.SoundChannel;

/**
 * ...
 * @author Matt
 */
class VibolLevel extends Level
{

	private var startScreen:Bitmap;
	private var endTeleport:Teleport;
	private var fallingSpeed:Int = 1;
	private var minFallingSpeed:Int = 1;
	private var maxFallingSpeed:Int = 5;
	
	private var music:SoundChannel;
	
	public function new( _startScreen:BitmapData = null ) 
	{
		super();
		playing = false;
		
		if ( _startScreen != null )
		{
			startScreen = new Bitmap( _startScreen );
			addEventListener( Event.ADDED_TO_STAGE, startScreenDisplay );
		}
		else
		{
			init();
			playing = true;
		}
		
	}
	
	private function startScreenDisplay( e )
	{
		removeEventListener( Event.ADDED_TO_STAGE, startScreenDisplay );
		
		stage.addChild( startScreen );
		
		Actuate.tween( startScreen, 0.5, { alpha: 0 }, true ).delay(10).onComplete( function() {
			init();
			stage.removeChild( startScreen );
			playing = true;
		});
		
	}
	
	public function activateFighting()
	{
		fightRoom = true;
		
		weapon = new Sword();
		
	}
	
	override public function loop( e:Event )
	{
		
		if ( playing == false )
			return;
		
		onGround = false;
				
		for ( element in elements )
		{
			if ( element.isColider() && element.mustTestCollision(hero.x, hero.y)  )
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
					hero.y = element.y - hero.height;
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
			if ( ennemy.mustTestCollision(hero.x, hero.y) && ennemy.hitTestObject( hero )  )
			{
				
				Assets.getSound('snd/die.mp3').play();
				
				hero.x = startingPosition.x * 64;
				hero.y = startingPosition.y * 64;
				
				Actuate.tween( this, 1, { x: 0 } ).ease( Linear.easeNone );
			}
			
			if ( hitting && ennemy.mustTestCollision(hero.x, hero.y) && ennemy.isTouchable() == true && ennemy.hitTestObject( weapon ) )
			{
				ennemy.decreaseHealth();
				
				if ( ennemy.getHealth() <= 0 )
				{
					
					Assets.getSound('snd/kill.mp3').play();
					
					removeChild( ennemy );
					ennemies.remove( ennemy );
					ennemy = null;
				}
			}
			
			if ( ennemy != null )
				ennemy.roam();
		}
	
		for ( collectible in collectibles )
		{
			if ( collectible.mustTestCollision(hero.x, hero.y) && collectible.hitTestObject( hero ) )
			{
				removeChild( collectible );
				collectibles.remove( collectible );
				collectible = null;
			}
		}
		
		for ( gameEvent in gameEvents )
		{
			if ( gameEvent.hitTestObject( hero ) && gameEvent.mustTestCollision(hero.x, hero.y) )
			{
				removeChild( gameEvent );
				gameEvents.remove( gameEvent );
				manageEvent( gameEvent );
			}
		}
	
		if ( endTeleport != null && endTeleport.mustTestCollision(hero.x, hero.y) && endTeleport.hitTestObject( hero ) )
		{
			dispatchEvent( new Event( Event.COMPLETE ) );
		}
		
		positionWeapon();
	}
	
	override public function jump()
	{				
		if ( playing && !jumping && onGround )
		{
			jumping = true;
			Actuate.tween( hero, 1, { y: hero.y - jumpPower } ).onComplete( endJump );
			Assets.getSound('snd/jump.mp3').play();
		}
	}
	
	private function endJump()
	{
		jumping = false;
	}
	
	override public function action()
	{
		if ( fightRoom && canHit() && playing )
		{
			animateWeapon();			
		}
	}
	
	override public function animateWeapon()
	{
		hitting = true;
		positionWeapon();
		addChild( weapon );
		var endPosition:Float = hero.x + 64;
		var startPosition: Float = hero.x + 16;
		Assets.getSound('snd/sword.mp3').play();
		Actuate.tween( weapon, 0.1, { alpha: 1, x: endPosition } ).ease( Bounce.easeOut ).onComplete( function() {
			Actuate.tween( weapon, 0.1, { x: startPosition, alpha: 0 } ).ease( Bounce.easeOut ).onComplete( function() {
				hitting = false;
				removeChild( weapon );
			});
		});
	}
	
	override public function start()
	{
		setCamera();
		
		//music = Assets.getSound( 'snd/Skye_Cuillin_converted.mp3' ).play();
		
	}
	
}