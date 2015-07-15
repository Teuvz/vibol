package com.ukuleledog.games.core;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.events.Event;
import openfl.events.TimerEvent;
import openfl.geom.Matrix;
import openfl.geom.Point;
import openfl.geom.Rectangle;
import openfl.utils.Timer;
import openfl.events.Event;
import openfl.Assets;

/**
 * ...
 * @author Matt
 */
class AnimatedObject extends GameObject
{
	
	private var animationTimer:Timer;
	public var currentAnimation:String;
	private var currentFrame:UInt = 0;
	private var animationPositionsX:Map<String,UInt>;
	private var animationPositionsY:Map<String,UInt>;
	private var animationLengths:Map<String,UInt>;
	private var animationHeights:Map<String,UInt>;
	private var animationWidths:Map<String,UInt>;
	private var animationSpeeds:Map<String,Float>;
	private var animationLooping:Map<String,Bool>;
	
	private var currentAnimationX:UInt = 0;
	private var currentAnimationY:UInt = 0;
	private var currentAnimationLength:UInt = 0;
	private var currentAnimationHeight:UInt = 0;
	private var currentAnimationWidth:UInt = 0;
	private var currentAnimationSpeed:Float = 0;
	private var currentAnimationLoop:Bool = true;
	
	public function new() 
	{
		super();
		animationHeights = new Map();
		animationLengths = new Map();
		animationPositionsX = new Map();
		animationPositionsY = new Map();
		animationWidths = new Map();
		animationSpeeds = new Map();
		animationLooping = new Map();
		
		addEventListener(Event.REMOVED_FROM_STAGE, kill);
		
	}
	
	public function setAnimation( name:String )
	{
		if ( name == currentAnimation )
		return;
		
		if ( animationTimer != null )
		{
			animationTimer.removeEventListener( TimerEvent.TIMER, animationLoop );
			animationTimer = null;
		}
			
		currentAnimation = name;
		currentFrame = 0;
		currentAnimationX = animationPositionsX.get(name);
		currentAnimationY = animationPositionsY.get(name);
		currentAnimationLength = animationLengths.get(name);
		currentAnimationHeight = animationHeights.get(name);
		currentAnimationWidth = animationWidths.get(name);
		currentAnimationSpeed = animationSpeeds.get(name);
		currentAnimationLoop = animationLooping.get(name);
		
		if ( currentAnimationLength > 1 )
		{
		
			animationTimer = new Timer(currentAnimationSpeed);
			animationTimer.addEventListener( TimerEvent.TIMER, animationLoop );
			animationTimer.start();
		
		}
		
		animationLoop();
	}
	
	public function createAnimation( name:String, startX:UInt, startY:UInt,  length:UInt, height:UInt, width: UInt, speed:Float = 1, looping:Bool = true )
	{
		animationLengths.set(name, length);
		animationHeights.set(name, height);
		animationWidths.set(name, width);
		animationPositionsX.set(name, startX);
		animationPositionsY.set(name, startY);
		animationSpeeds.set(name, speed * 1000);
		animationLooping.set(name, looping);
	}
	
	public function animate( name:String = 'idle' )
	{
		setAnimation(name);
	}
	
	private function animationLoop( e:Event=null )
	{		
		this.graphics.clear();
					
		var tempBmd:BitmapData = new BitmapData(currentAnimationWidth, currentAnimationHeight, true );
		tempBmd.copyPixels(bmd, new Rectangle(currentAnimationX + (currentFrame*currentAnimationWidth), currentAnimationY, currentAnimationWidth, currentAnimationHeight), new Point(0, 0) );
		
		//this.bitmapData = tempBmd;
		
		this.graphics.beginBitmapFill(tempBmd);
		this.graphics.drawRect(0, 0, currentAnimationWidth, currentAnimationHeight);
		this.graphics.endFill();
				
		if ( currentFrame+1 < currentAnimationLength )
			currentFrame++;
		else if ( currentAnimationLoop )
			currentFrame = 0;
		else
		{
			animationTimer.removeEventListener( TimerEvent.TIMER, animationLoop );
		}
	}
		
	private function kill( e:Event )
	{
		removeEventListener(Event.REMOVED_FROM_STAGE, kill);
		
		if ( currentAnimationLength >= 1 && animationTimer != null )
		{
			animationTimer.removeEventListener( TimerEvent.TIMER, animationLoop );
			animationTimer.stop();
			animationTimer = null;
		}
	}
	
}