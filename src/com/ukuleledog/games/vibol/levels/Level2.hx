package com.ukuleledog.games.vibol.levels;
import com.ukuleledog.games.core.GameObject;
import com.ukuleledog.games.core.Hero;
import com.ukuleledog.games.core.Level;
import com.ukuleledog.games.vibol.elements.Block;
import com.ukuleledog.games.vibol.elements.Coin;
import com.ukuleledog.games.vibol.elements.LongBlock;
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
	private var floor1:LongBlock;
	private var floor2:LongBlock;
	private var floor3:LongBlock;
	private var floor4:LongBlock;
	private var block4:Block;
	private var floor5:LongBlock;
	private var floor6:LongBlock;
	private var floor7:LongBlock;
	private var floor8:LongBlock;
	private var floor9:LongBlock;
	private var ennemy1:Schroom;
	private var ennemy2:Schroom;
	private var coin:Coin;
	
	public function new() 
	{
		super();
		
		block1 = new Block();
		block1.y = 64 * 5;
		addElement( block1 );
		
		block2 = new Block();
		block2.y = 64 * 3;
		block2.x = 64 * 2;
		addElement( block2 );
		
		block3 = new Block();
		block3.y = 64 * 4;
		block3.x = 64 * 1;
		addElement( block3 );
		
		floor1 = new LongBlock();
		floor1.y = 64 * 7;
		addElement( floor1 );
		
		floor2 = new LongBlock();
		floor2.y = 64 * 7;
		floor2.x = 64 * 4;
		addElement( floor2 );
		
		floor3 = new LongBlock();
		floor3.y = 64 * 7;
		floor3.x = 64 * 14;
		addElement( floor3 );
		
		floor4 = new LongBlock();
		floor4.y = 64 * 7;
		floor4.x = 64 * 18;
		addElement( floor4 );
		
		block4 = new Block();
		block4.y = 64 * 6;
		block4.x = 64 * 27;
		addElement( block4 );
		
		floor5 = new LongBlock();
		floor5.y = 64 * 7;
		floor5.x = 64 * 27;
		addElement( floor5 );
		
		floor6 = new LongBlock();
		floor6.y = 64 * 7;
		floor6.x = 64 * 31;
		addElement( floor6 );
		
		floor7 = new LongBlock();
		floor7.y = 64 * 7;
		floor7.x = 64 * 35;
		addElement( floor7 );
		
		floor8 = new LongBlock();
		floor8.y = 64 * 7;
		floor8.x = 64 * 39;
		addElement( floor8 );
		
		floor9 = new LongBlock();
		floor9.y = 64 * 7;
		floor9.x = 64 * 39.5;
		addElement( floor9 );
		
		ennemy1 = new Schroom();
		ennemy1.y = 64 * 6;
		ennemy1.x = 64 * 4;
		ennemy1.setRoaming(2);
		addEnnemy( ennemy1 );
		
		ennemy2 = new Schroom();
		ennemy2.y = 64 * 6;
		ennemy2.x = 64 * 34;
		ennemy2.setRoaming(3);
		addEnnemy( ennemy2 );
		
		coin = new Coin();
		coin.y = 64 * 4;
		coin.x = 64 * 17.5;
		addCollectible( coin );
		
		setHero( new Vibol() );
		startingPosition = new Point(0, 0);
		
		var thing:BitmapData = Assets.getBitmapData('img/background.png');
		this.graphics.beginBitmapFill( thing );
		this.graphics.drawRect( 0, 0, thing.width, 514);
		this.graphics.endFill();
		
		init();
	}
	
}