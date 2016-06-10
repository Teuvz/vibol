#include <hxcpp.h>

#ifndef INCLUDED_com_ukuleledog_games_core_GameObject
#include <com/ukuleledog/games/core/GameObject.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_vibol_elements_GameEvent
#include <com/ukuleledog/games/vibol/elements/GameEvent.h>
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

Void GameEvent_obj::__construct(::String name)
{
HX_STACK_FRAME("com.ukuleledog.games.vibol.elements.GameEvent","new",0xcbf1cf88,"com.ukuleledog.games.vibol.elements.GameEvent.new","com/ukuleledog/games/vibol/elements/GameEvent.hx",14,0xc17a1ac7)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
{
	HX_STACK_LINE(15)
	super::__construct();
	HX_STACK_LINE(16)
	this->get_graphics()->drawRect((int)0,(int)0,(int)128,(int)128);
	HX_STACK_LINE(17)
	this->_name = name;
}
;
	return null();
}

//GameEvent_obj::~GameEvent_obj() { }

Dynamic GameEvent_obj::__CreateEmpty() { return  new GameEvent_obj; }
hx::ObjectPtr< GameEvent_obj > GameEvent_obj::__new(::String name)
{  hx::ObjectPtr< GameEvent_obj > result = new GameEvent_obj();
	result->__construct(name);
	return result;}

Dynamic GameEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameEvent_obj > result = new GameEvent_obj();
	result->__construct(inArgs[0]);
	return result;}

::String GameEvent_obj::getName( ){
	HX_STACK_FRAME("com.ukuleledog.games.vibol.elements.GameEvent","getName",0xaf92d529,"com.ukuleledog.games.vibol.elements.GameEvent.getName","com/ukuleledog/games/vibol/elements/GameEvent.hx",22,0xc17a1ac7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(22)
	return this->_name;
}


HX_DEFINE_DYNAMIC_FUNC0(GameEvent_obj,getName,return )


GameEvent_obj::GameEvent_obj()
{
}

void GameEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameEvent);
	HX_MARK_MEMBER_NAME(_name,"_name");
	::com::ukuleledog::games::core::GameObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_name,"_name");
	::com::ukuleledog::games::core::GameObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GameEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_name") ) { return _name; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return getName_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_name") ) { _name=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_name"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(GameEvent_obj,_name),HX_CSTRING("_name")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_name"),
	HX_CSTRING("getName"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameEvent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameEvent_obj::__mClass,"__mClass");
};

#endif

Class GameEvent_obj::__mClass;

void GameEvent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ukuleledog.games.vibol.elements.GameEvent"), hx::TCanCast< GameEvent_obj> ,sStaticFields,sMemberFields,
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

void GameEvent_obj::__boot()
{
}

} // end namespace com
} // end namespace ukuleledog
} // end namespace games
} // end namespace vibol
} // end namespace elements
