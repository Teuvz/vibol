package com.ukuleledog.games.vibol.states;

import com.ukuleledog.games.core.State;
import motion.Actuate;
import motion.easing.Bounce;
import motion.easing.Linear;
import openfl.Assets;
import openfl.display.Bitmap;
import openfl.events.Event;
import openfl.events.KeyboardEvent;
import openfl.events.TimerEvent;
import openfl.text.TextField;
import openfl.text.TextFormat;
import openfl.text.TextFormatAlign;
import openfl.ui.Keyboard;
import openfl.utils.Timer;

/**
 * ...
 * @author Matt
 */
class IntroState extends State
{

	private var introbg1:Bitmap;
	private var introbg2:Bitmap;
	private var intro1:Bitmap;
	private var intro2:Bitmap;
	private var supert:Bitmap;
	private var epic:Bitmap;
	private var vibol:Bitmap;
	private var quest:Bitmap;
	private var adventure:Bitmap;
	private var introTimer:Timer;
	
	private var defaultFormat:TextFormat;
	private var startTextField:TextField;
	private var storyTextField1:TextField;
	private var storyTextField2:TextField;
	private var storyTextField3:TextField;
	private var textTimer:Timer;
	private var storyStep = 0;
	
	public function new() 
	{
		super();
		
		introbg1 = new Bitmap( Assets.getBitmapData( 'img/introbg1.png', false ) );		
		introbg2 = new Bitmap( Assets.getBitmapData( 'img/introbg2.png', false ) );
		intro1 = new Bitmap( Assets.getBitmapData( 'img/intro1.png', false ) );		
		intro2 = new Bitmap( Assets.getBitmapData( 'img/intro2.png', false ) );
		supert = new Bitmap( Assets.getBitmapData( 'img/intro-super.png', false ) );
		epic = new Bitmap( Assets.getBitmapData( 'img/intro-epic.png', false ) );
		vibol = new Bitmap( Assets.getBitmapData( 'img/intro-vibol.png', false ) );
		quest = new Bitmap( Assets.getBitmapData( 'img/intro-quest.png', false ) );
		adventure = new Bitmap( Assets.getBitmapData( 'img/intro-adventure.png', false ) );
		
		introTimer = new Timer( 100 );
		introTimer.addEventListener( TimerEvent.TIMER, introLoop );
		
		//defaultFormat = new TextFormat( Assets.getFont("font/MTF Epic.ttf").fontName, 24, 0xFFFFFF);
		defaultFormat = new TextFormat( "fixedsys", 32, 0xFFFFFF);
		defaultFormat.align = TextFormatAlign.CENTER;
		startTextField = new TextField();
		storyTextField1 = new TextField();
		storyTextField2 = new TextField();
		storyTextField3 = new TextField();
		
		textTimer = new Timer( 1000 );
		textTimer.addEventListener( TimerEvent.TIMER, textLoop );
		
		addEventListener( Event.ADDED_TO_STAGE, init );		
	}
	
	private function init( e:Event )
	{
		removeEventListener( Event.ADDED_TO_STAGE, init );
		
		introbg1.visible = false;
		introbg2.visible = false;
		intro2.alpha = 0;
		supert.x = -300;
		epic.x = 300;
		vibol.x = -300;
		quest.x = 300;
		adventure.alpha = 0;
		adventure.scaleX = 1.3;
		adventure.scaleY = 1.3;
		adventure.x = -154.2;
		
		addChild( introbg1 );
		addChild( introbg2 );
		addChild( intro1 );
		addChild( intro2 );
		addChild( supert );
		addChild( epic );
		addChild( vibol );
		addChild( quest );
		addChild( adventure );
		
		startTextField.defaultTextFormat = defaultFormat;
		startTextField.width = stage.stageWidth;
		startTextField.y = 450;
		startTextField.text = "Press space to start";
		startTextField.visible = false;
		addChild( startTextField );
		
		storyTextField1.defaultTextFormat = defaultFormat;
		storyTextField1.width = stage.stageWidth;
		storyTextField1.y = 20;
		storyTextField1.multiline = true;
		storyTextField1.text = "Legend says a young man will one day\n remove the holy sword from the stone.";
		storyTextField1.alpha = 0;
		addChild( storyTextField1 );
		
		storyTextField2.defaultTextFormat = defaultFormat;
		storyTextField2.width = stage.stageWidth;
		storyTextField2.y = 80;
		storyTextField2.multiline = true;
		storyTextField2.text = "It will grant him great powers and charm,\n making him King upon all lands.";
		storyTextField2.alpha = 0;
		addChild( storyTextField2 );
		
		storyTextField3.defaultTextFormat = defaultFormat;
		storyTextField3.width = stage.stageWidth;
		storyTextField3.y = 150;
		storyTextField3.multiline = true;
		storyTextField3.text = "This is the story of the kid who\n became that man.";
		storyTextField3.alpha = 0;
		addChild( storyTextField3 );
		
		startAnimation();
	}
	
	private function startAnimation()
	{
		Actuate.tween( intro2, 2, { alpha: 1 } ).onComplete( function() {
			Actuate.tween( supert, 1, { x:0 } ).ease( Bounce.easeOut ).onComplete( function() {
				Actuate.tween( epic, 1, { x:0 } ).ease( Bounce.easeOut ).onComplete( function() {
					Actuate.tween( vibol, 1, { x:0 } ).ease( Bounce.easeOut ).onComplete( function() {
						Actuate.tween( quest, 1, { x:0 } ).ease( Bounce.easeOut ).onComplete( function() {
							Actuate.tween( adventure, 3, { x:0, alpha: 1, scaleX: 1, scaleY: 1 } ).ease( Linear.easeNone ).onComplete( endAnimation );
						});
					});
				});
			});
		} );
	}	
	
	private function endAnimation()
	{
		introbg1.visible = true;
		introTimer.start();
		textTimer.start();
		
		stage.addEventListener( KeyboardEvent.KEY_DOWN, startStory);
	}
	
	private function introLoop( e:TimerEvent )
	{
		introbg1.visible = !introbg1.visible;
		introbg2.visible = !introbg2.visible;
	}
	
	private function textLoop( e:TimerEvent )
	{
		startTextField.visible = !startTextField.visible;
	}
	
	private function startStory( e:KeyboardEvent )
	{
		if ( e.keyCode == Keyboard.SPACE )
		{
			stage.removeEventListener( KeyboardEvent.KEY_DOWN, startStory);
			startTextField.visible = false;
			textTimer.stop();
			
			Actuate.tween( introbg1, 1, { alpha:0 } );
			Actuate.tween( introbg2, 1, { alpha:0 } );
			Actuate.tween( supert, 1, { alpha:0 } );
			Actuate.tween( epic, 1, { alpha:0 } );
			Actuate.tween( vibol, 1, { alpha:0 } );
			Actuate.tween( quest, 1, { alpha:0 } );
			Actuate.tween( adventure, 1, { alpha:0 } ).onComplete( function() {
				introTimer.stop();			
				introTimer.removeEventListener( TimerEvent.TIMER, introLoop );
				
				Actuate.tween( intro2, 2, { alpha:0 } ).onComplete( function() {
					Actuate.tween( storyTextField1, 3, { alpha: 1 } ).onComplete( function() {
						Actuate.tween( storyTextField2, 3, { alpha: 1 } ).onComplete( function() {
							Actuate.tween( storyTextField3, 5, { alpha: 1 } ).onComplete( function() {
								Actuate.tween( storyTextField1, 1, { alpha: 0 } );
								Actuate.tween( storyTextField2, 1, { alpha: 0 } );
								Actuate.tween( storyTextField3, 1, { alpha: 0 } ).onComplete( function() {
									Actuate.tween( this, 2, { alpha: 0 } ).onComplete( function() {
										dispatchEvent( new Event(Event.COMPLETE) );
									});
								});
							} );
						});
					});
				});
			});

		}
	}
	
}