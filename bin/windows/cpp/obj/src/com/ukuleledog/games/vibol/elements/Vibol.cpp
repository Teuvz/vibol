#include <hxcpp.h>

#ifndef INCLUDED_com_ukuleledog_games_core_AnimatedObject
#include <com/ukuleledog/games/core/AnimatedObject.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_core_GameObject
#include <com/ukuleledog/games/core/GameObject.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_core_Hero
#include <com/ukuleledog/games/core/Hero.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_vibol_elements_Vibol
#include <com/ukuleledog/games/vibol/elements/Vibol.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Graphics
#include <openfl/_v2/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Matrix
#include <openfl/_v2/geom/Matrix.h>
#endif
namespace com{
namespace ukuleledog{
namespace games{
namespace vibol{
namespace elements{

Void Vibol_obj::__construct()
{
HX_STACK_FRAME("com.ukuleledog.games.vibol.elements.Vibol","new",0x0257f46c,"com.ukuleledog.games.vibol.elements.Vibol.new","com/ukuleledog/games/vibol/elements/Vibol.hx",18,0x572b02e3)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(19)
	super::__construct();
	HX_STACK_LINE(21)
	::openfl::_v2::display::BitmapData imageData = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/sprite/vibol.png"),null());		HX_STACK_VAR(imageData,"imageData");
	HX_STACK_LINE(22)
	this->get_graphics()->beginBitmapFill(imageData,null(),null(),null());
	HX_STACK_LINE(25)
	this->get_graphics()->drawRect((int)0,(int)0,(int)64,(int)64);
	HX_STACK_LINE(26)
	this->get_graphics()->endFill();
}
;
	return null();
}

//Vibol_obj::~Vibol_obj() { }

Dynamic Vibol_obj::__CreateEmpty() { return  new Vibol_obj; }
hx::ObjectPtr< Vibol_obj > Vibol_obj::__new()
{  hx::ObjectPtr< Vibol_obj > result = new Vibol_obj();
	result->__construct();
	return result;}

Dynamic Vibol_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vibol_obj > result = new Vibol_obj();
	result->__construct();
	return result;}


Vibol_obj::Vibol_obj()
{
}

Dynamic Vibol_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Vibol_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Vibol_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vibol_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vibol_obj::__mClass,"__mClass");
};

#endif

Class Vibol_obj::__mClass;

void Vibol_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ukuleledog.games.vibol.elements.Vibol"), hx::TCanCast< Vibol_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Vibol_obj::__boot()
{
}

} // end namespace com
} // end namespace ukuleledog
} // end namespace games
} // end namespace vibol
} // end namespace elements
