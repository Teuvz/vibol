package com.ukuleledog.games.core;

import openfl.display.Sprite;
import motion.Actuate;

/**
 * ...
 * @author Matt
 */
class StateManagerCore extends Sprite
{

	private var currentState:State;
	
	public function new() 
	{
		super();
	}
	
	public function setState( state:State )
	{
		currentState = state;
		currentState.alpha = 0;
		addChild( currentState );
		Actuate.tween( currentState, 1, {alpha:1} );
	}
	
	public function removeState()
	{
		Actuate.tween( currentState, 1, { alpha:1 } ).onComplete(function() {
			removeChild( currentState );
			currentState = null;
		});
	}
	
}