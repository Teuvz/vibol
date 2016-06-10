#ifndef INCLUDED_com_ukuleledog_games_vibol_levels_Level2
#define INCLUDED_com_ukuleledog_games_vibol_levels_Level2

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/ukuleledog/games/vibol/levels/VibolLevel.h>
HX_DECLARE_CLASS4(com,ukuleledog,games,core,AnimatedObject)
HX_DECLARE_CLASS4(com,ukuleledog,games,core,Ennemy)
HX_DECLARE_CLASS4(com,ukuleledog,games,core,GameObject)
HX_DECLARE_CLASS4(com,ukuleledog,games,core,Level)
HX_DECLARE_CLASS5(com,ukuleledog,games,vibol,elements,Block)
HX_DECLARE_CLASS5(com,ukuleledog,games,vibol,elements,LongBlock)
HX_DECLARE_CLASS5(com,ukuleledog,games,vibol,enemies,Frog)
HX_DECLARE_CLASS5(com,ukuleledog,games,vibol,levels,Level2)
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


class HXCPP_CLASS_ATTRIBUTES  Level2_obj : public ::com::ukuleledog::games::vibol::levels::VibolLevel_obj{
	public:
		typedef ::com::ukuleledog::games::vibol::levels::VibolLevel_obj super;
		typedef Level2_obj OBJ_;
		Level2_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Level2_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Level2_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Level2"); }

		::com::ukuleledog::games::vibol::elements::LongBlock floor1;
		::com::ukuleledog::games::vibol::enemies::Frog frog1;
		::com::ukuleledog::games::vibol::enemies::Frog frog2;
		::com::ukuleledog::games::vibol::elements::Block block1;
		::com::ukuleledog::games::vibol::elements::Block block2;
		::com::ukuleledog::games::vibol::elements::Block block3;
		::com::ukuleledog::games::vibol::elements::Block block4;
		::com::ukuleledog::games::vibol::elements::Block block5;
		::com::ukuleledog::games::vibol::elements::Block block6;
		::com::ukuleledog::games::vibol::elements::Block block7;
		::com::ukuleledog::games::vibol::elements::Block block8;
		::com::ukuleledog::games::vibol::elements::LongBlock floor2;
		::com::ukuleledog::games::vibol::enemies::Frog frog3;
		::com::ukuleledog::games::vibol::enemies::Frog frog4;
};

} // end namespace com
} // end namespace ukuleledog
} // end namespace games
} // end namespace vibol
} // end namespace levels

#endif /* INCLUDED_com_ukuleledog_games_vibol_levels_Level2 */ 
