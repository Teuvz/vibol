package;


import haxe.Timer;
import haxe.Unserializer;
import lime.app.Preloader;
import lime.audio.openal.AL;
import lime.audio.AudioBuffer;
import lime.graphics.Font;
import lime.graphics.Image;
import lime.utils.ByteArray;
import lime.utils.UInt8Array;
import lime.Assets;

#if (sys || nodejs)
import sys.FileSystem;
#end

#if flash
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Loader;
import flash.events.Event;
import flash.media.Sound;
import flash.net.URLLoader;
import flash.net.URLRequest;
#end


class DefaultAssetLibrary extends AssetLibrary {
	
	
	public var className (default, null) = new Map <String, Dynamic> ();
	public var path (default, null) = new Map <String, String> ();
	public var type (default, null) = new Map <String, AssetType> ();
	
	private var lastModified:Float;
	private var timer:Timer;
	
	
	public function new () {
		
		super ();
		
		#if flash
		
		className.set ("img/background.png", __ASSET__img_background_png);
		type.set ("img/background.png", AssetType.IMAGE);
		className.set ("img/background.psd", __ASSET__img_background_psd);
		type.set ("img/background.psd", AssetType.BINARY);
		className.set ("img/background2.png", __ASSET__img_background2_png);
		type.set ("img/background2.png", AssetType.IMAGE);
		className.set ("img/background3.png", __ASSET__img_background3_png);
		type.set ("img/background3.png", AssetType.IMAGE);
		className.set ("img/background4.png", __ASSET__img_background4_png);
		type.set ("img/background4.png", AssetType.IMAGE);
		className.set ("img/background5.png", __ASSET__img_background5_png);
		type.set ("img/background5.png", AssetType.IMAGE);
		className.set ("img/hero.png", __ASSET__img_hero_png);
		type.set ("img/hero.png", AssetType.IMAGE);
		className.set ("img/intro-adventure.png", __ASSET__img_intro_adventure_png);
		type.set ("img/intro-adventure.png", AssetType.IMAGE);
		className.set ("img/intro-epic.png", __ASSET__img_intro_epic_png);
		type.set ("img/intro-epic.png", AssetType.IMAGE);
		className.set ("img/intro-quest.png", __ASSET__img_intro_quest_png);
		type.set ("img/intro-quest.png", AssetType.IMAGE);
		className.set ("img/intro-super.png", __ASSET__img_intro_super_png);
		type.set ("img/intro-super.png", AssetType.IMAGE);
		className.set ("img/intro-vibol.png", __ASSET__img_intro_vibol_png);
		type.set ("img/intro-vibol.png", AssetType.IMAGE);
		className.set ("img/intro1.png", __ASSET__img_intro1_png);
		type.set ("img/intro1.png", AssetType.IMAGE);
		className.set ("img/intro2.png", __ASSET__img_intro2_png);
		type.set ("img/intro2.png", AssetType.IMAGE);
		className.set ("img/introbg1.png", __ASSET__img_introbg1_png);
		type.set ("img/introbg1.png", AssetType.IMAGE);
		className.set ("img/introbg2.png", __ASSET__img_introbg2_png);
		type.set ("img/introbg2.png", AssetType.IMAGE);
		className.set ("font/MTF Epic.ttf", __ASSET__font_mtf_epic_ttf);
		type.set ("font/MTF Epic.ttf", AssetType.FONT);
		
		
		#elseif html5
		
		var id;
		id = "img/background.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/background.psd";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "img/background2.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/background3.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/background4.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/background5.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/hero.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/intro-adventure.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/intro-epic.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/intro-quest.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/intro-super.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/intro-vibol.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/intro1.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/intro2.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/introbg1.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/introbg2.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "font/MTF Epic.ttf";
		className.set (id, __ASSET__font_mtf_epic_ttf);
		
		type.set (id, AssetType.FONT);
		
		
		#else
		
		#if openfl
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		openfl.text.Font.registerFont (__ASSET__font_mtf_epic_ttf);
		
		#end
		
		#if (windows || mac || linux)
		
		/*var useManifest = false;
		
		className.set ("img/background.png", __ASSET__img_background_png);
		type.set ("img/background.png", AssetType.IMAGE);
		
		className.set ("img/background.psd", __ASSET__img_background_psd);
		type.set ("img/background.psd", AssetType.BINARY);
		
		className.set ("img/background2.png", __ASSET__img_background2_png);
		type.set ("img/background2.png", AssetType.IMAGE);
		
		className.set ("img/background3.png", __ASSET__img_background3_png);
		type.set ("img/background3.png", AssetType.IMAGE);
		
		className.set ("img/background4.png", __ASSET__img_background4_png);
		type.set ("img/background4.png", AssetType.IMAGE);
		
		className.set ("img/background5.png", __ASSET__img_background5_png);
		type.set ("img/background5.png", AssetType.IMAGE);
		
		className.set ("img/hero.png", __ASSET__img_hero_png);
		type.set ("img/hero.png", AssetType.IMAGE);
		
		className.set ("img/intro-adventure.png", __ASSET__img_intro_adventure_png);
		type.set ("img/intro-adventure.png", AssetType.IMAGE);
		
		className.set ("img/intro-epic.png", __ASSET__img_intro_epic_png);
		type.set ("img/intro-epic.png", AssetType.IMAGE);
		
		className.set ("img/intro-quest.png", __ASSET__img_intro_quest_png);
		type.set ("img/intro-quest.png", AssetType.IMAGE);
		
		className.set ("img/intro-super.png", __ASSET__img_intro_super_png);
		type.set ("img/intro-super.png", AssetType.IMAGE);
		
		className.set ("img/intro-vibol.png", __ASSET__img_intro_vibol_png);
		type.set ("img/intro-vibol.png", AssetType.IMAGE);
		
		className.set ("img/intro1.png", __ASSET__img_intro1_png);
		type.set ("img/intro1.png", AssetType.IMAGE);
		
		className.set ("img/intro2.png", __ASSET__img_intro2_png);
		type.set ("img/intro2.png", AssetType.IMAGE);
		
		className.set ("img/introbg1.png", __ASSET__img_introbg1_png);
		type.set ("img/introbg1.png", AssetType.IMAGE);
		
		className.set ("img/introbg2.png", __ASSET__img_introbg2_png);
		type.set ("img/introbg2.png", AssetType.IMAGE);
		
		className.set ("font/MTF Epic.ttf", __ASSET__font_mtf_epic_ttf);
		type.set ("font/MTF Epic.ttf", AssetType.FONT);
		*/
		var useManifest = true;
		
		if (useManifest) {
			
			loadManifest ();
			
			if (Sys.args ().indexOf ("-livereload") > -1) {
				
				var path = FileSystem.fullPath ("manifest");
				lastModified = FileSystem.stat (path).mtime.getTime ();
				
				timer = new Timer (2000);
				timer.run = function () {
					
					var modified = FileSystem.stat (path).mtime.getTime ();
					
					if (modified > lastModified) {
						
						lastModified = modified;
						loadManifest ();
						
						if (eventCallback != null) {
							
							eventCallback (this, "change");
							
						}
						
					}
					
				}
				
			}
			
		}
		
		#else
		
		loadManifest ();
		
		#end
		#end
		
	}
	
	
	public override function exists (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var assetType = this.type.get (id);
		
		if (assetType != null) {
			
			if (assetType == requestedType || ((requestedType == SOUND || requestedType == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if ((assetType == BINARY || assetType == TEXT) && requestedType == BINARY) {
				
				return true;
				
			} else if (path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (requestedType == BINARY || requestedType == null || (assetType == BINARY && requestedType == TEXT)) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getAudioBuffer (id:String):AudioBuffer {
		
		#if flash
		
		var buffer = new AudioBuffer ();
		buffer.src = cast (Type.createInstance (className.get (id), []), Sound);
		return buffer;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		return AudioBuffer.fromFile (path.get (id));
		//if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		//else return new Sound (new URLRequest (path.get (id)), null, type.get (id) == MUSIC);
		
		#end
		
	}
	
	
	public override function getBytes (id:String):ByteArray {
		
		#if flash
		
		return cast (Type.createInstance (className.get (id), []), ByteArray);
		
		#elseif html5
		
		var bytes:ByteArray = null;
		var data = Preloader.loaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			bytes = new ByteArray ();
			bytes.writeUTFBytes (data);
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		//return null;
		//if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), ByteArray);
		//else 
		return ByteArray.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Dynamic /*Font*/ {
		
		// TODO: Complete Lime Font API
		
		#if openfl
		#if (flash || js)
		
		return cast (Type.createInstance (className.get (id), []), openfl.text.Font);
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			openfl.text.Font.registerFont (fontClass);
			return cast (Type.createInstance (fontClass, []), openfl.text.Font);
			
		} else {
			
			return new openfl.text.Font (path.get (id));
			
		}
		
		#end
		#end
		
		return null;
		
	}
	
	
	public override function getImage (id:String):Image {
		
		#if flash
		
		return Image.fromBitmapData (cast (Type.createInstance (className.get (id), []), BitmapData));
		
		#elseif html5
		
		return Image.fromImageElement (Preloader.images.get (path.get (id)));
		
		#else
		
		return Image.fromFile (path.get (id));
		
		#end
		
	}
	
	
	/*public override function getMusic (id:String):Dynamic {
		
		#if flash
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif openfl_html5
		
		//var sound = new Sound ();
		//sound.__buffer = true;
		//sound.load (new URLRequest (path.get (id)));
		//return sound;
		return null;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		return null;
		//if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		//else return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}*/
	
	
	public override function getPath (id:String):String {
		
		//#if ios
		
		//return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		//#else
		
		return path.get (id);
		
		//#end
		
	}
	
	
	public override function getText (id:String):String {
		
		#if html5
		
		var bytes:ByteArray = null;
		var data = Preloader.loaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			return cast data;
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes.readUTFBytes (bytes.length);
			
		} else {
			
			return null;
		}
		
		#else
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.readUTFBytes (bytes.length);
			
		}
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		
		#if flash
		
		if (requestedType != AssetType.MUSIC && requestedType != AssetType.SOUND) {
			
			return className.exists (id);
			
		}
		
		#end
		
		return true;
		
	}
	
	
	public override function list (type:String):Array<String> {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (requestedType == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadAudioBuffer (id:String, handler:AudioBuffer -> Void):Void {
		
		#if (flash || js)
		
		//if (path.exists (id)) {
			
		//	var loader = new Loader ();
		//	loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
		//		handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
		//	});
		//	loader.load (new URLRequest (path.get (id)));
			
		//} else {
			
			handler (getAudioBuffer (id));
			
		//}
		
		#else
		
		handler (getAudioBuffer (id));
		
		#end
		
	}
	
	
	public override function loadBytes (id:String, handler:ByteArray -> Void):Void {
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = new ByteArray ();
				bytes.writeUTFBytes (event.currentTarget.data);
				bytes.position = 0;
				
				handler (bytes);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getBytes (id));
			
		}
		
		#else
		
		handler (getBytes (id));
		
		#end
		
	}
	
	
	public override function loadImage (id:String, handler:Image -> Void):Void {
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bitmapData = cast (event.currentTarget.content, Bitmap).bitmapData;
				handler (Image.fromBitmapData (bitmapData));
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getImage (id));
			
		}
		
		#else
		
		handler (getImage (id));
		
		#end
		
	}
	
	
	#if (!flash && !html5)
	private function loadManifest ():Void {
		
		try {
			
			#if blackberry
			var bytes = ByteArray.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = ByteArray.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = ByteArray.readFile ("assets/manifest");
			#elseif (mac && java)
			var bytes = ByteArray.readFile ("../Resources/manifest");
			#else
			var bytes = ByteArray.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				bytes.position = 0;
				
				if (bytes.length > 0) {
					
					var data = bytes.readUTFBytes (bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								path.set (asset.id, asset.path);
								type.set (asset.id, cast (asset.type, AssetType));
								
							}
							
						}
						
					}
					
				}
				
			} else {
				
				trace ("Warning: Could not load asset manifest (bytes was null)");
				
			}
		
		} catch (e:Dynamic) {
			
			trace ('Warning: Could not load asset manifest (${e})');
			
		}
		
	}
	#end
	
	
	/*public override function loadMusic (id:String, handler:Dynamic -> Void):Void {
		
		#if (flash || js)
		
		//if (path.exists (id)) {
			
		//	var loader = new Loader ();
		//	loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
		//		handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
		//	});
		//	loader.load (new URLRequest (path.get (id)));
			
		//} else {
			
			handler (getMusic (id));
			
		//}
		
		#else
		
		handler (getMusic (id));
		
		#end
		
	}*/
	
	
	public override function loadText (id:String, handler:String -> Void):Void {
		
		//#if html5
		
		/*if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				handler (event.currentTarget.data);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getText (id));
			
		}*/
		
		//#else
		
		var callback = function (bytes:ByteArray):Void {
			
			if (bytes == null) {
				
				handler (null);
				
			} else {
				
				handler (bytes.readUTFBytes (bytes.length));
				
			}
			
		}
		
		loadBytes (id, callback);
		
		//#end
		
	}
	
	
}


#if !display
#if flash

@:keep @:bind #if display private #end class __ASSET__img_background_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_background_psd extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__img_background2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_background3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_background4_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_background5_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_hero_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_intro_adventure_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_intro_epic_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_intro_quest_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_intro_super_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_intro_vibol_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_intro1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_intro2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_introbg1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_introbg2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__font_mtf_epic_ttf extends flash.text.Font { }


#elseif html5

#if openfl
















@:keep #if display private #end class __ASSET__font_mtf_epic_ttf extends openfl.text.Font { public function new () { super (); fontName = "font/MTF Epic.ttf"; } } 

#end

#else

#if openfl
class __ASSET__font_mtf_epic_ttf extends openfl.text.Font { public function new () { super (); __fontPath = "font/MTF Epic.ttf"; fontName = "MTF Epic"; }}

#end

#if (windows || mac || linux)

//
//@:bitmap("assets/img/background.png") class __ASSET__img_background_png extends openfl.display.BitmapData {}
//@:file("assets/img/background.psd") class __ASSET__img_background_psd extends lime.utils.ByteArray {}
//@:bitmap("assets/img/background2.png") class __ASSET__img_background2_png extends openfl.display.BitmapData {}
//@:bitmap("assets/img/background3.png") class __ASSET__img_background3_png extends openfl.display.BitmapData {}
//@:bitmap("assets/img/background4.png") class __ASSET__img_background4_png extends openfl.display.BitmapData {}
//@:bitmap("assets/img/background5.png") class __ASSET__img_background5_png extends openfl.display.BitmapData {}
//@:bitmap("assets/img/hero.png") class __ASSET__img_hero_png extends openfl.display.BitmapData {}
//@:bitmap("assets/img/intro-adventure.png") class __ASSET__img_intro_adventure_png extends openfl.display.BitmapData {}
//@:bitmap("assets/img/intro-epic.png") class __ASSET__img_intro_epic_png extends openfl.display.BitmapData {}
//@:bitmap("assets/img/intro-quest.png") class __ASSET__img_intro_quest_png extends openfl.display.BitmapData {}
//@:bitmap("assets/img/intro-super.png") class __ASSET__img_intro_super_png extends openfl.display.BitmapData {}
//@:bitmap("assets/img/intro-vibol.png") class __ASSET__img_intro_vibol_png extends openfl.display.BitmapData {}
//@:bitmap("assets/img/intro1.png") class __ASSET__img_intro1_png extends openfl.display.BitmapData {}
//@:bitmap("assets/img/intro2.png") class __ASSET__img_intro2_png extends openfl.display.BitmapData {}
//@:bitmap("assets/img/introbg1.png") class __ASSET__img_introbg1_png extends openfl.display.BitmapData {}
//@:bitmap("assets/img/introbg2.png") class __ASSET__img_introbg2_png extends openfl.display.BitmapData {}
//@:font("assets/font/MTF Epic.ttf") class __ASSET__font_mtf_epic_ttf extends openfl.text.Font {}
//
//

#end

#end
#end

