package com.ukuleledog.games.core;
import com.ukuleledog.games.core.Hero;
import com.ukuleledog.games.vibol.elements.GameEvent;
import motion.Actuate;
import motion.easing.Bounce;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.filters.BitmapFilterType;
import openfl.geom.Point;

/**
 * ...
 * @author Matt
 */
class Level extends Sprite
{

	private var fightRoom:Bool = false;
	private var playing:Bool = true;
	private var elements:Array<GameObject>;
	private var ennemies:Array<Ennemy>;
	private var collectibles:Array<GameObject>;
	private var movingElements:Array<GameObject>;
	private var gameEvents:Array<GameEvent>;
	private var hero:Hero;
	private var startingPosition:Point;
	
	private var onGround:Bool = false;
	private var jumping:Bool = false;
	private var jumpPower:Int = 100;
	private var jumpPeek:Int = 0;
	private var gravity:Int = 1;
	
	private var hitting:Bool = false;
	private var weapon:Weapon;
	
	public function new() 
	{
		super();
		elements = new Array<GameObject>();
		ennemies = new Array<Ennemy>();
		collectibles = new Array<GameObject>();
		movingElements = new Array<GameObject>();
		gameEvents = new Array<GameEvent>();
	}
	
	public function init()
	{
		hero.x = startingPosition.x * 64;
		hero.y = startingPosition.y * 64;
		addChild( hero );
	}
	
	public function setHero( _hero:Hero )
	{
		hero = _hero;
	}
	
	public function addElement( _element:GameObject, _y:Int = 0, _x:Int = 0 )
	{
		_element.x = 64 * _x;
		_element.y = 64 * _y;
		elements.push( _element );
		addChild( _element );
	}
	
	public function addEnnemy( _ennemy:Ennemy, _y:Int = 0, _x:Int = 0 )
	{
		_ennemy.x = 64 * _x;
		_ennemy.y = 64 * _y;
		ennemies.push( _ennemy );
		addChild( _ennemy );
	}
	
	public function addCollectible( _collectible:GameObject, _y:Int = 0, _x:Int = 0 )
	{
		_collectible.x = 64 * _x;
		_collectible.y = 64 * _y;
		collectibles.push( _collectible );
		addChild( _collectible );
	}
	
	public function addGameEvent( _gameEvent:GameEvent, _y:Int = 0, _x:Int = 0 )
	{
		_gameEvent.x = 64 * _x;
		_gameEvent.y = 64 * _y;
		gameEvents.push( _gameEvent );
		addChild( _gameEvent );
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
		if ( hero.x + hero.width < this.width - hero.getSpeed() && playing )
		{
			hero.x += hero.getSpeed();
		}
			
		if ( (hero.x + hero.width) > this.width )
			hero.x = this.width - hero.width;
			
		setCamera();
	}
	
	public function moveLeft()
	{
		if ( hero.x > 0 && playing )
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
	
	public function canJump() : Bool
	{
		return ( !jumping && onGround );
		
	}
	
	public function canHit() :Bool
	{
		return !hitting;
	}
	
	public function manageEvent( _gameEvent:GameEvent)
	{
		
	}
	
	public function setWeapon( _weapon:Weapon )
	{
		weapon = _weapon;
	}
	
	public function getWeapon() : Weapon
	{
		return weapon;
	}
	
	private function positionWeapon()
	{
		if ( fightRoom && !hitting )
		{
			weapon.x = hero.x + 16;
			weapon.y = hero.y + 16;
		}
	}
	
	public function animateWeapon()
	{
	}
	
	public function start()
	{
	}
	
}