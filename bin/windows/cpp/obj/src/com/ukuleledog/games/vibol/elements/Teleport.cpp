#include <hxcpp.h>

#ifndef INCLUDED_com_ukuleledog_games_core_GameObject
#include <com/ukuleledog/games/core/GameObject.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_vibol_elements_Teleport
#include <com/ukuleledog/games/vibol/elements/Teleport.h>
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
namespace com{
namespace ukuleledog{
namespace games{
namespace vibol{
namespace elements{

Void Teleport_obj::__construct()
{
HX_STACK_FRAME("com.ukuleledog.games.vibol.elements.Teleport","new",0x9c3df50f,"com.ukuleledog.games.vibol.elements.Teleport.new","com/ukuleledog/games/vibol/elements/Teleport.hx",12,0x7fc52042)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(13)
	super::__construct();
	HX_STACK_LINE(15)
	this->get_graphics()->beginFill((int)255,null());
	HX_STACK_LINE(16)
	this->get_graphics()->drawRect((int)0,(int)0,(int)64,(int)128);
	HX_STACK_LINE(17)
	this->get_graphics()->endFill();
}
;
	return null();
}

//Teleport_obj::~Teleport_obj() { }

Dynamic Teleport_obj::__CreateEmpty() { return  new Teleport_obj; }
hx::ObjectPtr< Teleport_obj > Teleport_obj::__new()
{  hx::ObjectPtr< Teleport_obj > result = new Teleport_obj();
	result->__construct();
	return result;}

Dynamic Teleport_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Teleport_obj > result = new Teleport_obj();
	result->__construct();
	return result;}


Teleport_obj::Teleport_obj()
{
}

Dynamic Teleport_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Teleport_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Teleport_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(Teleport_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Teleport_obj::__mClass,"__mClass");
};

#endif

Class Teleport_obj::__mClass;

void Teleport_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ukuleledog.games.vibol.elements.Teleport"), hx::TCanCast< Teleport_obj> ,sStaticFields,sMemberFields,
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

void Teleport_obj::__boot()
{
}

} // end namespace com
} // end namespace ukuleledog
} // end namespace games
} // end namespace vibol
} // end namespace elements
