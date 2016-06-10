#ifndef INCLUDED_com_ukuleledog_games_vibol_levels_Level3
#define INCLUDED_com_ukuleledog_games_vibol_levels_Level3

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/ukuleledog/games/vibol/levels/VibolLevel.h>
HX_DECLARE_CLASS4(com,ukuleledog,games,core,GameObject)
HX_DECLARE_CLASS4(com,ukuleledog,games,core,Level)
HX_DECLARE_CLASS5(com,ukuleledog,games,vibol,elements,GameEvent)
HX_DECLARE_CLASS5(com,ukuleledog,games,vibol,elements,LongBlock)
HX_DECLARE_CLASS5(com,ukuleledog,games,vibol,levels,Level3)
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


class HXCPP_CLASS_ATTRIBUTES  Level3_obj : public ::com::ukuleledog::games::vibol::levels::VibolLevel_obj{
	public:
		typedef ::com::ukuleledog::games::vibol::levels::VibolLevel_obj super;
		typedef Level3_obj OBJ_;
		Level3_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Level3_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Level3_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Level3"); }

		::com::ukuleledog::games::vibol::elements::LongBlock floor1;
		::com::ukuleledog::games::vibol::elements::LongBlock floor2;
		::com::ukuleledog::games::vibol::elements::GameEvent event;
		::com::ukuleledog::games::vibol::elements::GameEvent event2;
		virtual Void manageEvent( ::com::ukuleledog::games::vibol::elements::GameEvent _gameEvent);

};

} // end namespace com
} // end namespace ukuleledog
} // end namespace games
} // end namespace vibol
} // end namespace levels

#endif /* INCLUDED_com_ukuleledog_games_vibol_levels_Level3 */ 
