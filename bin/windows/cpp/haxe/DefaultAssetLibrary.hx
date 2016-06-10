package;


import haxe.Timer;
import haxe.Unserializer;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.MovieClip;
import openfl.events.Event;
import openfl.text.Font;
import openfl.media.Sound;
import openfl.net.URLRequest;
import openfl.utils.ByteArray;
import openfl.Assets;

#if (flash || js)
import openfl.display.Loader;
import openfl.events.Event;
import openfl.net.URLLoader;
#end

#if sys
import sys.FileSystem;
#end

#if ios
import openfl._v2.utils.SystemPath;
#end


@:access(openfl.media.Sound)
class DefaultAssetLibrary extends AssetLibrary {
	
	
	public var className (default, null) = new Map <String, Dynamic> ();
	public var path (default, null) = new Map <String, String> ();
	public var type (default, null) = new Map <String, AssetType> ();
	
	private var lastModified:Float;
	private var timer:Timer;
	
	
	public function new () {
		
		super ();
		
		#if flash
		
		path.set ("img/background.png", "img/background.png");
		type.set ("img/background.png", AssetType.IMAGE);
		path.set ("img/background2.png", "img/background2.png");
		type.set ("img/background2.png", AssetType.IMAGE);
		path.set ("img/background3.png", "img/background3.png");
		type.set ("img/background3.png", AssetType.IMAGE);
		path.set ("img/background4.png", "img/background4.png");
		type.set ("img/background4.png", AssetType.IMAGE);
		path.set ("img/background5.png", "img/background5.png");
		type.set ("img/background5.png", AssetType.IMAGE);
		path.set ("img/hero.png", "img/hero.png");
		type.set ("img/hero.png", AssetType.IMAGE);
		path.set ("img/intro-adventure.png", "img/intro-adventure.png");
		type.set ("img/intro-adventure.png", AssetType.IMAGE);
		path.set ("img/intro-epic.png", "img/intro-epic.png");
		type.set ("img/intro-epic.png", AssetType.IMAGE);
		path.set ("img/intro-quest.png", "img/intro-quest.png");
		type.set ("img/intro-quest.png", AssetType.IMAGE);
		path.set ("img/intro-super.png", "img/intro-super.png");
		type.set ("img/intro-super.png", AssetType.IMAGE);
		path.set ("img/intro-vibol.png", "img/intro-vibol.png");
		type.set ("img/intro-vibol.png", AssetType.IMAGE);
		path.set ("img/intro1.png", "img/intro1.png");
		type.set ("img/intro1.png", AssetType.IMAGE);
		path.set ("img/intro2.png", "img/intro2.png");
		type.set ("img/intro2.png", AssetType.IMAGE);
		path.set ("img/introbg1.png", "img/introbg1.png");
		type.set ("img/introbg1.png", AssetType.IMAGE);
		path.set ("img/introbg2.png", "img/introbg2.png");
		type.set ("img/introbg2.png", AssetType.IMAGE);
		path.set ("img/sprite/block-forest.png", "img/sprite/block-forest.png");
		type.set ("img/sprite/block-forest.png", AssetType.IMAGE);
		path.set ("img/sprite/block.png", "img/sprite/block.png");
		type.set ("img/sprite/block.png", AssetType.IMAGE);
		path.set ("img/sprite/boss.png", "img/sprite/boss.png");
		type.set ("img/sprite/boss.png", AssetType.IMAGE);
		path.set ("img/sprite/coin.png", "img/sprite/coin.png");
		type.set ("img/sprite/coin.png", AssetType.IMAGE);
		path.set ("img/sprite/floor-forest.png", "img/sprite/floor-forest.png");
		type.set ("img/sprite/floor-forest.png", AssetType.IMAGE);
		path.set ("img/sprite/frog.png", "img/sprite/frog.png");
		type.set ("img/sprite/frog.png", AssetType.IMAGE);
		path.set ("img/sprite/longblock.png", "img/sprite/longblock.png");
		type.set ("img/sprite/longblock.png", AssetType.IMAGE);
		path.set ("img/sprite/orc.png", "img/sprite/orc.png");
		type.set ("img/sprite/orc.png", AssetType.IMAGE);
		path.set ("img/sprite/schroom.png", "img/sprite/schroom.png");
		type.set ("img/sprite/schroom.png", AssetType.IMAGE);
		path.set ("img/sprite/sword.png", "img/sprite/sword.png");
		type.set ("img/sprite/sword.png", AssetType.IMAGE);
		path.set ("img/sprite/vibol.png", "img/sprite/vibol.png");
		type.set ("img/sprite/vibol.png", AssetType.IMAGE);
		path.set ("font/MTF Epic.ttf", "font/MTF Epic.ttf");
		type.set ("font/MTF Epic.ttf", AssetType.FONT);
		
		
		#elseif html5
		
		var id;
		id = "img/background.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
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
		id = "img/sprite/block-forest.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/sprite/block.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/sprite/boss.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/sprite/coin.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/sprite/floor-forest.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/sprite/frog.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/sprite/longblock.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/sprite/orc.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/sprite/schroom.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/sprite/sword.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "img/sprite/vibol.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "font/MTF Epic.ttf";
		path.set (id, id);
		type.set (id, AssetType.FONT);
		
		
		#else
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		Font.registerFont (__ASSET__font_mtf_epic_ttf);
		
		
		#if (windows || mac || linux)
		
		var useManifest = false;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		
		
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
	
	
	public override function exists (id:String, type:AssetType):Bool {
		
		var assetType = this.type.get (id);
		
		#if pixi
		
		if (assetType == IMAGE) {
			
			return true;
			
		} else {
			
			return false;
			
		}
		
		#end
		
		if (assetType != null) {
			
			if (assetType == type || ((type == SOUND || type == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if ((assetType == BINARY || assetType == TEXT) && type == BINARY) {
				
				return true;
				
			} else if (path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (type == BINARY || type == null || (assetType == BINARY && type == TEXT)) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getBitmapData (id:String):BitmapData {
		
		#if pixi
		
		return BitmapData.fromImage (path.get (id));
		
		#elseif (flash)
		
		return cast (Type.createInstance (className.get (id), []), BitmapData);
		
		#elseif openfl_html5
		
		return BitmapData.fromImage (ApplicationMain.images.get (path.get (id)));
		
		#elseif js
		
		return cast (ApplicationMain.loaders.get (path.get (id)).contentLoaderInfo.content, Bitmap).bitmapData;
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), BitmapData);
		else return BitmapData.load (path.get (id));
		
		#end
		
	}
	
	
	public override function getBytes (id:String):ByteArray {
		
		#if (flash)
		
		return cast (Type.createInstance (className.get (id), []), ByteArray);

		#elseif (js || openfl_html5 || pixi)
		
		var bytes:ByteArray = null;
		var data = ApplicationMain.urlLoaders.get (path.get (id)).data;
		
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
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), ByteArray);
		else return ByteArray.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Font {
		
		#if pixi
		
		return null;
		
		#elseif (flash || js)
		
		return cast (Type.createInstance (className.get (id), []), Font);
		
		#else
		
		if (className.exists(id)) {
			var fontClass = className.get(id);
			Font.registerFont(fontClass);
			return cast (Type.createInstance (fontClass, []), Font);
		} else return new Font (path.get (id));
		
		#end
		
	}
	
	
	public override function getMusic (id:String):Sound {
		
		#if pixi
		
		return null;
		
		#elseif (flash)
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif openfl_html5
		
		var sound = new Sound ();
		sound.__buffer = true;
		sound.load (new URLRequest (path.get (id)));
		return sound; 
		
		#elseif js
		
		return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		else return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}
	
	
	public override function getPath (id:String):String {
		
		#if ios
		
		return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		#else
		
		return path.get (id);
		
		#end
		
	}
	
	
	public override function getSound (id:String):Sound {
		
		#if pixi
		
		return null;
		
		#elseif (flash)
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif js
		
		return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		else return new Sound (new URLRequest (path.get (id)), null, type.get (id) == MUSIC);
		
		#end
		
	}
	
	
	public override function getText (id:String):String {
		
		#if js
		
		var bytes:ByteArray = null;
		var data = ApplicationMain.urlLoaders.get (path.get (id)).data;
		
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
	
	
	public override function isLocal (id:String, type:AssetType):Bool {
		
		#if flash
		
		if (type != AssetType.MUSIC && type != AssetType.SOUND) {
			
			return className.exists (id);
			
		}
		
		#end
		
		return true;
		
	}
	
	
	public override function list (type:AssetType):Array<String> {
		
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (type == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadBitmapData (id:String, handler:BitmapData -> Void):Void {
		
		#if pixi
		
		handler (getBitmapData (id));
		
		#elseif (flash || js)
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getBitmapData (id));
			
		}
		
		#else
		
		handler (getBitmapData (id));
		
		#end
		
	}
	
	
	public override function loadBytes (id:String, handler:ByteArray -> Void):Void {
		
		#if pixi
		
		handler (getBytes (id));
		
		#elseif (flash || js)
		
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
	
	
	public override function loadFont (id:String, handler:Font -> Void):Void {
		
		#if (flash || js)
		
		/*if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {*/
			
			handler (getFont (id));
			
		//}
		
		#else
		
		handler (getFont (id));
		
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
								type.set (asset.id, Type.createEnum (AssetType, asset.type));
								
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
	
	
	public override function loadMusic (id:String, handler:Sound -> Void):Void {
		
		#if (flash || js)
		
		/*if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {*/
			
			handler (getMusic (id));
			
		//}
		
		#else
		
		handler (getMusic (id));
		
		#end
		
	}
	
	
	public override function loadSound (id:String, handler:Sound -> Void):Void {
		
		#if (flash || js)
		
		/*if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {*/
			
			handler (getSound (id));
			
		//}
		
		#else
		
		handler (getSound (id));
		
		#end
		
	}
	
	
	public override function loadText (id:String, handler:String -> Void):Void {
		
		#if js
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				handler (event.currentTarget.data);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getText (id));
			
		}
		
		#else
		
		var callback = function (bytes:ByteArray):Void {
			
			if (bytes == null) {
				
				handler (null);
				
			} else {
				
				handler (bytes.readUTFBytes (bytes.length));
				
			}
			
		}
		
		loadBytes (id, callback);
		
		#end
		
	}
	
	
}


#if pixi
#elseif flash






























#elseif html5



























@:keep #if display private #end class __ASSET__font_mtf_epic_ttf extends flash.text.Font { #if (!openfl_html5_dom) public function new () { super (); fontName = "font/MTF Epic.ttf"; } #end }


#else

#if (windows || mac || linux)





class __ASSET__font_mtf_epic_ttf extends openfl.text.Font { public function new () { super (); __fontPath = "font/MTF Epic.ttf"; fontName = "MTF Epic"; }}


#else


class __ASSET__font_mtf_epic_ttf extends openfl.text.Font { public function new () { super (); __fontPath = "font/MTF Epic.ttf"; fontName = "MTF Epic";  }}


#end

#end
