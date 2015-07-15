package com.ukuleledog.games.vibol.levels;
import com.ukuleledog.games.core.Hero;
import com.ukuleledog.games.core.Level;
import com.ukuleledog.games.vibol.elements.Block;
import com.ukuleledog.games.vibol.elements.Vibol;
import openfl.events.Event;
import openfl.geom.Point;

/**
 * ...
 * @author Matt
 */
class Level1 extends Level
{

	private var block1:Block;
	
	public function new() 
	{
		super();
		
		block1 = new Block();
		block1.y = 64 * 5;
		addElement( block1 );
		
		setHero( new Vibol() );
		startingPosition = new Point(0, 0);
		
		this.graphics.beginFill( 0x00FF00 );
		this.graphics.drawRect( 0, 0, 700, 514);
		this.graphics.endFill();
		
		init();
	}
	
	override public function loop( e:Event )
	{
		
	}
	
}