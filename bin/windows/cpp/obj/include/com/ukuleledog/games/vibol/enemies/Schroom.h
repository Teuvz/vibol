#ifndef INCLUDED_com_ukuleledog_games_vibol_enemies_Schroom
#define INCLUDED_com_ukuleledog_games_vibol_enemies_Schroom

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/ukuleledog/games/core/Ennemy.h>
HX_DECLARE_CLASS4(com,ukuleledog,games,core,AnimatedObject)
HX_DECLARE_CLASS4(com,ukuleledog,games,core,Ennemy)
HX_DECLARE_CLASS4(com,ukuleledog,games,core,GameObject)
HX_DECLARE_CLASS5(com,ukuleledog,games,vibol,enemies,Schroom)
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
namespace enemies{


class HXCPP_CLASS_ATTRIBUTES  Schroom_obj : public ::com::ukuleledog::games::core::Ennemy_obj{
	public:
		typedef ::com::ukuleledog::games::core::Ennemy_obj super;
		typedef Schroom_obj OBJ_;
		Schroom_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Schroom_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Schroom_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Schroom"); }

};

} // end namespace com
} // end namespace ukuleledog
} // end namespace games
} // end namespace vibol
} // end namespace enemies

#endif /* INCLUDED_com_ukuleledog_games_vibol_enemies_Schroom */ 
