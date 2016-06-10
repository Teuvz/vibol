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
class Frog extends Ennemy
{

	private var canJump:Bool = true;
	private var initialized:Bool = false;
	
	public function new( moving:Bool = true ) 
	{
		super( Assets.getBitmapData( 'img/sprite/frog.png' ) );
		
		/*var imageData:BitmapData = Assets.getBitmapData( 'img/sprite/frog.png' );
		var imageBmp:Bitmap = new Bitmap( imageData );

		this.width = imageBmp.width;
		this.height = imageBmp.height;
		this.addChild( imageBmp );*/
		
		//this.graphics.beginBitmapFill( imageData );
		
		//this.graphics.beginFill(0x00FF00);
		//this.graphics.drawRect( 0, 0, 64, 64 );
		//this.graphics.endFill();
		
		canJump = moving;
	}
	
	override public function roam()
	{
		if ( canJump == true )
		{
			originalY = this.y;
		
			canJump = false;
			var targetX:Float = 0;
			
			if ( roamingDirection == 'left' )
			{
				targetX = roamingMaxLeft;
				roamingDirection = 'right';
			}
			else
			{
				targetX = roamingMaxRight;
				roamingDirection = 'left';
			}
			
			Assets.getSound('snd/jump.mp3').play();
			Actuate.tween( this, 0.8, { y: originalY - 32, x:targetX } ).ease( Linear.easeNone ).onComplete( jumpReturn );
			
		}
	}
	
	private function jumpReturn()
	{
		Actuate.tween( this, 1, { y: originalY } ).ease( Linear.easeNone ).onComplete( jumpEnd );
	}
	
	private function jumpEnd()
	{
		canJump = true;
	}
	
}