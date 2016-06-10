#include <hxcpp.h>

#ifndef INCLUDED_com_ukuleledog_games_core_AnimatedObject
#include <com/ukuleledog/games/core/AnimatedObject.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_core_Ennemy
#include <com/ukuleledog/games/core/Ennemy.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_core_GameObject
#include <com/ukuleledog/games/core/GameObject.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_vibol_enemies_Orc
#include <com/ukuleledog/games/vibol/enemies/Orc.h>
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
namespace enemies{

Void Orc_obj::__construct()
{
HX_STACK_FRAME("com.ukuleledog.games.vibol.enemies.Orc","new",0xa6091be5,"com.ukuleledog.games.vibol.enemies.Orc.new","com/ukuleledog/games/vibol/enemies/Orc.hx",14,0x133419ce)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	this->canMove = true;
	HX_STACK_LINE(21)
	super::__construct();
	HX_STACK_LINE(23)
	::openfl::_v2::display::BitmapData imageData = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/sprite/orc.png"),null());		HX_STACK_VAR(imageData,"imageData");
	HX_STACK_LINE(24)
	this->get_graphics()->beginBitmapFill(imageData,null(),null(),null());
	HX_STACK_LINE(28)
	this->get_graphics()->drawRect((int)0,(int)0,(int)64,(int)64);
	HX_STACK_LINE(29)
	this->get_graphics()->endFill();
}
;
	return null();
}

//Orc_obj::~Orc_obj() { }

Dynamic Orc_obj::__CreateEmpty() { return  new Orc_obj; }
hx::ObjectPtr< Orc_obj > Orc_obj::__new()
{  hx::ObjectPtr< Orc_obj > result = new Orc_obj();
	result->__construct();
	return result;}

Dynamic Orc_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Orc_obj > result = new Orc_obj();
	result->__construct();
	return result;}

Void Orc_obj::roam( ){
{
		HX_STACK_FRAME("com.ukuleledog.games.vibol.enemies.Orc","roam",0xa49baac4,"com.ukuleledog.games.vibol.enemies.Orc.roam","com/ukuleledog/games/vibol/enemies/Orc.hx",33,0x133419ce)
		HX_STACK_THIS(this)
		HX_STACK_LINE(32)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(35)
		if (((bool((this->roaming == true)) && bool((this->canMove == true))))){
			HX_STACK_LINE(38)
			Float _g1 = this->get_x();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(38)
			this->originalX = _g1;
			HX_STACK_LINE(39)
			Float targetX = (int)0;		HX_STACK_VAR(targetX,"targetX");
			HX_STACK_LINE(41)
			if (((this->roamingDirection == HX_CSTRING("right")))){
				HX_STACK_LINE(44)
				this->canMove = false;
				HX_STACK_LINE(45)
				Float _g11 = this->get_x();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(45)
				Float targetX1 = (_g11 + (int)64);		HX_STACK_VAR(targetX1,"targetX1");
				HX_STACK_LINE(47)
				if (((targetX1 >= this->roamingMaxRight))){
					HX_STACK_LINE(49)
					targetX1 = this->roamingMaxRight;
					HX_STACK_LINE(50)
					this->roamingDirection = HX_CSTRING("left");
				}
				HX_STACK_LINE(53)
				::motion::easing::IEasing _g2 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g2,"_g2");
				struct _Function_3_1{
					inline static Dynamic Block( Float &targetX1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/enemies/Orc.hx",53,0x133419ce)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("x") , targetX1,false);
							return __result;
						}
						return null();
					}
				};

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_2,Array< ::Dynamic >,_g)
				Void run(){
					HX_STACK_FRAME("*","_Function_3_2",0x520271ba,"*._Function_3_2","com/ukuleledog/games/vibol/enemies/Orc.hx",54,0x133419ce)
					{
						HX_STACK_LINE(54)
						_g->__get((int)0).StaticCast< ::com::ukuleledog::games::vibol::enemies::Orc >()->canMove = true;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(53)
				::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),0.8,_Function_3_1::Block(targetX1),null(),null())->ease(_g2)->delay(0.8)->onComplete( Dynamic(new _Function_3_2(_g)),null());
			}
			else{
				HX_STACK_LINE(61)
				this->canMove = false;
				HX_STACK_LINE(62)
				Float _g3 = this->get_x();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(62)
				Float targetX1 = (_g3 - (int)64);		HX_STACK_VAR(targetX1,"targetX1");
				HX_STACK_LINE(64)
				if (((targetX1 <= this->roamingMaxLeft))){
					HX_STACK_LINE(66)
					targetX1 = this->roamingMaxLeft;
					HX_STACK_LINE(67)
					this->roamingDirection = HX_CSTRING("right");
				}
				HX_STACK_LINE(70)
				::motion::easing::IEasing _g4 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g4,"_g4");
				struct _Function_3_1{
					inline static Dynamic Block( Float &targetX1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/enemies/Orc.hx",70,0x133419ce)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("x") , targetX1,false);
							return __result;
						}
						return null();
					}
				};

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_2,Array< ::Dynamic >,_g)
				Void run(){
					HX_STACK_FRAME("*","_Function_3_2",0x520271ba,"*._Function_3_2","com/ukuleledog/games/vibol/enemies/Orc.hx",71,0x133419ce)
					{
						HX_STACK_LINE(71)
						_g->__get((int)0).StaticCast< ::com::ukuleledog::games::vibol::enemies::Orc >()->canMove = true;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(70)
				::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),0.8,_Function_3_1::Block(targetX1),null(),null())->ease(_g4)->delay(0.8)->onComplete( Dynamic(new _Function_3_2(_g)),null());
			}
		}
	}
return null();
}



Orc_obj::Orc_obj()
{
}

Dynamic Orc_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"roam") ) { return roam_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"canMove") ) { return canMove; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Orc_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"canMove") ) { canMove=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Orc_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("canMove"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Orc_obj,canMove),HX_CSTRING("canMove")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("canMove"),
	HX_CSTRING("roam"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Orc_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Orc_obj::__mClass,"__mClass");
};

#endif

Class Orc_obj::__mClass;

void Orc_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ukuleledog.games.vibol.enemies.Orc"), hx::TCanCast< Orc_obj> ,sStaticFields,sMemberFields,
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

void Orc_obj::__boot()
{
}

} // end namespace com
} // end namespace ukuleledog
} // end namespace games
} // end namespace vibol
} // end namespace enemies
