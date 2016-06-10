#ifndef INCLUDED_com_ukuleledog_games_vibol_Main
#define INCLUDED_com_ukuleledog_games_vibol_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
HX_DECLARE_CLASS3(com,kircode,debug,FPS_Mem)
HX_DECLARE_CLASS4(com,ukuleledog,games,core,State)
HX_DECLARE_CLASS4(com,ukuleledog,games,vibol,Main)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,text,TextField)
namespace com{
namespace ukuleledog{
namespace games{
namespace vibol{


class HXCPP_CLASS_ATTRIBUTES  Main_obj : public ::openfl::_v2::display::Sprite_obj{
	public:
		typedef ::openfl::_v2::display::Sprite_obj super;
		typedef Main_obj OBJ_;
		Main_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Main_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Main_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Main"); }

		bool inited;
		::com::ukuleledog::games::core::State currentState;
		::com::kircode::debug::FPS_Mem fps;
		virtual Void resize( Dynamic e);
		Dynamic resize_dyn();

		virtual Void init( );
		Dynamic init_dyn();

		virtual Void startGame( ::openfl::_v2::events::Event e);
		Dynamic startGame_dyn();

		virtual Void added( Dynamic e);
		Dynamic added_dyn();

		static Void main( );
		static Dynamic main_dyn();

};

} // end namespace com
} // end namespace ukuleledog
} // end namespace games
} // end namespace vibol

#endif /* INCLUDED_com_ukuleledog_games_vibol_Main */ 
