import lime.Assets;
#if !macro


class ApplicationMain {
	
	
	public static var config:lime.app.Config;
	public static var preloader:openfl.display.Preloader;
	
	private static var app:lime.app.Application;
	
	
	public static function create ():Void {
		
		app = new openfl.display.Application ();
		app.create (config);
		
		var display = new NMEPreloader ();
		
		preloader = new openfl.display.Preloader (display);
		preloader.onComplete = init;
		preloader.create (config);
		
		#if js
		var urls = [];
		var types = [];
		
		
		urls.push ("img/background.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/background2.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/background3.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/background4.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/background5.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/batman.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/cavedoor.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/cavedoor2.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/hero.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/intro-adventure.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/intro-epic.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/intro-quest.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/intro-super.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/intro-vibol.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/intro1.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/intro2.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/introbg1.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/introbg2.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/spectre.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/sprite/block-cave.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/sprite/block-forest.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/sprite/block.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/sprite/boss.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/sprite/coin.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/sprite/floor-cave-burning.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/sprite/floor-cave-hot.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/sprite/floor-cave.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/sprite/floor-forest.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/sprite/frog.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/sprite/hole-hot.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/sprite/hole.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/sprite/longblock.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/sprite/orc.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/sprite/schroom.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/sprite/sword-roc.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/sprite/sword.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/sprite/teleport.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/sprite/vibol.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/texts/end.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/texts/level1.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/texts/level2.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/texts/level3.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/texts/level4.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/texts/level5.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/tree.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("font/MTF Epic.ttf");
		types.push (AssetType.FONT);
		
		
		urls.push ("snd/01. Sometimes.mp3");
		types.push (AssetType.MUSIC);
		
		
		urls.push ("snd/01_converted.mp3");
		types.push (AssetType.MUSIC);
		
		
		urls.push ("snd/die.mp3");
		types.push (AssetType.MUSIC);
		
		
		urls.push ("snd/intro-correct.mp3");
		types.push (AssetType.MUSIC);
		
		
		urls.push ("snd/intro-wrong.mp3");
		types.push (AssetType.MUSIC);
		
		
		urls.push ("snd/jump.mp3");
		types.push (AssetType.MUSIC);
		
		
		urls.push ("snd/kill.mp3");
		types.push (AssetType.MUSIC);
		
		
		urls.push ("snd/metal-bang.mp3");
		types.push (AssetType.MUSIC);
		
		
		urls.push ("snd/scream.mp3");
		types.push (AssetType.MUSIC);
		
		
		urls.push ("snd/Skye Cuillin.mp3");
		types.push (AssetType.MUSIC);
		
		
		urls.push ("snd/Skye_Cuillin_converted.mp3");
		types.push (AssetType.MUSIC);
		
		
		urls.push ("snd/sword.mp3");
		types.push (AssetType.MUSIC);
		
		
		urls.push ("snd/victory.mp3");
		types.push (AssetType.MUSIC);
		
		
		
		preloader.load (urls, types);
		#end
		
		var result = app.exec ();
		
		#if sys
		Sys.exit (result);
		#end
		
	}
	
	
	public static function init ():Void {
		
		var loaded = 0;
		var total = 0;
		var library_onLoad = function (__) {
			
			loaded++;
			
			if (loaded == total) {
				
				start ();
				
			}
			
		}
		
		preloader = null;
		
		
		
		if (loaded == total) {
			
			start ();
			
		}
		
	}
	
	
	public static function main () {
		
		config = {
			
			antialiasing: Std.int (0),
			background: Std.int (0),
			borderless: false,
			depthBuffer: false,
			fps: Std.int (60),
			fullscreen: false,
			height: Std.int (514),
			orientation: "",
			resizable: true,
			stencilBuffer: false,
			title: "vibol",
			vsync: false,
			width: Std.int (514),
			
		}
		
		#if js
		#if munit
		flash.Lib.embed (null, 514, 514, "000000");
		#end
		#else
		create ();
		#end
		
	}
	
	
	public static function start ():Void {
		
		openfl.Lib.current.stage.align = openfl.display.StageAlign.TOP_LEFT;
		openfl.Lib.current.stage.scaleMode = openfl.display.StageScaleMode.NO_SCALE;
		
		var hasMain = false;
		
		for (methodName in Type.getClassFields (com.ukuleledog.games.vibol.Main)) {
			
			if (methodName == "main") {
				
				hasMain = true;
				break;
				
			}
			
		}
		
		if (hasMain) {
			
			Reflect.callMethod (com.ukuleledog.games.vibol.Main, Reflect.field (com.ukuleledog.games.vibol.Main, "main"), []);
			
		} else {
			
			var instance:DocumentClass = Type.createInstance (DocumentClass, []);
			
			if (Std.is (instance, openfl.display.DisplayObject)) {
				
				openfl.Lib.current.addChild (cast instance);
				
			}
			
		}
		
		openfl.Lib.current.stage.dispatchEvent (new openfl.events.Event (openfl.events.Event.RESIZE, false, false));
		
	}
	
	
	#if neko
	@:noCompletion public static function __init__ () {
		
		var loader = new neko.vm.Loader (untyped $loader);
		loader.addPath (haxe.io.Path.directory (Sys.executablePath ()));
		loader.addPath ("./");
		loader.addPath ("@executable_path/");
		
	}
	#end
	
	
}


#if flash @:build(DocumentClass.buildFlash())
#else @:build(DocumentClass.build()) #end
@:keep class DocumentClass extends com.ukuleledog.games.vibol.Main {}


#else


import haxe.macro.Context;
import haxe.macro.Expr;


class DocumentClass {
	
	
	macro public static function build ():Array<Field> {
		
		var classType = Context.getLocalClass ().get ();
		var searchTypes = classType;
		
		while (searchTypes.superClass != null) {
			
			if (searchTypes.pack.length == 2 && searchTypes.pack[1] == "display" && searchTypes.name == "DisplayObject") {
				
				var fields = Context.getBuildFields ();
				
				var method = macro {
					
					this.stage = flash.Lib.current.stage;
					super ();
					dispatchEvent (new openfl.events.Event (openfl.events.Event.ADDED_TO_STAGE, false, false));
					
				}
				
				fields.push ({ name: "new", access: [ APublic ], kind: FFun({ args: [], expr: method, params: [], ret: macro :Void }), pos: Context.currentPos () });
				
				return fields;
				
			}
			
			searchTypes = searchTypes.superClass.t.get ();
			
		}
		
		return null;
		
	}
	
	
	macro public static function buildFlash ():Array<Field> {
		
		var classType = Context.getLocalClass ().get ();
		var searchTypes = classType;
		
		while (searchTypes.superClass != null) {
			
			if (searchTypes.pack.length == 2 && searchTypes.pack[1] == "display" && searchTypes.name == "DisplayObject") {
				
				var fields = Context.getBuildFields ();
				var method = macro {
					return flash.Lib.current.stage;
				}
				
				fields.push ({ name: "get_stage", access: [ APrivate ], meta: [ { name: ":getter", params: [ macro stage ], pos: Context.currentPos() } ], kind: FFun({ args: [], expr: method, params: [], ret: macro :flash.display.Stage }), pos: Context.currentPos() });
				return fields;
				
			}
			
			searchTypes = searchTypes.superClass.t.get ();
			
		}
		
		return null;
		
	}
	
	
}


#end
