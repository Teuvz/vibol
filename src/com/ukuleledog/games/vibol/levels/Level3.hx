package com.ukuleledog.games.vibol.levels;
import com.ukuleledog.games.core.GameObject;
import com.ukuleledog.games.core.Hero;
import com.ukuleledog.games.core.Level;
import com.ukuleledog.games.vibol.elements.Block;
import com.ukuleledog.games.vibol.elements.Coin;
import com.ukuleledog.games.vibol.elements.GameEvent;
import com.ukuleledog.games.vibol.elements.LongBlock;
import com.ukuleledog.games.vibol.elements.Roc;
import com.ukuleledog.games.vibol.elements.Teleport;
import com.ukuleledog.games.vibol.elements.Vibol;
import com.ukuleledog.games.vibol.elements.Water;
import com.ukuleledog.games.vibol.enemies.Frog;
import com.ukuleledog.games.vibol.enemies.Schroom;
import motion.Actuate;
import motion.easing.Linear;
import openfl.Assets;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.events.Event;
import openfl.geom.Point;

/**
 * ...
 * @author Matt
 */
class Level3 extends VibolLevel
{

	private var floor1:LongBlock;
	private var floor2:LongBlock;
	private var event:GameEvent;
	private var event2:GameEvent;
	private var roc:Roc;
	
	public function new() 
	{
		super( Assets.getBitmapData('img/texts/level3.png') );
			
		floor1 = new LongBlock( 8, 'floor-cave' );
		addElement( floor1, 7 );
		
		floor2 = new LongBlock( 6, 'floor-cave' );
		addElement( floor2, 6, 2 );
		
		event = new GameEvent();
		addGameEvent( event, 4, 3 );
		
		roc = new Roc();
		addElement( roc, 5, 4 );
					
		setHero( new Vibol() );
		startingPosition = new Point(0, 6);
				
		var thing:BitmapData = Assets.getBitmapData('img/background3.png');
		this.graphics.beginBitmapFill( thing );
		this.graphics.drawRect( 0, 0, thing.width, 514);
		this.graphics.endFill();
		
	}
	
	//x = 224
	override public function manageEvent( _gameEvent:GameEvent )
	{

		playing = false;
		Actuate.tween( hero, 1, { x: 3.5 * 64, y: 5 * 64 } ).onComplete( function() {
			
			Assets.getSound('snd/victory.mp3').play();
			
			Actuate.tween( this, 3, { scaleX: 1.5, scaleY: 1.5, x: -128, y: -192 } ).ease( Linear.easeNone ).onComplete( function() {
				
				roc.setAnimation('empty');
				hero.setAnimation('sword');
				
				Actuate.tween( this, 3, { scaleX: 1.5, scaleY: 1.5, x: -128, y: -192 } ).ease( Linear.easeNone ).onComplete( function() {

					hero.setAnimation('sword2');
					
					Actuate.tween( this, 2, { scaleX: 1, scaleY: 1, x:0, y:0 } ).ease( Linear.easeNone ).onComplete( function() {					
						
						hero.setAnimation('idle');
						
						Actuate.tween( hero, 3, { x: 64 * 7 } ).ease( Linear.easeNone ).onComplete( function() {							
							Actuate.tween( this, 1, { alpha: 0 } ).onComplete( function() {
								dispatchEvent( new Event( Event.COMPLETE ) );
							});
						});
					}).delay(2);
				
				}).delay(3);
				
			});
		});
		
	}
	
}