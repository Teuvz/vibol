#ifndef INCLUDED_com_ukuleledog_games_vibol_elements_LongBlock
#define INCLUDED_com_ukuleledog_games_vibol_elements_LongBlock

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/ukuleledog/games/core/GameObject.h>
HX_DECLARE_CLASS4(com,ukuleledog,games,core,GameObject)
HX_DECLARE_CLASS5(com,ukuleledog,games,vibol,elements,LongBlock)
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


class HXCPP_CLASS_ATTRIBUTES  LongBlock_obj : public ::com::ukuleledog::games::core::GameObject_obj{
	public:
		typedef ::com::ukuleledog::games::core::GameObject_obj super;
		typedef LongBlock_obj OBJ_;
		LongBlock_obj();
		Void __construct(Float _length,::String __o_type);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< LongBlock_obj > __new(Float _length,::String __o_type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LongBlock_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("LongBlock"); }

		virtual bool mustTestCollision( Float _x,Float _y);

};

} // end namespace com
} // end namespace ukuleledog
} // end namespace games
} // end namespace vibol
} // end namespace elements

#endif /* INCLUDED_com_ukuleledog_games_vibol_elements_LongBlock */ 
