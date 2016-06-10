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
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.Sprite;
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
	private var hole:LongBlock;
	
	private var spectre:Bitmap;
	private var batman:Bitmap;
	private var endText:Bitmap;
	
	public function new() 
	{
		super( Assets.getBitmapData('img/texts/level5.png') );
		activateFighting();
		
		spectre = new Bitmap( Assets.getBitmapData('img/spectre.png') );
		spectre.alpha = 0.1;
		spectre.x = 128;
		addChild( spectre );
		
		batman = new Bitmap( Assets.getBitmapData('img/batman.png') );
		batman.alpha = 0.1;
		batman.x = 1024;
		addChild( batman );
		
		floor1 = new LongBlock( 20, 'floor-cave-burning' );
		addElement( floor1, 7 );
				
		orc1 = new Orc();
		addEnnemy( orc1, 6, 4 );
		orc1.setRoaming(1);
		
		orc2 = new Orc();
		addEnnemy( orc2, 6, 7 );
		orc2.setRoaming(1, "left");
		
		block1 = new Block('floor-cave' );
		addElement( block1, 6, 12);
		
		orc3 = new Orc();
		addEnnemy( orc3, 5, 12);
		
		block2 = new Block('floor-cave' );
		addElement( block2, 6, 18);
		
		hole = new LongBlock( 4, 'hole-hot');
		hole.x = 20 * 64;
		hole.y = 7 * 64;
		addChild( hole );
		
		orc4 = new Orc();
		addEnnemy( orc4, 5, 18);
		orc4.setHealth(3);
		
		floor2 = new LongBlock( 20, 'floor-cave-burning'  );
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
		
		endText = new Bitmap( Assets.getBitmapData('img/texts/end.png') );
		endText.alpha = 0;
		
	}
	
	override public function manageEvent( _gameEvent:GameEvent )
	{

		if ( _gameEvent.getName() == 'pan' )
		{
			playing = false;
			
			Actuate.tween( hero, 0.8, { 'x': 1216, 'y': 384 } ).ease( Linear.easeNone).onComplete( function() {
								
				Actuate.tween( this, 5, { 'x': 0 - (floor2.x - 64) } ).ease( Linear.easeNone).onComplete( function() {
					
					Actuate.tween( boss, 2, { 'x': floor2.x } ).ease( Linear.easeNone ).onComplete( function() {
						
						Assets.getSound('snd/scream.mp3').play();
						
						boss.setAnimation( 'shout' );
						
						Actuate.tween( boss, 5, { 'x': 2240 } ).ease( Linear.easeNone ).delay( 3 ).onComplete( function() {
						
							boss.setAnimation( 'idle' );
							
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
			
			stage.addChild( endText );
			
			Actuate.tween( endText, 1, { 'alpha': 1 } ).ease( Linear.easeNone ).onComplete( function() {
				
				this.alpha = 0;
				
				Assets.getSound('snd/victory.mp3').play();
				
				Actuate.tween( endText, 1, { 'alpha': 0 } ).ease( Linear.easeNone ).onComplete( function() {
					dispatchEvent( new Event( Event.CLOSE ) );
				}).delay(10);
				
			});
			
		}
		
	}
	
}