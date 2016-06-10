#ifndef INCLUDED_com_ukuleledog_games_vibol_levels_VibolLevel
#define INCLUDED_com_ukuleledog_games_vibol_levels_VibolLevel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/ukuleledog/games/core/Level.h>
HX_DECLARE_CLASS4(com,ukuleledog,games,core,GameObject)
HX_DECLARE_CLASS4(com,ukuleledog,games,core,Level)
HX_DECLARE_CLASS5(com,ukuleledog,games,vibol,elements,Teleport)
HX_DECLARE_CLASS5(com,ukuleledog,games,vibol,levels,VibolLevel)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
namespace com{
namespace ukuleledog{
namespace games{
namespace vibol{
namespace levels{


class HXCPP_CLASS_ATTRIBUTES  VibolLevel_obj : public ::com::ukuleledog::games::core::Level_obj{
	public:
		typedef ::com::ukuleledog::games::core::Level_obj super;
		typedef VibolLevel_obj OBJ_;
		VibolLevel_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< VibolLevel_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VibolLevel_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("VibolLevel"); }

		::com::ukuleledog::games::vibol::elements::Teleport endTeleport;
		int fallingSpeed;
		int minFallingSpeed;
		int maxFallingSpeed;
		virtual Void activateFighting( );
		Dynamic activateFighting_dyn();

		virtual Void loop( ::openfl::_v2::events::Event e);

		virtual Void jump( );

		virtual Void endJump( );
		Dynamic endJump_dyn();

		virtual Void action( );

		virtual Void animateWeapon( );

		virtual Void start( );

};

} // end namespace com
} // end namespace ukuleledog
} // end namespace games
} // end namespace vibol
} // end namespace levels

#endif /* INCLUDED_com_ukuleledog_games_vibol_levels_VibolLevel */ 
