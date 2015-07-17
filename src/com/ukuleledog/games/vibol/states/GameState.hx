package com.ukuleledog.games.vibol.states;

import com.ukuleledog.games.core.State;
import com.ukuleledog.games.core.Hero;
import com.ukuleledog.games.core.Level;
import com.ukuleledog.games.vibol.elements.Vibol;
import com.ukuleledog.games.vibol.levels.Level1;
import com.ukuleledog.games.vibol.levels.Level2;
import motion.Actuate;
import openfl.Assets;
import openfl.display.Bitmap;
import openfl.errors.Error;
import openfl.events.Event;
import openfl.events.KeyboardEvent;
import openfl.ui.Keyboard;

/**
 * ...
 * @author Matt
 */
class GameState extends State
{

	private var keysPressed:Array<Bool>;
	private var levelNb:Int = 1;
	private var level:Level;
	
	public function new() 
	{
		super();
		addEventListener( Event.ADDED_TO_STAGE, init );
		
		keysPressed = new Array<Bool>();
		level = new Level1();
	}
	
	private function init( e:Event )
	{
		removeEventListener( Event.ADDED_TO_STAGE, init );
		
		level.addEventListener( Event.COMPLETE, changeLevel );
		addChild( level );

		stage.addEventListener( KeyboardEvent.KEY_DOWN, keyDownHandler );
		stage.addEventListener( KeyboardEvent.KEY_UP, keyUpHandler );
		addEventListener( Event.ENTER_FRAME, loop );
	}
	
	private function changeLevel( e:Event )
	{
		removeEventListener( Event.ENTER_FRAME, loop );
		level.removeEventListener( Event.COMPLETE, changeLevel );
		
		Actuate.tween( this, 1, { alpha:0 } ).onComplete( function() {
			level = null;
			levelNb++;
			
			switch( levelNb )
			{
				case 2:
					level = new Level2();
			}
			
			addChild( level );
			
			Actuate.tween( this, 1, { alpha:1 } ).onComplete( function() {
				addEventListener( Event.ENTER_FRAME, loop );
				level.addEventListener( Event.COMPLETE, changeLevel );
			});
			
		});
		
	}
	
	private function loop( e:Event )
	{
		
		if ( keysPressed[Keyboard.RIGHT] == true )
		{
			level.moveRight();
		}
		else if ( keysPressed[Keyboard.LEFT] == true )
		{
			level.moveLeft();
		}
		
		if ( keysPressed[Keyboard.SPACE] == true )
		{
			level.jump();
		}
		
		level.loop(e);
		
	}
	
	private function keyDownHandler( e:KeyboardEvent )
	{
		keysPressed[e.keyCode] = true;
	}
	
	private function keyUpHandler( e:KeyboardEvent )
	{
		keysPressed[e.keyCode] = false;
	}
	
}