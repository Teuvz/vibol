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
import com.ukuleledog.games.vibol.enemies.Orc;
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
class Level4 extends VibolLevel
{

	private var floor1:LongBlock;
	private var frog1:Frog;
	private var frog2:Frog;
	private var block1:Block;
	private var block2:Block;
	private var block3:Block;
	private var block4:Block;
	private var block5:Block;
	private var block6:LongBlock;
	private var block7:Block;
	private var block8:Block;
	private var floor2:LongBlock;
	private var frog3:Frog;
	private var frog4:Frog;
	private var frog5:Frog;
	private var orc1:Orc;
	private var hole:LongBlock;
	private var exit:Bitmap;
	
	public function new() 
	{
		super( Assets.getBitmapData('img/texts/level4.png') );
		activateFighting();
		
		exit = new Bitmap( Assets.getBitmapData('img/cavedoor2.png') );
		exit.x = 3850;
		addChild( exit );
		
		floor1 = new LongBlock( 20, 'floor-cave' );
		addElement( floor1, 7 );
		
		frog1 = new Frog();
		addEnnemy( frog1, 6, 5 );
		frog1.setRoaming( 1 );
		
		frog2 = new Frog();
		addEnnemy( frog2, 6, 10 );
		frog2.setRoaming( 1, 'left' );
		
		block1 = new Block('floor-cave');
		addElement( block1, 6, 19 );
		
		block2 = new Block('floor-cave');
		addElement( block2, 6, 22 );
		
		block3 = new Block('floor-cave');
		addElement( block3, 6, 26 );
		
		block4 = new Block('floor-cave');
		addElement( block4, 5, 31 );
		
		block5 = new Block('floor-cave');
		addElement( block5, 4, 36 );
		
		block6 = new LongBlock( 2, 'floor-cave' );
		addElement( block6, 4, 39 );
		
		block7 = new Block('floor-cave-hot');
		addElement( block7, 4, 44 );
		block7.setMoving( 5, 44, 1 );
		
		block8 = new Block('floor-cave-hot');
		addElement( block8, 4, 47 );
		block8.setMoving( 5, 47, 10 );
		
		floor2 = new LongBlock( 17, 'floor-cave-hot' );
		addElement( floor2, 7, 50 );
		
		orc1 = new Orc();
		addEnnemy( orc1, 6, 55 );
		orc1.setRoaming(1);
				
		frog5 = new Frog( false );
		addEnnemy( frog5, 3, 40 );		
		
		endTeleport = new Teleport();
		endTeleport.y = 64 * 5;
		endTeleport.x = 64 * 64;
		addChild( endTeleport );
		
		hole = new LongBlock( 30, 'hole-hot');
		hole.x = 20 * 64;
		hole.y = 7 * 64;
		addChild( hole );
					
		startingPosition = new Point(1, 6);
		setHero( new Vibol() );
		
		var thing:BitmapData = Assets.getBitmapData('img/background4.png');
		this.graphics.beginBitmapFill( thing );
		this.graphics.drawRect( 0, 0, thing.width, 514);
		this.graphics.endFill();
		
	}
	
}