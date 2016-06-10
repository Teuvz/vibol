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
#ifndef INCLUDED_com_ukuleledog_games_core_Weapon
#include <com/ukuleledog/games/core/Weapon.h>
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
namespace core{

Void Hero_obj::__construct()
{
HX_STACK_FRAME("com.ukuleledog.games.core.Hero","new",0xeb4dc2b8,"com.ukuleledog.games.core.Hero.new","com/ukuleledog/games/core/Hero.hx",26,0x939140f8)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(27)
	super::__construct();
	HX_STACK_LINE(28)
	this->speed = (int)5;
	HX_STACK_LINE(30)
	::openfl::_v2::display::Sprite _g = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(30)
	this->topBumper = _g;
	HX_STACK_LINE(32)
	this->topBumper->get_graphics()->drawRect((int)0,(int)0,(int)49,(int)15);
	HX_STACK_LINE(34)
	this->topBumper->set_x(7.5);
	HX_STACK_LINE(35)
	this->addChild(this->topBumper);
	HX_STACK_LINE(37)
	::openfl::_v2::display::Sprite _g1 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(37)
	this->bottomBumpter = _g1;
	HX_STACK_LINE(39)
	this->bottomBumpter->get_graphics()->drawRect((int)0,(int)0,(int)49,(int)15);
	HX_STACK_LINE(41)
	this->bottomBumpter->set_x(7.5);
	HX_STACK_LINE(42)
	this->bottomBumpter->set_y((int)49);
	HX_STACK_LINE(43)
	this->addChild(this->bottomBumpter);
	HX_STACK_LINE(45)
	::openfl::_v2::display::Sprite _g2 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(45)
	this->leftBumper = _g2;
	HX_STACK_LINE(47)
	this->leftBumper->get_graphics()->drawRect((int)0,(int)0,(int)15,(int)49);
	HX_STACK_LINE(49)
	this->leftBumper->set_x((int)0);
	HX_STACK_LINE(50)
	this->leftBumper->set_y(7.5);
	HX_STACK_LINE(51)
	this->addChild(this->leftBumper);
	HX_STACK_LINE(53)
	::openfl::_v2::display::Sprite _g3 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(53)
	this->rightBumper = _g3;
	HX_STACK_LINE(55)
	this->rightBumper->get_graphics()->drawRect((int)0,(int)0,(int)15,(int)49);
	HX_STACK_LINE(57)
	this->rightBumper->set_x((int)49);
	HX_STACK_LINE(58)
	this->rightBumper->set_y(7.5);
	HX_STACK_LINE(59)
	this->addChild(this->rightBumper);
}
;
	return null();
}

//Hero_obj::~Hero_obj() { }

Dynamic Hero_obj::__CreateEmpty() { return  new Hero_obj; }
hx::ObjectPtr< Hero_obj > Hero_obj::__new()
{  hx::ObjectPtr< Hero_obj > result = new Hero_obj();
	result->__construct();
	return result;}

Dynamic Hero_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Hero_obj > result = new Hero_obj();
	result->__construct();
	return result;}

Void Hero_obj::setSpeed( int _speed){
{
		HX_STACK_FRAME("com.ukuleledog.games.core.Hero","setSpeed",0xcabe8f2d,"com.ukuleledog.games.core.Hero.setSpeed","com/ukuleledog/games/core/Hero.hx",93,0x939140f8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_speed,"_speed")
		HX_STACK_LINE(93)
		this->speed = _speed;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Hero_obj,setSpeed,(void))

int Hero_obj::getSpeed( ){
	HX_STACK_FRAME("com.ukuleledog.games.core.Hero","getSpeed",0x1c6135b9,"com.ukuleledog.games.core.Hero.getSpeed","com/ukuleledog/games/core/Hero.hx",98,0x939140f8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(98)
	return this->speed;
}


HX_DEFINE_DYNAMIC_FUNC0(Hero_obj,getSpeed,return )

::openfl::_v2::display::Sprite Hero_obj::getTopBumper( ){
	HX_STACK_FRAME("com.ukuleledog.games.core.Hero","getTopBumper",0x999fe98a,"com.ukuleledog.games.core.Hero.getTopBumper","com/ukuleledog/games/core/Hero.hx",103,0x939140f8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(103)
	return this->topBumper;
}


HX_DEFINE_DYNAMIC_FUNC0(Hero_obj,getTopBumper,return )

::openfl::_v2::display::Sprite Hero_obj::getBottomBumper( ){
	HX_STACK_FRAME("com.ukuleledog.games.core.Hero","getBottomBumper",0x5e611b3c,"com.ukuleledog.games.core.Hero.getBottomBumper","com/ukuleledog/games/core/Hero.hx",108,0x939140f8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(108)
	return this->bottomBumpter;
}


HX_DEFINE_DYNAMIC_FUNC0(Hero_obj,getBottomBumper,return )

::openfl::_v2::display::Sprite Hero_obj::getLeftBumper( ){
	HX_STACK_FRAME("com.ukuleledog.games.core.Hero","getLeftBumper",0xaad139d8,"com.ukuleledog.games.core.Hero.getLeftBumper","com/ukuleledog/games/core/Hero.hx",113,0x939140f8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(113)
	return this->leftBumper;
}


HX_DEFINE_DYNAMIC_FUNC0(Hero_obj,getLeftBumper,return )

::openfl::_v2::display::Sprite Hero_obj::getRightBumper( ){
	HX_STACK_FRAME("com.ukuleledog.games.core.Hero","getRightBumper",0x4b74ee91,"com.ukuleledog.games.core.Hero.getRightBumper","com/ukuleledog/games/core/Hero.hx",118,0x939140f8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(118)
	return this->rightBumper;
}


HX_DEFINE_DYNAMIC_FUNC0(Hero_obj,getRightBumper,return )


Hero_obj::Hero_obj()
{
}

void Hero_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Hero);
	HX_MARK_MEMBER_NAME(topBumper,"topBumper");
	HX_MARK_MEMBER_NAME(bottomBumpter,"bottomBumpter");
	HX_MARK_MEMBER_NAME(leftBumper,"leftBumper");
	HX_MARK_MEMBER_NAME(rightBumper,"rightBumper");
	HX_MARK_MEMBER_NAME(weapon,"weapon");
	::com::ukuleledog::games::core::AnimatedObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Hero_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(topBumper,"topBumper");
	HX_VISIT_MEMBER_NAME(bottomBumpter,"bottomBumpter");
	HX_VISIT_MEMBER_NAME(leftBumper,"leftBumper");
	HX_VISIT_MEMBER_NAME(rightBumper,"rightBumper");
	HX_VISIT_MEMBER_NAME(weapon,"weapon");
	::com::ukuleledog::games::core::AnimatedObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Hero_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"weapon") ) { return weapon; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setSpeed") ) { return setSpeed_dyn(); }
		if (HX_FIELD_EQ(inName,"getSpeed") ) { return getSpeed_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"topBumper") ) { return topBumper; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"leftBumper") ) { return leftBumper; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"rightBumper") ) { return rightBumper; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getTopBumper") ) { return getTopBumper_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bottomBumpter") ) { return bottomBumpter; }
		if (HX_FIELD_EQ(inName,"getLeftBumper") ) { return getLeftBumper_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getRightBumper") ) { return getRightBumper_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getBottomBumper") ) { return getBottomBumper_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Hero_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"weapon") ) { weapon=inValue.Cast< ::com::ukuleledog::games::core::Weapon >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"topBumper") ) { topBumper=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"leftBumper") ) { leftBumper=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"rightBumper") ) { rightBumper=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bottomBumpter") ) { bottomBumpter=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Hero_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("topBumper"));
	outFields->push(HX_CSTRING("bottomBumpter"));
	outFields->push(HX_CSTRING("leftBumper"));
	outFields->push(HX_CSTRING("rightBumper"));
	outFields->push(HX_CSTRING("weapon"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(Hero_obj,topBumper),HX_CSTRING("topBumper")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(Hero_obj,bottomBumpter),HX_CSTRING("bottomBumpter")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(Hero_obj,leftBumper),HX_CSTRING("leftBumper")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(Hero_obj,rightBumper),HX_CSTRING("rightBumper")},
	{hx::fsObject /*::com::ukuleledog::games::core::Weapon*/ ,(int)offsetof(Hero_obj,weapon),HX_CSTRING("weapon")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("topBumper"),
	HX_CSTRING("bottomBumpter"),
	HX_CSTRING("leftBumper"),
	HX_CSTRING("rightBumper"),
	HX_CSTRING("weapon"),
	HX_CSTRING("setSpeed"),
	HX_CSTRING("getSpeed"),
	HX_CSTRING("getTopBumper"),
	HX_CSTRING("getBottomBumper"),
	HX_CSTRING("getLeftBumper"),
	HX_CSTRING("getRightBumper"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Hero_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Hero_obj::__mClass,"__mClass");
};

#endif

Class Hero_obj::__mClass;

void Hero_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ukuleledog.games.core.Hero"), hx::TCanCast< Hero_obj> ,sStaticFields,sMemberFields,
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

void Hero_obj::__boot()
{
}

} // end namespace com
} // end namespace ukuleledog
} // end namespace games
} // end namespace core
