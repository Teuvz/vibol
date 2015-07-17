package com.ukuleledog.games.vibol.levels;
import com.ukuleledog.games.core.GameObject;
import com.ukuleledog.games.core.Hero;
import com.ukuleledog.games.core.Level;
import com.ukuleledog.games.vibol.elements.Block;
import com.ukuleledog.games.vibol.elements.Coin;
import com.ukuleledog.games.vibol.elements.LongBlock;
import com.ukuleledog.games.vibol.elements.Teleport;
import com.ukuleledog.games.vibol.elements.Vibol;
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
class Level2 extends VibolLevel
{

	private var block1:Block;
	private var block2:Block;
	private var block3:Block;
	private var block4:Block;
	private var floor1:LongBlock;
	private var floor2:LongBlock;
	private var floor3:LongBlock;
	private var ennemy1:Schroom;
	private var ennemy2:Schroom;
	private var coin:Coin;
	
	public function new() 
	{
		super();
		
		block1 = new Block();
		addElement( block1, 5 );
		
		block2 = new Block();
		addElement( block2, 3, 2 );
		
		block3 = new Block();
		addElement( block3, 4, 1 );
				
		floor1 = new LongBlock( 512 );
		addElement( floor1, 7 );
				
		floor2 = new LongBlock( 1408 - 896 );
		addElement( floor2, 7, 14 );
		
		block4 = new Block();
		addElement( block4, 6, 27 );
	
		floor3 = new LongBlock( 2784 - 1728 );
		addElement( floor3, 7, 27 );
		
		ennemy1 = new Schroom();
		addEnnemy( ennemy1, 6, 4 );
		ennemy1.setRoaming(2);
		
		ennemy2 = new Schroom();
		addEnnemy( ennemy2, 6, 34 );
		ennemy2.setRoaming(3);
		
		coin = new Coin();
		addCollectible( coin, 4, 17 );
		
		/*endTeleport = new Teleport();
		endTeleport.y = 64 * 5;
		endTeleport.x = 64 * 40;
		addChild( endTeleport );*/
		
		setHero( new Vibol() );
		startingPosition = new Point(0, 0);
		
		var thing:BitmapData = Assets.getBitmapData('img/background.png');
		this.graphics.beginBitmapFill( thing );
		this.graphics.drawRect( 0, 0, thing.width, 514);
		this.graphics.endFill();
		
		init();
	}
	
}