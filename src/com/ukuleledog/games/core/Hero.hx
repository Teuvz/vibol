package com.ukuleledog.games.core ;

import com.ukuleledog.games.core.AnimatedObject;
import openfl.display.Sprite;

/**
 * ...
 * @author Matt
 */
class Hero extends AnimatedObject
{

	private var speed:Int = 5;
	
	/*private var leftTopCorner:Sprite;
	private var leftBottomCorner:Sprite;
	private var rightTopCorner:Sprite;
	private var rightBottomCorner:Sprite;*/
	
	private var topBumper:Sprite;
	private var bottomBumpter:Sprite;
	private var leftBumper:Sprite;
	private var rightBumper:Sprite;
	
	public function new() 
	{
		super();
		
		topBumper = new Sprite();
		topBumper.graphics.beginFill( 0xFF0000 );
		topBumper.graphics.drawRect( 0, 0, 54, 10 );
		topBumper.graphics.endFill();
		topBumper.x = 5;
		addChild(topBumper);
		
		bottomBumpter = new Sprite();
		bottomBumpter.graphics.beginFill( 0xFF0000 );
		bottomBumpter.graphics.drawRect( 0, 0, 54, 10 );
		bottomBumpter.graphics.endFill();
		bottomBumpter.x = 5;
		bottomBumpter.y = 54;
		addChild(bottomBumpter);
		
		leftBumper = new Sprite();
		leftBumper.graphics.beginFill( 0xFF0000 );
		leftBumper.graphics.drawRect( 0, 0, 10, 54 );
		leftBumper.graphics.endFill();
		leftBumper.x = 0;
		leftBumper.y = 5;
		addChild(leftBumper);
		
		rightBumper = new Sprite();
		rightBumper.graphics.beginFill( 0xFF0000 );
		rightBumper.graphics.drawRect( 0, 0, 10, 54 );
		rightBumper.graphics.endFill();
		rightBumper.x = 54;
		rightBumper.y = 5;
		addChild(rightBumper);
		
		/*leftTopCorner = new Sprite();
		leftTopCorner.graphics.beginFill( 0xFF0000 );
		leftTopCorner.graphics.drawRect( 0, 0, 10, 10 );
		leftTopCorner.graphics.endFill();
		
		leftBottomCorner = new Sprite();
		leftBottomCorner.graphics.beginFill( 0xFF0000 );
		leftBottomCorner.graphics.drawRect( 0, 0, 10, 10 );
		leftBottomCorner.graphics.endFill();
		leftBottomCorner.y = 54;
		
		rightTopCorner = new Sprite();
		rightTopCorner.graphics.beginFill( 0xFF0000 );
		rightTopCorner.graphics.drawRect( 0, 0, 10, 10 );
		rightTopCorner.graphics.endFill();
		rightTopCorner.x = 54;
		
		rightBottomCorner = new Sprite();
		rightBottomCorner.graphics.beginFill( 0xFF0000 );
		rightBottomCorner.graphics.drawRect( 0, 0, 10, 10 );
		rightBottomCorner.graphics.endFill();
		rightBottomCorner.x = 54;
		rightBottomCorner.y = 54;
		
		addChild( leftTopCorner );
		addChild( leftBottomCorner );
		addChild( rightTopCorner );
		addChild( rightBottomCorner );*/
	}
	
	public function setSpeed( _speed:Int )
	{
		speed = _speed;
	}
	
	public function getSpeed() : Int
	{
		return speed;
	}
	
	public function getTopBumper() : Sprite
	{
		return topBumper;
	}
	
	public function getBottomBumper() : Sprite
	{
		return bottomBumpter;
	}
	
	public function getLeftBumper() : Sprite
	{
		return leftBumper;
	}
	
	public function getRightBumper() : Sprite
	{
		return rightBumper;
	}
	
	/*public function getTopLeftCorner() : Sprite
	{
		return leftTopCorner;
	}
	
	public function getTopRightCorner() : Sprite
	{
		return rightTopCorner;
	}
	
	public function getBottomLeftCorner() : Sprite
	{
		return leftBottomCorner;
	}
	
	public function getBottomRightCorner() : Sprite
	{
		return rightBottomCorner;
	}*/
	
}