#ifndef INCLUDED_com_ukuleledog_games_core_Hero
#define INCLUDED_com_ukuleledog_games_core_Hero

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/ukuleledog/games/core/AnimatedObject.h>
HX_DECLARE_CLASS4(com,ukuleledog,games,core,AnimatedObject)
HX_DECLARE_CLASS4(com,ukuleledog,games,core,GameObject)
HX_DECLARE_CLASS4(com,ukuleledog,games,core,Hero)
HX_DECLARE_CLASS4(com,ukuleledog,games,core,Weapon)
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
namespace core{


class HXCPP_CLASS_ATTRIBUTES  Hero_obj : public ::com::ukuleledog::games::core::AnimatedObject_obj{
	public:
		typedef ::com::ukuleledog::games::core::AnimatedObject_obj super;
		typedef Hero_obj OBJ_;
		Hero_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Hero_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Hero_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Hero"); }

		::openfl::_v2::display::Sprite topBumper;
		::openfl::_v2::display::Sprite bottomBumpter;
		::openfl::_v2::display::Sprite leftBumper;
		::openfl::_v2::display::Sprite rightBumper;
		::com::ukuleledog::games::core::Weapon weapon;
		virtual Void setSpeed( int _speed);
		Dynamic setSpeed_dyn();

		virtual int getSpeed( );
		Dynamic getSpeed_dyn();

		virtual ::openfl::_v2::display::Sprite getTopBumper( );
		Dynamic getTopBumper_dyn();

		virtual ::openfl::_v2::display::Sprite getBottomBumper( );
		Dynamic getBottomBumper_dyn();

		virtual ::openfl::_v2::display::Sprite getLeftBumper( );
		Dynamic getLeftBumper_dyn();

		virtual ::openfl::_v2::display::Sprite getRightBumper( );
		Dynamic getRightBumper_dyn();

};

} // end namespace com
} // end namespace ukuleledog
} // end namespace games
} // end namespace core

#endif /* INCLUDED_com_ukuleledog_games_core_Hero */ 
