#include <hxcpp.h>

#ifndef INCLUDED_com_ukuleledog_games_core_GameObject
#include <com/ukuleledog/games/core/GameObject.h>
#endif
#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Linear
#include <motion/easing/Linear.h>
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

Void GameObject_obj::__construct()
{
HX_STACK_FRAME("com.ukuleledog.games.core.GameObject","new",0x75aa0b8f,"com.ukuleledog.games.core.GameObject.new","com/ukuleledog/games/core/GameObject.hx",13,0xac179001)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(26)
	this->movingOriginal = true;
	HX_STACK_LINE(20)
	this->moving = false;
	HX_STACK_LINE(19)
	this->isMoving = false;
	HX_STACK_LINE(18)
	this->colider = true;
	HX_STACK_LINE(30)
	super::__construct();
}
;
	return null();
}

//GameObject_obj::~GameObject_obj() { }

Dynamic GameObject_obj::__CreateEmpty() { return  new GameObject_obj; }
hx::ObjectPtr< GameObject_obj > GameObject_obj::__new()
{  hx::ObjectPtr< GameObject_obj > result = new GameObject_obj();
	result->__construct();
	return result;}

Dynamic GameObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameObject_obj > result = new GameObject_obj();
	result->__construct();
	return result;}

Void GameObject_obj::setMoving( int _speed,int _finalX,int _finalY){
{
		HX_STACK_FRAME("com.ukuleledog.games.core.GameObject","setMoving",0x5afcb03f,"com.ukuleledog.games.core.GameObject.setMoving","com/ukuleledog/games/core/GameObject.hx",35,0xac179001)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_speed,"_speed")
		HX_STACK_ARG(_finalX,"_finalX")
		HX_STACK_ARG(_finalY,"_finalY")
		HX_STACK_LINE(36)
		this->moving = true;
		HX_STACK_LINE(37)
		this->speed = _speed;
		HX_STACK_LINE(38)
		this->finalX = (_finalX * (int)64);
		HX_STACK_LINE(39)
		this->finalY = (_finalY * (int)64);
		HX_STACK_LINE(40)
		Float _g = this->get_x();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(40)
		this->originalX = _g;
		HX_STACK_LINE(41)
		Float _g1 = this->get_y();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(41)
		this->originalY = _g1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GameObject_obj,setMoving,(void))

Void GameObject_obj::move( ){
{
		HX_STACK_FRAME("com.ukuleledog.games.core.GameObject","move",0x7e7e7102,"com.ukuleledog.games.core.GameObject.move","com/ukuleledog/games/core/GameObject.hx",46,0xac179001)
		HX_STACK_THIS(this)
		HX_STACK_LINE(46)
		if (((bool(this->moving) && bool(!(this->isMoving))))){
			HX_STACK_LINE(48)
			this->isMoving = true;
			HX_STACK_LINE(50)
			if ((this->movingOriginal)){
				HX_STACK_LINE(52)
				::motion::easing::IEasing _g = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g,"_g");
				struct _Function_3_1{
					inline static Dynamic Block( hx::ObjectPtr< ::com::ukuleledog::games::core::GameObject_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/core/GameObject.hx",52,0xac179001)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("x") , __this->finalX,false);
							__result->Add(HX_CSTRING("y") , __this->finalY,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(52)
				::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),this->speed,_Function_3_1::Block(this),null(),null())->ease(_g)->onComplete(this->moveEnd_dyn(),null());
			}
			else{
				HX_STACK_LINE(56)
				::motion::easing::IEasing _g1 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g1,"_g1");
				struct _Function_3_1{
					inline static Dynamic Block( hx::ObjectPtr< ::com::ukuleledog::games::core::GameObject_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/core/GameObject.hx",56,0xac179001)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("x") , __this->originalX,false);
							__result->Add(HX_CSTRING("y") , __this->originalY,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(56)
				::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),this->speed,_Function_3_1::Block(this),null(),null())->ease(_g1)->onComplete(this->moveEnd_dyn(),null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameObject_obj,move,(void))

Void GameObject_obj::moveEnd( ){
{
		HX_STACK_FRAME("com.ukuleledog.games.core.GameObject","moveEnd",0xd6e557f9,"com.ukuleledog.games.core.GameObject.moveEnd","com/ukuleledog/games/core/GameObject.hx",63,0xac179001)
		HX_STACK_THIS(this)
		HX_STACK_LINE(64)
		this->movingOriginal = !(this->movingOriginal);
		HX_STACK_LINE(65)
		this->isMoving = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameObject_obj,moveEnd,(void))

Void GameObject_obj::setColider( bool value){
{
		HX_STACK_FRAME("com.ukuleledog.games.core.GameObject","setColider",0xe03d7e77,"com.ukuleledog.games.core.GameObject.setColider","com/ukuleledog/games/core/GameObject.hx",70,0xac179001)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(70)
		this->colider = value;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameObject_obj,setColider,(void))

bool GameObject_obj::isColider( ){
	HX_STACK_FRAME("com.ukuleledog.games.core.GameObject","isColider",0x1e0806ed,"com.ukuleledog.games.core.GameObject.isColider","com/ukuleledog/games/core/GameObject.hx",75,0xac179001)
	HX_STACK_THIS(this)
	HX_STACK_LINE(75)
	return this->colider;
}


HX_DEFINE_DYNAMIC_FUNC0(GameObject_obj,isColider,return )

bool GameObject_obj::mustTestCollision( Float _x,Float _y){
	HX_STACK_FRAME("com.ukuleledog.games.core.GameObject","mustTestCollision",0x7ca50566,"com.ukuleledog.games.core.GameObject.mustTestCollision","com/ukuleledog/games/core/GameObject.hx",79,0xac179001)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_LINE(80)
	Float _g = this->get_x();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(80)
	Float _g1 = (_g - _x);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(80)
	if ((!(((_g1 < (int)100))))){
		HX_STACK_LINE(80)
		Float _g2 = this->get_x();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(80)
		Float _g3 = (_x - _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(80)
		return (_g3 < (int)100);
	}
	else{
		HX_STACK_LINE(80)
		return true;
	}
	HX_STACK_LINE(80)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(GameObject_obj,mustTestCollision,return )


GameObject_obj::GameObject_obj()
{
}

void GameObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameObject);
	HX_MARK_MEMBER_NAME(bmd,"bmd");
	HX_MARK_MEMBER_NAME(colider,"colider");
	HX_MARK_MEMBER_NAME(isMoving,"isMoving");
	HX_MARK_MEMBER_NAME(moving,"moving");
	HX_MARK_MEMBER_NAME(originalX,"originalX");
	HX_MARK_MEMBER_NAME(originalY,"originalY");
	HX_MARK_MEMBER_NAME(finalX,"finalX");
	HX_MARK_MEMBER_NAME(finalY,"finalY");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(movingOriginal,"movingOriginal");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bmd,"bmd");
	HX_VISIT_MEMBER_NAME(colider,"colider");
	HX_VISIT_MEMBER_NAME(isMoving,"isMoving");
	HX_VISIT_MEMBER_NAME(moving,"moving");
	HX_VISIT_MEMBER_NAME(originalX,"originalX");
	HX_VISIT_MEMBER_NAME(originalY,"originalY");
	HX_VISIT_MEMBER_NAME(finalX,"finalX");
	HX_VISIT_MEMBER_NAME(finalY,"finalY");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(movingOriginal,"movingOriginal");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GameObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bmd") ) { return bmd; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"moving") ) { return moving; }
		if (HX_FIELD_EQ(inName,"finalX") ) { return finalX; }
		if (HX_FIELD_EQ(inName,"finalY") ) { return finalY; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"colider") ) { return colider; }
		if (HX_FIELD_EQ(inName,"moveEnd") ) { return moveEnd_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isMoving") ) { return isMoving; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"originalX") ) { return originalX; }
		if (HX_FIELD_EQ(inName,"originalY") ) { return originalY; }
		if (HX_FIELD_EQ(inName,"setMoving") ) { return setMoving_dyn(); }
		if (HX_FIELD_EQ(inName,"isColider") ) { return isColider_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setColider") ) { return setColider_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"movingOriginal") ) { return movingOriginal; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"mustTestCollision") ) { return mustTestCollision_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bmd") ) { bmd=inValue.Cast< ::openfl::_v2::display::BitmapData >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"moving") ) { moving=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"finalX") ) { finalX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"finalY") ) { finalY=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"colider") ) { colider=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isMoving") ) { isMoving=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"originalX") ) { originalX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originalY") ) { originalY=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"movingOriginal") ) { movingOriginal=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bmd"));
	outFields->push(HX_CSTRING("colider"));
	outFields->push(HX_CSTRING("isMoving"));
	outFields->push(HX_CSTRING("moving"));
	outFields->push(HX_CSTRING("originalX"));
	outFields->push(HX_CSTRING("originalY"));
	outFields->push(HX_CSTRING("finalX"));
	outFields->push(HX_CSTRING("finalY"));
	outFields->push(HX_CSTRING("speed"));
	outFields->push(HX_CSTRING("movingOriginal"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::display::BitmapData*/ ,(int)offsetof(GameObject_obj,bmd),HX_CSTRING("bmd")},
	{hx::fsBool,(int)offsetof(GameObject_obj,colider),HX_CSTRING("colider")},
	{hx::fsBool,(int)offsetof(GameObject_obj,isMoving),HX_CSTRING("isMoving")},
	{hx::fsBool,(int)offsetof(GameObject_obj,moving),HX_CSTRING("moving")},
	{hx::fsFloat,(int)offsetof(GameObject_obj,originalX),HX_CSTRING("originalX")},
	{hx::fsFloat,(int)offsetof(GameObject_obj,originalY),HX_CSTRING("originalY")},
	{hx::fsFloat,(int)offsetof(GameObject_obj,finalX),HX_CSTRING("finalX")},
	{hx::fsFloat,(int)offsetof(GameObject_obj,finalY),HX_CSTRING("finalY")},
	{hx::fsInt,(int)offsetof(GameObject_obj,speed),HX_CSTRING("speed")},
	{hx::fsBool,(int)offsetof(GameObject_obj,movingOriginal),HX_CSTRING("movingOriginal")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bmd"),
	HX_CSTRING("colider"),
	HX_CSTRING("isMoving"),
	HX_CSTRING("moving"),
	HX_CSTRING("originalX"),
	HX_CSTRING("originalY"),
	HX_CSTRING("finalX"),
	HX_CSTRING("finalY"),
	HX_CSTRING("speed"),
	HX_CSTRING("movingOriginal"),
	HX_CSTRING("setMoving"),
	HX_CSTRING("move"),
	HX_CSTRING("moveEnd"),
	HX_CSTRING("setColider"),
	HX_CSTRING("isColider"),
	HX_CSTRING("mustTestCollision"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameObject_obj::__mClass,"__mClass");
};

#endif

Class GameObject_obj::__mClass;

void GameObject_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ukuleledog.games.core.GameObject"), hx::TCanCast< GameObject_obj> ,sStaticFields,sMemberFields,
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

void GameObject_obj::__boot()
{
}

} // end namespace com
} // end namespace ukuleledog
} // end namespace games
} // end namespace core
