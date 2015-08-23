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
	
	public function new() 
	{
		super();
		activateFighting();
		
		floor1 = new LongBlock( 20 );
		addElement( floor1, 7 );
		
		frog1 = new Frog();
		addEnnemy( frog1, 6, 5 );
		frog1.setRoaming( 1 );
		
		frog2 = new Frog();
		addEnnemy( frog2, 6, 10 );
		frog2.setRoaming( 1, 'left' );
		
		block1 = new Block( 'block1' );
		addElement( block1, 6, 19 );
		
		block2 = new Block( 'block2' );
		addElement( block2, 6, 22 );
		
		block3 = new Block( 'block3' );
		addElement( block3, 6, 26 );
		
		block4 = new Block( 'block4' );
		addElement( block4, 5, 31 );
		
		block5 = new Block( 'block5' );
		addElement( block5, 4, 36 );
		
		block6 = new LongBlock( 2 );
		addElement( block6, 4, 39 );
		
		block7 = new Block( 'block7' );
		addElement( block7, 4, 44 );
		block7.setMoving( 5, 44, 1 );
		
		block8 = new Block( 'block8' );
		addElement( block8, 4, 47 );
		block8.setMoving( 5, 47, 10 );
		
		floor2 = new LongBlock( 17 );
		addElement( floor2, 7, 50 );
		
		frog3 = new Frog();
		addEnnemy( frog3, 6, 52 );
		frog3.setRoaming( 1 );
		
		frog4 = new Frog();
		addEnnemy( frog4, 6, 57 );
		frog4.setRoaming( 1, 'left' );
		
		frog5 = new Frog( false );
		addEnnemy( frog5, 3, 40 );
		
		endTeleport = new Teleport();
		endTeleport.y = 64 * 5;
		endTeleport.x = 64 * 64;
		addChild( endTeleport );
					
		setHero( new Vibol() );
		startingPosition = new Point(1, 6);
		
		var thing:BitmapData = Assets.getBitmapData('img/background4.png');
		this.graphics.beginBitmapFill( thing );
		this.graphics.drawRect( 0, 0, thing.width, 514);
		this.graphics.endFill();
		
		init();
	}
	
}