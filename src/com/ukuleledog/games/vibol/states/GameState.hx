package com.ukuleledog.games.vibol.states;

import com.ukuleledog.games.core.State;
import com.ukuleledog.games.core.Hero;
import com.ukuleledog.games.core.Level;
import com.ukuleledog.games.vibol.elements.Vibol;
import com.ukuleledog.games.vibol.levels.Level1;
import openfl.Assets;
import openfl.display.Bitmap;
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
		
		addChild( level );

		stage.addEventListener( KeyboardEvent.KEY_DOWN, keyDownHandler );
		stage.addEventListener( KeyboardEvent.KEY_UP, keyUpHandler );
		addEventListener( Event.ENTER_FRAME, loop );
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