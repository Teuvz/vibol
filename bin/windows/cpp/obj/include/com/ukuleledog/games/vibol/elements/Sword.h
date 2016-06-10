#ifndef INCLUDED_com_ukuleledog_games_vibol_elements_Sword
#define INCLUDED_com_ukuleledog_games_vibol_elements_Sword

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/ukuleledog/games/core/Weapon.h>
HX_DECLARE_CLASS4(com,ukuleledog,games,core,AnimatedObject)
HX_DECLARE_CLASS4(com,ukuleledog,games,core,GameObject)
HX_DECLARE_CLASS4(com,ukuleledog,games,core,Weapon)
HX_DECLARE_CLASS5(com,ukuleledog,games,vibol,elements,Sword)
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
namespace elements{


class HXCPP_CLASS_ATTRIBUTES  Sword_obj : public ::com::ukuleledog::games::core::Weapon_obj{
	public:
		typedef ::com::ukuleledog::games::core::Weapon_obj super;
		typedef Sword_obj OBJ_;
		Sword_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Sword_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sword_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Sword"); }

};

} // end namespace com
} // end namespace ukuleledog
} // end namespace games
} // end namespace vibol
} // end namespace elements

#endif /* INCLUDED_com_ukuleledog_games_vibol_elements_Sword */ 
