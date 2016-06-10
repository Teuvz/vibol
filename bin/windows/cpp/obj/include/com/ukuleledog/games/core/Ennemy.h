#ifndef INCLUDED_com_ukuleledog_games_core_Ennemy
#define INCLUDED_com_ukuleledog_games_core_Ennemy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/ukuleledog/games/core/AnimatedObject.h>
HX_DECLARE_CLASS4(com,ukuleledog,games,core,AnimatedObject)
HX_DECLARE_CLASS4(com,ukuleledog,games,core,Ennemy)
HX_DECLARE_CLASS4(com,ukuleledog,games,core,GameObject)
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
namespace core{


class HXCPP_CLASS_ATTRIBUTES  Ennemy_obj : public ::com::ukuleledog::games::core::AnimatedObject_obj{
	public:
		typedef ::com::ukuleledog::games::core::AnimatedObject_obj super;
		typedef Ennemy_obj OBJ_;
		Ennemy_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Ennemy_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Ennemy_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Ennemy"); }

		int health;
		bool untouchable;
		bool roaming;
		int roamingDistance;
		Float roamingMaxLeft;
		Float roamingMaxRight;
		::String roamingDirection;
		virtual Void setRoaming( int block,::String _direction);
		Dynamic setRoaming_dyn();

		virtual Void roam( );
		Dynamic roam_dyn();

		virtual int getHealth( );
		Dynamic getHealth_dyn();

		virtual Void setHealth( int health);
		Dynamic setHealth_dyn();

		virtual bool isTouchable( );
		Dynamic isTouchable_dyn();

		virtual Void decreaseHealth( );
		Dynamic decreaseHealth_dyn();

		virtual Void flash( ::openfl::_v2::events::Event e);
		Dynamic flash_dyn();

};

} // end namespace com
} // end namespace ukuleledog
} // end namespace games
} // end namespace core

#endif /* INCLUDED_com_ukuleledog_games_core_Ennemy */ 
