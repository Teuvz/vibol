#ifndef INCLUDED_com_ukuleledog_games_core_AnimatedObject
#define INCLUDED_com_ukuleledog_games_core_AnimatedObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/ukuleledog/games/core/GameObject.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS4(com,ukuleledog,games,core,AnimatedObject)
HX_DECLARE_CLASS4(com,ukuleledog,games,core,GameObject)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,utils,Timer)
namespace com{
namespace ukuleledog{
namespace games{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  AnimatedObject_obj : public ::com::ukuleledog::games::core::GameObject_obj{
	public:
		typedef ::com::ukuleledog::games::core::GameObject_obj super;
		typedef AnimatedObject_obj OBJ_;
		AnimatedObject_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AnimatedObject_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AnimatedObject_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AnimatedObject"); }

		::openfl::_v2::utils::Timer animationTimer;
		::String currentAnimation;
		int currentFrame;
		::haxe::ds::StringMap animationPositionsX;
		::haxe::ds::StringMap animationPositionsY;
		::haxe::ds::StringMap animationLengths;
		::haxe::ds::StringMap animationHeights;
		::haxe::ds::StringMap animationWidths;
		::haxe::ds::StringMap animationSpeeds;
		::haxe::ds::StringMap animationLooping;
		int currentAnimationX;
		int currentAnimationY;
		int currentAnimationLength;
		int currentAnimationHeight;
		int currentAnimationWidth;
		Float currentAnimationSpeed;
		bool currentAnimationLoop;
		virtual Void setAnimation( ::String name);
		Dynamic setAnimation_dyn();

		virtual Void createAnimation( ::String name,int startX,int startY,int length,int height,int width,hx::Null< Float >  speed,hx::Null< bool >  looping);
		Dynamic createAnimation_dyn();

		virtual Void animate( ::String name);
		Dynamic animate_dyn();

		virtual Void animationLoop( ::openfl::_v2::events::Event e);
		Dynamic animationLoop_dyn();

		virtual Void kill( ::openfl::_v2::events::Event e);
		Dynamic kill_dyn();

};

} // end namespace com
} // end namespace ukuleledog
} // end namespace games
} // end namespace core

#endif /* INCLUDED_com_ukuleledog_games_core_AnimatedObject */ 
