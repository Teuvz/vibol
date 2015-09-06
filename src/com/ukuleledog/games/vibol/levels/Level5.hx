package com.ukuleledog.games.vibol.levels;
import com.ukuleledog.games.core.GameObject;
import com.ukuleledog.games.core.Hero;
import com.ukuleledog.games.core.Level;
import com.ukuleledog.games.vibol.elements.Block;
import com.ukuleledog.games.vibol.elements.Coin;
import com.ukuleledog.games.vibol.elements.GameEvent;
import com.ukuleledog.games.vibol.elements.LongBlock;
import com.ukuleledog.games.vibol.elements.Teleport;
import com.ukuleledog.games.vibol.elements.Vibol;
import com.ukuleledog.games.vibol.enemies.Boss;
import com.ukuleledog.games.vibol.enemies.Frog;
import com.ukuleledog.games.vibol.enemies.Orc;
import com.ukuleledog.games.vibol.enemies.Schroom;
import motion.Actuate;
import motion.easing.Linear;
import openfl.Assets;
import openfl.display.BitmapData;
import openfl.events.Event;
import openfl.geom.Point;

/**
 * ...
 * @author Matt
 */
class Level5 extends VibolLevel
{
	
	private var floor1:LongBlock;
	private var orc1:Orc;
	private var orc2:Orc;
	private var block1:Block;
	private var orc3:Orc;
	private var block2:Block;
	private var orc4:Orc;
	private var floor2:LongBlock;
	private var event1:GameEvent;
	private var orc5:Orc;
	private var boss:Boss;
	private var event2:GameEvent;
	
	public function new() 
	{
		super();
		activateFighting();
		
		floor1 = new LongBlock( 20 );
		addElement( floor1, 7 );
				
		orc1 = new Orc();
		addEnnemy( orc1, 6, 4 );
		orc1.setRoaming(1);
		
		orc2 = new Orc();
		addEnnemy( orc2, 6, 7 );
		orc2.setRoaming(1, "left");
		
		block1 = new Block();
		addElement( block1, 6, 12);
		
		orc3 = new Orc();
		addEnnemy( orc3, 5, 12);
		
		block2 = new Block();
		addElement( block2, 6, 18);
		
		orc4 = new Orc();
		addEnnemy( orc4, 5, 18);
		orc4.setHealth(3);
		
		floor2 = new LongBlock( 20 );
		addElement( floor2, 7, 24 );
		
		event1 = new GameEvent('pan');
		addGameEvent( event1, 4, 19 );
		
		orc5 = new Orc();
		addEnnemy( orc5, 6, 28);
		orc5.setRoaming(1, "left");
		orc5.setHealth(3);
		
		boss = new Boss();
		addEnnemy( boss, 3, 26 );
		
		event1 = new GameEvent('ending');
		addGameEvent( event1, 5, 40 );
					
		setHero( new Vibol() );
		startingPosition = new Point(1, 6);
		
		var thing:BitmapData = Assets.getBitmapData('img/background5.png');
		this.graphics.beginBitmapFill( thing );
		this.graphics.drawRect( 0, 0, thing.width, 514);
		this.graphics.endFill();
		
		init();
	}
	
	override public function manageEvent( _gameEvent:GameEvent )
	{

		if ( _gameEvent.getName() == 'pan' )
		{
			playing = false;
			
			Actuate.tween( hero, 0.8, { 'x': 1216, 'y': 384 } ).ease( Linear.easeNone).onComplete( function() {
								
				Actuate.tween( this, 5, { 'x': 0 - (floor2.x - 64) } ).ease( Linear.easeNone).onComplete( function() {
					
					Actuate.tween( boss, 2, { 'x': floor2.x } ).ease( Linear.easeNone ).onComplete( function() {
						
						trace('animate');
						
						Actuate.tween( boss, 5, { 'x': 2240 } ).ease( Linear.easeNone ).delay( 3 ).onComplete( function() {
							Actuate.tween( this, 5, { 'x': -1005.9 } ).ease( Linear.easeNone ).onComplete( function() {
								boss.setRoaming( 1 );
								endJump();
								playing = true;
							});
						});
						
					});
					
				});
			});
			
		}
		else
		{
			playing = false;
			
			trace('the end');
		}
		
	}
	
}