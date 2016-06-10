package com.ukuleledog.games.vibol.levels;
import com.ukuleledog.games.core.GameObject;
import com.ukuleledog.games.core.Hero;
import com.ukuleledog.games.core.Level;
import com.ukuleledog.games.vibol.elements.Block;
import com.ukuleledog.games.vibol.elements.Coin;
import com.ukuleledog.games.vibol.elements.LongBlock;
import com.ukuleledog.games.vibol.elements.Teleport;
import com.ukuleledog.games.vibol.elements.Vibol;
import com.ukuleledog.games.vibol.enemies.Frog;
import com.ukuleledog.games.vibol.enemies.Schroom;
import motion.Actuate;
import openfl.Assets;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.events.Event;
import openfl.geom.Point;

/**
 * ...
 * @author Matt
 */
class Level2 extends VibolLevel
{

	private var floor1:LongBlock;
	private var frog1:Frog;
	private var frog2:Frog;
	private var block1:Block;
	private var block2:Block;
	private var block3:Block;
	private var block4:Block;
	private var block5:Block;
	private var block6:Block;
	private var block7:Block;
	private var block8:Block;
	private var floor2:LongBlock;
	private var frog3:Frog;
	private var frog4:Frog;
	private var hole:LongBlock;
	private var statue:Bitmap;
	
	public function new() 
	{
		super( Assets.getBitmapData('img/texts/level2.png') );
		
		statue = new Bitmap( Assets.getBitmapData('img/cavedoor.png') );
		statue.x = 2830;
		addChild( statue );
		
		floor1 = new LongBlock( 20, 'floor-cave' );
		addElement( floor1, 7 );
		
		hole = new LongBlock( 6, 'hole' );
		hole.x = 20 * 64;
		hole.y = 7 * 64;
		addChild( hole );
		
		frog1 = new Frog();
		addEnnemy( frog1, 6, 5 );
		frog1.setRoaming( 1 );
		
		frog2 = new Frog();
		addEnnemy( frog2, 6, 10 );
		frog2.setRoaming( 1, 'left' );
				
		block2 = new Block( 'block-cave' );
		addElement( block2, 9, 23 );
		block2.setMoving( 5, 23, 3 );
			
		floor2 = new LongBlock( 25, 'floor-cave' );
		addElement( floor2, 7, 26 );
		
		frog3 = new Frog();
		addEnnemy( frog3, 6, 29 );
		frog3.setRoaming( 1 );
		
		frog4 = new Frog();
		addEnnemy( frog4, 6, 34 );
		frog4.setRoaming( 1, 'left' );
		
		frog4 = new Frog();
		addEnnemy( frog4, 6, 39 );
		frog4.setRoaming( 1 );
		
		endTeleport = new Teleport();
		endTeleport.y = 64 * 5;
		endTeleport.x = 64 * 48;
		addChild( endTeleport );
					
		setHero( new Vibol() );
		startingPosition = new Point(1, 6);
		
		var thing:BitmapData = Assets.getBitmapData('img/background2.png');
		this.graphics.beginBitmapFill( thing );
		this.graphics.drawRect( 0, 0, thing.width, 514);
		this.graphics.endFill();
		
	}
	
}