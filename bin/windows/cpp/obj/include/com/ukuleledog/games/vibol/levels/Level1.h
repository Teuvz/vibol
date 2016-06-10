#ifndef INCLUDED_com_ukuleledog_games_vibol_levels_Level1
#define INCLUDED_com_ukuleledog_games_vibol_levels_Level1

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/ukuleledog/games/vibol/levels/VibolLevel.h>
HX_DECLARE_CLASS4(com,ukuleledog,games,core,AnimatedObject)
HX_DECLARE_CLASS4(com,ukuleledog,games,core,Ennemy)
HX_DECLARE_CLASS4(com,ukuleledog,games,core,GameObject)
HX_DECLARE_CLASS4(com,ukuleledog,games,core,Level)
HX_DECLARE_CLASS5(com,ukuleledog,games,vibol,elements,Block)
HX_DECLARE_CLASS5(com,ukuleledog,games,vibol,elements,Coin)
HX_DECLARE_CLASS5(com,ukuleledog,games,vibol,elements,LongBlock)
HX_DECLARE_CLASS5(com,ukuleledog,games,vibol,enemies,Schroom)
HX_DECLARE_CLASS5(com,ukuleledog,games,vibol,levels,Level1)
HX_DECLARE_CLASS5(com,ukuleledog,games,vibol,levels,VibolLevel)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
namespace com{
namespace ukuleledog{
namespace games{
namespace vibol{
namespace levels{


class HXCPP_CLASS_ATTRIBUTES  Level1_obj : public ::com::ukuleledog::games::vibol::levels::VibolLevel_obj{
	public:
		typedef ::com::ukuleledog::games::vibol::levels::VibolLevel_obj super;
		typedef Level1_obj OBJ_;
		Level1_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Level1_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Level1_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Level1"); }

		::com::ukuleledog::games::vibol::elements::Block block1;
		::com::ukuleledog::games::vibol::elements::Block block2;
		::com::ukuleledog::games::vibol::elements::Block block3;
		::com::ukuleledog::games::vibol::elements::Block block4;
		::com::ukuleledog::games::vibol::elements::LongBlock floor1;
		::com::ukuleledog::games::vibol::elements::LongBlock floor2;
		::com::ukuleledog::games::vibol::elements::LongBlock floor3;
		::com::ukuleledog::games::vibol::enemies::Schroom ennemy1;
		::com::ukuleledog::games::vibol::enemies::Schroom ennemy2;
		::com::ukuleledog::games::vibol::elements::Coin coin;
};

} // end namespace com
} // end namespace ukuleledog
} // end namespace games
} // end namespace vibol
} // end namespace levels

#endif /* INCLUDED_com_ukuleledog_games_vibol_levels_Level1 */ 
