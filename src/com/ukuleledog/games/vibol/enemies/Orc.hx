package com.ukuleledog.games.vibol.enemies;

import com.ukuleledog.games.core.Ennemy;
import motion.Actuate;
import motion.easing.Linear;
import openfl.Assets;
import openfl.display.Bitmap;
import openfl.display.BitmapData;

/**
 * ...
 * @author matt
 */
class Orc extends Ennemy
{

	private var canMove:Bool = true;
	
	public function new() 
	{
		super();
		
		var imageData:BitmapData = Assets.getBitmapData( 'img/sprite/orc.png' );
		this.graphics.beginBitmapFill( imageData );
		
		//this.graphics.beginFill(0x00FF00);
		
		this.graphics.drawRect( 0, 0, 64, 64 );
		this.graphics.endFill();
	}
	
	override public function roam()
	{
		
		if ( roaming == true && canMove == true )
		{
			
			originalX = this.x;
			var targetX:Float = 0;
			
			if ( roamingDirection == 'right' )
			{
				
				canMove = false;
				var targetX:Float = this.x + 64;
				
				if ( targetX >= roamingMaxRight )
				{
					targetX = roamingMaxRight;
					roamingDirection = 'left';
				}
				
				Actuate.tween( this, 0.8, { 'x':targetX } ).ease(Linear.easeNone).delay(0.8).onComplete( function() {
					canMove = true;
				});
				
			}
			else
			{
				
				canMove = false;
				var targetX:Float = this.x - 64;
				
				if ( targetX <= roamingMaxLeft )
				{
					targetX = roamingMaxLeft;
					roamingDirection = 'right';
				}
				
				Actuate.tween( this, 0.8, { 'x':targetX } ).ease(Linear.easeNone).delay(0.8).onComplete( function() {
					canMove = true;
				});
				
			}
			
		}
		
		/*if ( roaming == true )
		{
			
			if ( roamingDirection == 'right' && this.x <= roamingMaxRight )
			{
				this.x += speed;
				
				if ( this.x >= roamingMaxRight )
				{
					this.x = roamingMaxRight;
					roamingDirection = 'left';
				}
			}
			else
			{
				this.x -= speed;
				
				if ( this.x <= roamingMaxLeft )
				{
					this.x = roamingMaxLeft;
					roamingDirection = 'right';
				}
			}
			
		}*/
	}
	
}