#ifndef INCLUDED_com_ukuleledog_games_core_GameObject
#define INCLUDED_com_ukuleledog_games_core_GameObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
HX_DECLARE_CLASS4(com,ukuleledog,games,core,GameObject)
HX_DECLARE_CLASS3(openfl,_v2,display,BitmapData)
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


class HXCPP_CLASS_ATTRIBUTES  GameObject_obj : public ::openfl::_v2::display::Sprite_obj{
	public:
		typedef ::openfl::_v2::display::Sprite_obj super;
		typedef GameObject_obj OBJ_;
		GameObject_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GameObject_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GameObject_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GameObject"); }

		::openfl::_v2::display::BitmapData bmd;
		bool colider;
		bool isMoving;
		bool moving;
		Float originalX;
		Float originalY;
		Float finalX;
		Float finalY;
		int speed;
		bool movingOriginal;
		virtual Void setMoving( int _speed,int _finalX,int _finalY);
		Dynamic setMoving_dyn();

		virtual Void move( );
		Dynamic move_dyn();

		virtual Void moveEnd( );
		Dynamic moveEnd_dyn();

		virtual Void setColider( bool value);
		Dynamic setColider_dyn();

		virtual bool isColider( );
		Dynamic isColider_dyn();

		virtual bool mustTestCollision( Float _x,Float _y);
		Dynamic mustTestCollision_dyn();

};

} // end namespace com
} // end namespace ukuleledog
} // end namespace games
} // end namespace core

#endif /* INCLUDED_com_ukuleledog_games_core_GameObject */ 
