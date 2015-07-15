package com.ukuleledog.games.vibol.levels;
import com.ukuleledog.games.core.GameObject;
import com.ukuleledog.games.core.Hero;
import com.ukuleledog.games.core.Level;
import com.ukuleledog.games.vibol.elements.Block;
import com.ukuleledog.games.vibol.elements.Vibol;
import openfl.Assets;
import openfl.display.BitmapData;
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
		
		var thing:BitmapData = Assets.getBitmapData('img/background.png');
		this.graphics.beginBitmapFill( thing );
		this.graphics.drawRect( 0, 0, thing.width, 514);
		this.graphics.endFill();
		
		init();
	}
	
	override public function loop( e:Event )
	{
		
		onGround = false;
		
		for ( element in elements )
		{
			if ( element.hitTestObject( hero.getBottomLeftCorner() ) || element.hitTestObject( hero.getBottomRightCorner() ) )
			{
				onGround = true;
				jumping = false;
			}
			
			if ( element.hitTestObject( hero.getTopLeftCorner() ) || element.hitTestObject( hero.getBottomLeftCorner() ) )
			{
				hero.x = element.x + element.width;
			}
			
		}
		
		if ( !onGround )
			hero.y++;
		
	}
	
}