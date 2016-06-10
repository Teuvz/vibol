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
#ifndef INCLUDED_com_ukuleledog_games_vibol_enemies_Frog
#include <com/ukuleledog/games/vibol/enemies/Frog.h>
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

Void Frog_obj::__construct(hx::Null< bool >  __o_moving)
{
HX_STACK_FRAME("com.ukuleledog.games.vibol.enemies.Frog","new",0x1301cbe3,"com.ukuleledog.games.vibol.enemies.Frog.new","com/ukuleledog/games/vibol/enemies/Frog.hx",13,0x52715cea)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_moving,"moving")
bool moving = __o_moving.Default(true);
{
	HX_STACK_LINE(17)
	this->initialized = false;
	HX_STACK_LINE(16)
	this->canJump = true;
	HX_STACK_LINE(21)
	super::__construct();
	HX_STACK_LINE(23)
	::openfl::_v2::display::BitmapData imageData = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/sprite/frog.png"),null());		HX_STACK_VAR(imageData,"imageData");
	HX_STACK_LINE(24)
	this->get_graphics()->beginBitmapFill(imageData,null(),null(),null());
	HX_STACK_LINE(27)
	this->get_graphics()->drawRect((int)0,(int)0,(int)64,(int)64);
	HX_STACK_LINE(28)
	this->get_graphics()->endFill();
	HX_STACK_LINE(30)
	this->canJump = moving;
}
;
	return null();
}

//Frog_obj::~Frog_obj() { }

Dynamic Frog_obj::__CreateEmpty() { return  new Frog_obj; }
hx::ObjectPtr< Frog_obj > Frog_obj::__new(hx::Null< bool >  __o_moving)
{  hx::ObjectPtr< Frog_obj > result = new Frog_obj();
	result->__construct(__o_moving);
	return result;}

Dynamic Frog_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Frog_obj > result = new Frog_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Frog_obj::roam( ){
{
		HX_STACK_FRAME("com.ukuleledog.games.vibol.enemies.Frog","roam",0x913cf906,"com.ukuleledog.games.vibol.enemies.Frog.roam","com/ukuleledog/games/vibol/enemies/Frog.hx",35,0x52715cea)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		if (((this->canJump == true))){
			HX_STACK_LINE(37)
			Float _g = this->get_y();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(37)
			this->originalY = _g;
			HX_STACK_LINE(39)
			this->canJump = false;
			HX_STACK_LINE(40)
			Float targetX = (int)0;		HX_STACK_VAR(targetX,"targetX");
			HX_STACK_LINE(42)
			if (((this->roamingDirection == HX_CSTRING("left")))){
				HX_STACK_LINE(44)
				targetX = this->roamingMaxLeft;
				HX_STACK_LINE(45)
				this->roamingDirection = HX_CSTRING("right");
			}
			else{
				HX_STACK_LINE(49)
				targetX = this->roamingMaxRight;
				HX_STACK_LINE(50)
				this->roamingDirection = HX_CSTRING("left");
			}
			HX_STACK_LINE(53)
			::motion::easing::IEasing _g1 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g1,"_g1");
			struct _Function_2_1{
				inline static Dynamic Block( hx::ObjectPtr< ::com::ukuleledog::games::vibol::enemies::Frog_obj > __this,Float &targetX){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/enemies/Frog.hx",53,0x52715cea)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("y") , (__this->originalY - (int)32),false);
						__result->Add(HX_CSTRING("x") , targetX,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(53)
			::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),0.8,_Function_2_1::Block(this,targetX),null(),null())->ease(_g1)->onComplete(this->jumpReturn_dyn(),null());
		}
	}
return null();
}


Void Frog_obj::jumpReturn( ){
{
		HX_STACK_FRAME("com.ukuleledog.games.vibol.enemies.Frog","jumpReturn",0xd8730f1b,"com.ukuleledog.games.vibol.enemies.Frog.jumpReturn","com/ukuleledog/games/vibol/enemies/Frog.hx",59,0x52715cea)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		::motion::easing::IEasing _g = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static Dynamic Block( hx::ObjectPtr< ::com::ukuleledog::games::vibol::enemies::Frog_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/enemies/Frog.hx",60,0x52715cea)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("y") , __this->originalY,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(60)
		::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),(int)1,_Function_1_1::Block(this),null(),null())->ease(_g)->onComplete(this->jumpEnd_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Frog_obj,jumpReturn,(void))

Void Frog_obj::jumpEnd( ){
{
		HX_STACK_FRAME("com.ukuleledog.games.vibol.enemies.Frog","jumpEnd",0x7ad3b890,"com.ukuleledog.games.vibol.enemies.Frog.jumpEnd","com/ukuleledog/games/vibol/enemies/Frog.hx",65,0x52715cea)
		HX_STACK_THIS(this)
		HX_STACK_LINE(65)
		this->canJump = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Frog_obj,jumpEnd,(void))


Frog_obj::Frog_obj()
{
}

Dynamic Frog_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"roam") ) { return roam_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"canJump") ) { return canJump; }
		if (HX_FIELD_EQ(inName,"jumpEnd") ) { return jumpEnd_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"jumpReturn") ) { return jumpReturn_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Frog_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"canJump") ) { canJump=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Frog_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("canJump"));
	outFields->push(HX_CSTRING("initialized"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Frog_obj,canJump),HX_CSTRING("canJump")},
	{hx::fsBool,(int)offsetof(Frog_obj,initialized),HX_CSTRING("initialized")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("canJump"),
	HX_CSTRING("initialized"),
	HX_CSTRING("roam"),
	HX_CSTRING("jumpReturn"),
	HX_CSTRING("jumpEnd"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Frog_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Frog_obj::__mClass,"__mClass");
};

#endif

Class Frog_obj::__mClass;

void Frog_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ukuleledog.games.vibol.enemies.Frog"), hx::TCanCast< Frog_obj> ,sStaticFields,sMemberFields,
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

void Frog_obj::__boot()
{
}

} // end namespace com
} // end namespace ukuleledog
} // end namespace games
} // end namespace vibol
} // end namespace enemies
