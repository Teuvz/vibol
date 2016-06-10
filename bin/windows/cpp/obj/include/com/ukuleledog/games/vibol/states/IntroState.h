#ifndef INCLUDED_com_ukuleledog_games_vibol_states_IntroState
#define INCLUDED_com_ukuleledog_games_vibol_states_IntroState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/ukuleledog/games/core/State.h>
HX_DECLARE_CLASS4(com,ukuleledog,games,core,State)
HX_DECLARE_CLASS5(com,ukuleledog,games,vibol,states,IntroState)
HX_DECLARE_CLASS3(openfl,_v2,display,Bitmap)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,KeyboardEvent)
HX_DECLARE_CLASS3(openfl,_v2,text,TextField)
HX_DECLARE_CLASS3(openfl,_v2,text,TextFormat)
HX_DECLARE_CLASS3(openfl,_v2,utils,Timer)
HX_DECLARE_CLASS2(openfl,events,TimerEvent)
namespace com{
namespace ukuleledog{
namespace games{
namespace vibol{
namespace states{


class HXCPP_CLASS_ATTRIBUTES  IntroState_obj : public ::com::ukuleledog::games::core::State_obj{
	public:
		typedef ::com::ukuleledog::games::core::State_obj super;
		typedef IntroState_obj OBJ_;
		IntroState_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< IntroState_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IntroState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("IntroState"); }

		::openfl::_v2::display::Bitmap introbg1;
		::openfl::_v2::display::Bitmap introbg2;
		::openfl::_v2::display::Bitmap intro1;
		::openfl::_v2::display::Bitmap intro2;
		::openfl::_v2::display::Bitmap supert;
		::openfl::_v2::display::Bitmap epic;
		::openfl::_v2::display::Bitmap vibol;
		::openfl::_v2::display::Bitmap quest;
		::openfl::_v2::display::Bitmap adventure;
		::openfl::_v2::utils::Timer introTimer;
		::openfl::_v2::text::TextFormat defaultFormat;
		::openfl::_v2::text::TextField startTextField;
		::openfl::_v2::text::TextField storyTextField1;
		::openfl::_v2::text::TextField storyTextField2;
		::openfl::_v2::text::TextField storyTextField3;
		::openfl::_v2::utils::Timer textTimer;
		int storyStep;
		virtual Void init( ::openfl::_v2::events::Event e);
		Dynamic init_dyn();

		virtual Void startAnimation( );
		Dynamic startAnimation_dyn();

		virtual Void endAnimation( );
		Dynamic endAnimation_dyn();

		virtual Void introLoop( ::openfl::events::TimerEvent e);
		Dynamic introLoop_dyn();

		virtual Void textLoop( ::openfl::events::TimerEvent e);
		Dynamic textLoop_dyn();

		virtual Void startStory( ::openfl::_v2::events::KeyboardEvent e);
		Dynamic startStory_dyn();

};

} // end namespace com
} // end namespace ukuleledog
} // end namespace games
} // end namespace vibol
} // end namespace states

#endif /* INCLUDED_com_ukuleledog_games_vibol_states_IntroState */ 
