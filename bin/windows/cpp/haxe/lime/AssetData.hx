package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("img/background.png", "img/background.png");
			type.set ("img/background.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/background2.png", "img/background2.png");
			type.set ("img/background2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/background3.png", "img/background3.png");
			type.set ("img/background3.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/background4.png", "img/background4.png");
			type.set ("img/background4.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/background5.png", "img/background5.png");
			type.set ("img/background5.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/hero.png", "img/hero.png");
			type.set ("img/hero.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/intro-adventure.png", "img/intro-adventure.png");
			type.set ("img/intro-adventure.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/intro-epic.png", "img/intro-epic.png");
			type.set ("img/intro-epic.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/intro-quest.png", "img/intro-quest.png");
			type.set ("img/intro-quest.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/intro-super.png", "img/intro-super.png");
			type.set ("img/intro-super.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/intro-vibol.png", "img/intro-vibol.png");
			type.set ("img/intro-vibol.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/intro1.png", "img/intro1.png");
			type.set ("img/intro1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/intro2.png", "img/intro2.png");
			type.set ("img/intro2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/introbg1.png", "img/introbg1.png");
			type.set ("img/introbg1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/introbg2.png", "img/introbg2.png");
			type.set ("img/introbg2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/sprite/block-forest.png", "img/sprite/block-forest.png");
			type.set ("img/sprite/block-forest.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/sprite/block.png", "img/sprite/block.png");
			type.set ("img/sprite/block.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/sprite/boss.png", "img/sprite/boss.png");
			type.set ("img/sprite/boss.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/sprite/coin.png", "img/sprite/coin.png");
			type.set ("img/sprite/coin.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/sprite/floor-forest.png", "img/sprite/floor-forest.png");
			type.set ("img/sprite/floor-forest.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/sprite/frog.png", "img/sprite/frog.png");
			type.set ("img/sprite/frog.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/sprite/longblock.png", "img/sprite/longblock.png");
			type.set ("img/sprite/longblock.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/sprite/orc.png", "img/sprite/orc.png");
			type.set ("img/sprite/orc.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/sprite/schroom.png", "img/sprite/schroom.png");
			type.set ("img/sprite/schroom.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/sprite/sword.png", "img/sprite/sword.png");
			type.set ("img/sprite/sword.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/sprite/vibol.png", "img/sprite/vibol.png");
			type.set ("img/sprite/vibol.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("font/MTF Epic.ttf", "font/MTF Epic.ttf");
			type.set ("font/MTF Epic.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
