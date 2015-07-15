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
	
	private var leftTopCorner:Sprite;
	private var leftBottomCorner:Sprite;
	private var rightTopCorner:Sprite;
	private var rightBottomCorner:Sprite;
	
	public function new() 
	{
		super();
		
		leftTopCorner = new Sprite();
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
		addChild( rightBottomCorner );
	}
	
	public function setSpeed( _speed:Int )
	{
		speed = _speed;
	}
	
	public function getSpeed() : Int
	{
		return speed;
	}
	
	public function getTopLeftCorner() : Sprite
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
	}
	
}