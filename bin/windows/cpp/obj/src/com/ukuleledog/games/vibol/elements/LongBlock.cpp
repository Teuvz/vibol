#include <hxcpp.h>

#ifndef INCLUDED_com_ukuleledog_games_core_GameObject
#include <com/ukuleledog/games/core/GameObject.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_vibol_elements_LongBlock
#include <com/ukuleledog/games/vibol/elements/LongBlock.h>
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

Void LongBlock_obj::__construct(Float _length,::String __o_type)
{
HX_STACK_FRAME("com.ukuleledog.games.vibol.elements.LongBlock","new",0x19215f71,"com.ukuleledog.games.vibol.elements.LongBlock.new","com/ukuleledog/games/vibol/elements/LongBlock.hx",15,0xd556bafe)
HX_STACK_THIS(this)
HX_STACK_ARG(_length,"_length")
HX_STACK_ARG(__o_type,"type")
::String type = __o_type.Default(HX_CSTRING("longblock"));
{
	HX_STACK_LINE(16)
	super::__construct();
	HX_STACK_LINE(18)
	::openfl::_v2::display::BitmapData imageData = ::openfl::_v2::Assets_obj::getBitmapData(((HX_CSTRING("img/sprite/") + type) + HX_CSTRING(".png")),null());		HX_STACK_VAR(imageData,"imageData");
	HX_STACK_LINE(19)
	this->get_graphics()->beginBitmapFill(imageData,null(),true,null());
	HX_STACK_LINE(22)
	this->get_graphics()->drawRect((int)0,(int)0,(_length * (int)64),(int)64);
	HX_STACK_LINE(23)
	this->get_graphics()->endFill();
}
;
	return null();
}

//LongBlock_obj::~LongBlock_obj() { }

Dynamic LongBlock_obj::__CreateEmpty() { return  new LongBlock_obj; }
hx::ObjectPtr< LongBlock_obj > LongBlock_obj::__new(Float _length,::String __o_type)
{  hx::ObjectPtr< LongBlock_obj > result = new LongBlock_obj();
	result->__construct(_length,__o_type);
	return result;}

Dynamic LongBlock_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LongBlock_obj > result = new LongBlock_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

bool LongBlock_obj::mustTestCollision( Float _x,Float _y){
	HX_STACK_FRAME("com.ukuleledog.games.vibol.elements.LongBlock","mustTestCollision",0xbd4aa0c8,"com.ukuleledog.games.vibol.elements.LongBlock.mustTestCollision","com/ukuleledog/games/vibol/elements/LongBlock.hx",28,0xd556bafe)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_LINE(28)
	return true;
}



LongBlock_obj::LongBlock_obj()
{
}

Dynamic LongBlock_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"mustTestCollision") ) { return mustTestCollision_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LongBlock_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void LongBlock_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("mustTestCollision"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LongBlock_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LongBlock_obj::__mClass,"__mClass");
};

#endif

Class LongBlock_obj::__mClass;

void LongBlock_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ukuleledog.games.vibol.elements.LongBlock"), hx::TCanCast< LongBlock_obj> ,sStaticFields,sMemberFields,
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

void LongBlock_obj::__boot()
{
}

} // end namespace com
} // end namespace ukuleledog
} // end namespace games
} // end namespace vibol
} // end namespace elements
