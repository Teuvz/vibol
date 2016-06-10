#ifndef INCLUDED_com_ukuleledog_games_vibol_states_GameState
#define INCLUDED_com_ukuleledog_games_vibol_states_GameState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/ukuleledog/games/core/State.h>
HX_DECLARE_CLASS4(com,ukuleledog,games,core,Level)
HX_DECLARE_CLASS4(com,ukuleledog,games,core,State)
HX_DECLARE_CLASS5(com,ukuleledog,games,vibol,states,GameState)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,KeyboardEvent)
HX_DECLARE_CLASS2(openfl,events,JoystickEvent)
namespace com{
namespace ukuleledog{
namespace games{
namespace vibol{
namespace states{


class HXCPP_CLASS_ATTRIBUTES  GameState_obj : public ::com::ukuleledog::games::core::State_obj{
	public:
		typedef ::com::ukuleledog::games::core::State_obj super;
		typedef GameState_obj OBJ_;
		GameState_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GameState_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GameState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GameState"); }

		Array< bool > keysPressed;
		int levelNb;
		::com::ukuleledog::games::core::Level level;
		virtual Void init( ::openfl::_v2::events::Event e);
		Dynamic init_dyn();

		virtual Void joystickButton( ::openfl::events::JoystickEvent e);
		Dynamic joystickButton_dyn();

		virtual Void joystickAxis( ::openfl::events::JoystickEvent e);
		Dynamic joystickAxis_dyn();

		virtual Void changeLevel( ::openfl::_v2::events::Event e);
		Dynamic changeLevel_dyn();

		virtual Void changeLevelReady( );
		Dynamic changeLevelReady_dyn();

		virtual Void changeLevelEnd( );
		Dynamic changeLevelEnd_dyn();

		virtual Void loop( ::openfl::_v2::events::Event e);
		Dynamic loop_dyn();

		virtual Void keyDownHandler( ::openfl::_v2::events::KeyboardEvent e);
		Dynamic keyDownHandler_dyn();

		virtual Void keyUpHandler( ::openfl::_v2::events::KeyboardEvent e);
		Dynamic keyUpHandler_dyn();

};

} // end namespace com
} // end namespace ukuleledog
} // end namespace games
} // end namespace vibol
} // end namespace states

#endif /* INCLUDED_com_ukuleledog_games_vibol_states_GameState */ 
