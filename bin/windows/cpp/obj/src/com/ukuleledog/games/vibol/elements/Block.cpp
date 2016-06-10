#include <hxcpp.h>

#ifndef INCLUDED_com_ukuleledog_games_core_GameObject
#include <com/ukuleledog/games/core/GameObject.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_vibol_elements_Block
#include <com/ukuleledog/games/vibol/elements/Block.h>
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
#ifndef INCLUDED_openfl__v2_text_TextField
#include <openfl/_v2/text/TextField.h>
#endif
namespace com{
namespace ukuleledog{
namespace games{
namespace vibol{
namespace elements{

Void Block_obj::__construct(::String __o_type,::String name)
{
HX_STACK_FRAME("com.ukuleledog.games.vibol.elements.Block","new",0xeffb358d,"com.ukuleledog.games.vibol.elements.Block.new","com/ukuleledog/games/vibol/elements/Block.hx",16,0xa52600e2)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_type,"type")
HX_STACK_ARG(name,"name")
::String type = __o_type.Default(HX_CSTRING("block"));
{
	HX_STACK_LINE(17)
	super::__construct();
	HX_STACK_LINE(19)
	::openfl::_v2::display::BitmapData imageData = ::openfl::_v2::Assets_obj::getBitmapData(((HX_CSTRING("img/sprite/") + type) + HX_CSTRING(".png")),null());		HX_STACK_VAR(imageData,"imageData");
	HX_STACK_LINE(20)
	this->get_graphics()->beginBitmapFill(imageData,null(),null(),null());
	HX_STACK_LINE(23)
	this->get_graphics()->drawRect((int)0,(int)0,(int)64,(int)64);
	HX_STACK_LINE(24)
	this->get_graphics()->endFill();
	HX_STACK_LINE(26)
	if (((name != null()))){
		HX_STACK_LINE(28)
		::openfl::_v2::text::TextField textField = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(textField,"textField");
		HX_STACK_LINE(29)
		textField->set_text(name);
		HX_STACK_LINE(30)
		this->addChild(textField);
	}
}
;
	return null();
}

//Block_obj::~Block_obj() { }

Dynamic Block_obj::__CreateEmpty() { return  new Block_obj; }
hx::ObjectPtr< Block_obj > Block_obj::__new(::String __o_type,::String name)
{  hx::ObjectPtr< Block_obj > result = new Block_obj();
	result->__construct(__o_type,name);
	return result;}

Dynamic Block_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Block_obj > result = new Block_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


Block_obj::Block_obj()
{
}

Dynamic Block_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Block_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Block_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(Block_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Block_obj::__mClass,"__mClass");
};

#endif

Class Block_obj::__mClass;

void Block_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ukuleledog.games.vibol.elements.Block"), hx::TCanCast< Block_obj> ,sStaticFields,sMemberFields,
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

void Block_obj::__boot()
{
}

} // end namespace com
} // end namespace ukuleledog
} // end namespace games
} // end namespace vibol
} // end namespace elements
