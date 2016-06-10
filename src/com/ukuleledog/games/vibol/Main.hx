package com.ukuleledog.games.vibol;

import com.kircode.debug.FPS_Mem;
import com.ukuleledog.games.core.State;
import com.ukuleledog.games.vibol.states.GameState;
import com.ukuleledog.games.vibol.states.IntroState;
import flash.display.Sprite;
import flash.events.Event;
import flash.Lib;
import motion.Actuate;
import openfl.display.FPS;

/**
 * ...
 * @author Matt
 */

class Main extends Sprite 
{
	var inited:Bool;
	var currentState:State;
	//var fps:FPS_Mem;

	/* ENTRY POINT */
	
	function resize(e) 
	{
		if (!inited) init();
		// else (resize or orientation change)
	}
	
	function init() 
	{
		if (inited) return;
		inited = true;

		// (your code here)
		
		// Stage:
		// stage.stageWidth x stage.stageHeight @ stage.dpiScale
		
		// Assets:
		// nme.Assets.getBitmapData("img/assetname.jpg");
		
		//currentState = new IntroState();
		currentState = new GameState();
		currentState.addEventListener( Event.COMPLETE, startGame );
		addChild( currentState );
		
		//fps = new FPS_Mem( 10, 10, 0xFFFFFF );
		//addChild( fps );
	}
	
	private function startGame( e:Event )
	{
		currentState.removeEventListener( Event.COMPLETE, startGame );
		//removeChild( fps );
		removeChild( currentState );
		currentState = new GameState();
		currentState.alpha = 0;
		addChild( currentState );
		//addChild( fps );
		Actuate.tween( currentState, 0.5, { alpha:1 } );
		currentState.addEventListener( Event.COMPLETE, restartGame );
	}
	
	private function restartGame( e:Event )
	{
		currentState.removeEventListener( Event.COMPLETE, restartGame );
		//removeChild( fps );
		removeChild( currentState );
		currentState = new IntroState();
		currentState.alpha = 0;
		addChild( currentState );
		//addChild( fps );
		Actuate.tween( currentState, 0.5, { alpha:1 } );
		currentState.addEventListener( Event.COMPLETE, startGame );
	}

	/* SETUP */

	public function new() 
	{
		super();	
		addEventListener(Event.ADDED_TO_STAGE, added);
	}

	function added(e) 
	{
		removeEventListener(Event.ADDED_TO_STAGE, added);
		stage.addEventListener(Event.RESIZE, resize);
		#if ios
		haxe.Timer.delay(init, 100); // iOS 6
		#else
		init();
		#end
	}
	
	public static function main() 
	{
		// static entry point
		Lib.current.stage.align = flash.display.StageAlign.TOP_LEFT;
		Lib.current.stage.scaleMode = flash.display.StageScaleMode.NO_SCALE;
		Lib.current.addChild(new Main());
	}
}
