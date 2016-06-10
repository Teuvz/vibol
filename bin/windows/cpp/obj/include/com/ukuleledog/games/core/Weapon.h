#ifndef INCLUDED_com_ukuleledog_games_core_Weapon
#define INCLUDED_com_ukuleledog_games_core_Weapon

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/ukuleledog/games/core/AnimatedObject.h>
HX_DECLARE_CLASS4(com,ukuleledog,games,core,AnimatedObject)
HX_DECLARE_CLASS4(com,ukuleledog,games,core,GameObject)
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


class HXCPP_CLASS_ATTRIBUTES  Weapon_obj : public ::com::ukuleledog::games::core::AnimatedObject_obj{
	public:
		typedef ::com::ukuleledog::games::core::AnimatedObject_obj super;
		typedef Weapon_obj OBJ_;
		Weapon_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Weapon_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Weapon_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Weapon"); }

};

} // end namespace com
} // end namespace ukuleledog
} // end namespace games
} // end namespace core

#endif /* INCLUDED_com_ukuleledog_games_core_Weapon */ 
