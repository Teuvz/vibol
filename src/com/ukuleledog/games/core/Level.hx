package com.ukuleledog.games.core;
import com.ukuleledog.games.core.Hero;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.geom.Point;

/**
 * ...
 * @author Matt
 */
class Level extends Sprite
{

	private var elements:Array<GameObject>;
	private var hero:Hero;
	private var startingPosition:Point;
	
	private var onGround:Bool = false;
	private var jumping:Bool = false;
	
	public function new() 
	{
		super();
		elements = new Array<GameObject>();
	}
	
	public function init()
	{
		hero.x = startingPosition.x;
		hero.y = startingPosition.y;
		addChild( hero );
	}
	
	public function setHero( _hero:Hero )
	{
		hero = _hero;
	}
	
	public function addElement( _element:GameObject )
	{
		elements.push( _element );
		addChild( _element );
	}
	
	private function setCamera()
	{
		if ( hero.x > ( (stage.stageWidth / 2) - (hero.width / 2) ) )
		{
			this.x = 0 - ( hero.x - ( (stage.stageWidth / 2) - (hero.width / 2) ) );
		}
		
		if ( this.x + this.width < stage.stageWidth )
		{
			this.x = 0 - ( this.width - stage.stageWidth );
		}
	}
	
	public function moveRight()
	{
		if ( hero.x + hero.width < this.width - hero.getSpeed() )
			hero.x += hero.getSpeed();
			
		if ( (hero.x + hero.width) > this.width )
			hero.x = this.width - hero.width;
			
		setCamera();
	}
	
	public function moveLeft()
	{
		if ( hero.x > 0 + hero.getSpeed() )
			hero.x -= hero.getSpeed();
			
		if ( hero.x < 0 )
			hero.x == 0;
			
		setCamera();
	}
	
	public function moveUp()
	{
		hero.y -= hero.getSpeed();
	}
	
	public function moveDown()
	{
		hero.y += hero.getSpeed();
	}
	
	public function jump()
	{
		
	}
	
	public function action()
	{
		
	}
	
	public function loop( e:Event )
	{
		
	}
	
}