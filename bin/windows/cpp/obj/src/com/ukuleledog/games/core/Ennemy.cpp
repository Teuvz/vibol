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
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
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
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
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

Void Ennemy_obj::__construct()
{
HX_STACK_FRAME("com.ukuleledog.games.core.Ennemy","new",0xb2cda30a,"com.ukuleledog.games.core.Ennemy.new","com/ukuleledog/games/core/Ennemy.hx",11,0xc06b20e6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(21)
	this->roamingDirection = HX_CSTRING("right");
	HX_STACK_LINE(17)
	this->roaming = false;
	HX_STACK_LINE(14)
	this->untouchable = false;
	HX_STACK_LINE(13)
	this->health = (int)1;
	HX_STACK_LINE(25)
	super::__construct();
	HX_STACK_LINE(26)
	this->speed = (int)5;
}
;
	return null();
}

//Ennemy_obj::~Ennemy_obj() { }

Dynamic Ennemy_obj::__CreateEmpty() { return  new Ennemy_obj; }
hx::ObjectPtr< Ennemy_obj > Ennemy_obj::__new()
{  hx::ObjectPtr< Ennemy_obj > result = new Ennemy_obj();
	result->__construct();
	return result;}

Dynamic Ennemy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Ennemy_obj > result = new Ennemy_obj();
	result->__construct();
	return result;}

Void Ennemy_obj::setRoaming( int block,::String __o__direction){
::String _direction = __o__direction.Default(HX_CSTRING("right"));
	HX_STACK_FRAME("com.ukuleledog.games.core.Ennemy","setRoaming",0x3709ddad,"com.ukuleledog.games.core.Ennemy.setRoaming","com/ukuleledog/games/core/Ennemy.hx",30,0xc06b20e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(block,"block")
	HX_STACK_ARG(_direction,"_direction")
{
		HX_STACK_LINE(31)
		this->roaming = true;
		HX_STACK_LINE(32)
		this->roamingDistance = ((int)64 * block);
		HX_STACK_LINE(33)
		Float _g = this->get_x();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(33)
		Float _g1 = (_g - this->roamingDistance);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(33)
		this->roamingMaxLeft = _g1;
		HX_STACK_LINE(34)
		Float _g2 = this->get_x();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(34)
		Float _g3 = (_g2 + this->roamingDistance);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(34)
		this->roamingMaxRight = _g3;
		HX_STACK_LINE(36)
		this->roamingDirection = _direction;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Ennemy_obj,setRoaming,(void))

Void Ennemy_obj::roam( ){
{
		HX_STACK_FRAME("com.ukuleledog.games.core.Ennemy","roam",0xc3cd63ff,"com.ukuleledog.games.core.Ennemy.roam","com/ukuleledog/games/core/Ennemy.hx",42,0xc06b20e6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(42)
		if (((this->roaming == true))){
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::core::Ennemy_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/core/Ennemy.hx",45,0xc06b20e6)
					{
						HX_STACK_LINE(45)
						Float _g = __this->get_x();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(45)
						return (_g <= __this->roamingMaxRight);
					}
					return null();
				}
			};
			HX_STACK_LINE(45)
			if (((  (((this->roamingDirection == HX_CSTRING("right")))) ? bool(_Function_2_1::Block(this)) : bool(false) ))){
				HX_STACK_LINE(47)
				{
					HX_STACK_LINE(47)
					::com::ukuleledog::games::core::Ennemy _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(47)
					Float _g1 = _g->get_x();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(47)
					Float _g2 = (_g1 + this->speed);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(47)
					_g->set_x(_g2);
				}
				HX_STACK_LINE(49)
				Float _g3 = this->get_x();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(49)
				if (((_g3 >= this->roamingMaxRight))){
					HX_STACK_LINE(51)
					this->set_x(this->roamingMaxRight);
					HX_STACK_LINE(52)
					this->roamingDirection = HX_CSTRING("left");
				}
			}
			else{
				HX_STACK_LINE(57)
				{
					HX_STACK_LINE(57)
					::com::ukuleledog::games::core::Ennemy _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(57)
					Float _g4 = _g->get_x();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(57)
					Float _g5 = (_g4 - this->speed);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(57)
					_g->set_x(_g5);
				}
				HX_STACK_LINE(59)
				Float _g6 = this->get_x();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(59)
				if (((_g6 <= this->roamingMaxLeft))){
					HX_STACK_LINE(61)
					this->set_x(this->roamingMaxLeft);
					HX_STACK_LINE(62)
					this->roamingDirection = HX_CSTRING("right");
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Ennemy_obj,roam,(void))

int Ennemy_obj::getHealth( ){
	HX_STACK_FRAME("com.ukuleledog.games.core.Ennemy","getHealth",0x0540dffc,"com.ukuleledog.games.core.Ennemy.getHealth","com/ukuleledog/games/core/Ennemy.hx",71,0xc06b20e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(71)
	return this->health;
}


HX_DEFINE_DYNAMIC_FUNC0(Ennemy_obj,getHealth,return )

Void Ennemy_obj::setHealth( int health){
{
		HX_STACK_FRAME("com.ukuleledog.games.core.Ennemy","setHealth",0xe891cc08,"com.ukuleledog.games.core.Ennemy.setHealth","com/ukuleledog/games/core/Ennemy.hx",76,0xc06b20e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(health,"health")
		HX_STACK_LINE(76)
		this->health = health;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Ennemy_obj,setHealth,(void))

bool Ennemy_obj::isTouchable( ){
	HX_STACK_FRAME("com.ukuleledog.games.core.Ennemy","isTouchable",0x69681439,"com.ukuleledog.games.core.Ennemy.isTouchable","com/ukuleledog/games/core/Ennemy.hx",81,0xc06b20e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(81)
	return !(this->untouchable);
}


HX_DEFINE_DYNAMIC_FUNC0(Ennemy_obj,isTouchable,return )

Void Ennemy_obj::decreaseHealth( ){
{
		HX_STACK_FRAME("com.ukuleledog.games.core.Ennemy","decreaseHealth",0x86014530,"com.ukuleledog.games.core.Ennemy.decreaseHealth","com/ukuleledog/games/core/Ennemy.hx",85,0xc06b20e6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(84)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(86)
		--(this->health);
		HX_STACK_LINE(88)
		this->untouchable = true;
		HX_STACK_LINE(89)
		this->addEventListener(::openfl::_v2::events::Event_obj::ENTER_FRAME,this->flash_dyn(),null(),null(),null());

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g)
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","com/ukuleledog/games/core/Ennemy.hx",91,0xc06b20e6)
			{
				HX_STACK_LINE(92)
				_g->__get((int)0).StaticCast< ::com::ukuleledog::games::core::Ennemy >()->untouchable = false;
				HX_STACK_LINE(93)
				_g->__get((int)0).StaticCast< ::com::ukuleledog::games::core::Ennemy >()->removeEventListener(::openfl::_v2::events::Event_obj::ENTER_FRAME,_g->__get((int)0).StaticCast< ::com::ukuleledog::games::core::Ennemy >()->flash_dyn(),null());
				HX_STACK_LINE(94)
				_g->__get((int)0).StaticCast< ::com::ukuleledog::games::core::Ennemy >()->set_alpha((int)1);
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(91)
		::haxe::Timer_obj::delay( Dynamic(new _Function_1_1(_g)),(int)2000);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Ennemy_obj,decreaseHealth,(void))

Void Ennemy_obj::flash( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.ukuleledog.games.core.Ennemy","flash",0xa51f86da,"com.ukuleledog.games.core.Ennemy.flash","com/ukuleledog/games/core/Ennemy.hx",100,0xc06b20e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(101)
		Float _g = this->get_alpha();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(101)
		if (((_g == (int)1))){
			HX_STACK_LINE(102)
			this->set_alpha(0.6);
		}
		else{
			HX_STACK_LINE(104)
			this->set_alpha((int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Ennemy_obj,flash,(void))


Ennemy_obj::Ennemy_obj()
{
}

void Ennemy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Ennemy);
	HX_MARK_MEMBER_NAME(health,"health");
	HX_MARK_MEMBER_NAME(untouchable,"untouchable");
	HX_MARK_MEMBER_NAME(roaming,"roaming");
	HX_MARK_MEMBER_NAME(roamingDistance,"roamingDistance");
	HX_MARK_MEMBER_NAME(roamingMaxLeft,"roamingMaxLeft");
	HX_MARK_MEMBER_NAME(roamingMaxRight,"roamingMaxRight");
	HX_MARK_MEMBER_NAME(roamingDirection,"roamingDirection");
	::com::ukuleledog::games::core::AnimatedObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Ennemy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(health,"health");
	HX_VISIT_MEMBER_NAME(untouchable,"untouchable");
	HX_VISIT_MEMBER_NAME(roaming,"roaming");
	HX_VISIT_MEMBER_NAME(roamingDistance,"roamingDistance");
	HX_VISIT_MEMBER_NAME(roamingMaxLeft,"roamingMaxLeft");
	HX_VISIT_MEMBER_NAME(roamingMaxRight,"roamingMaxRight");
	HX_VISIT_MEMBER_NAME(roamingDirection,"roamingDirection");
	::com::ukuleledog::games::core::AnimatedObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Ennemy_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"roam") ) { return roam_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flash") ) { return flash_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"health") ) { return health; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"roaming") ) { return roaming; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getHealth") ) { return getHealth_dyn(); }
		if (HX_FIELD_EQ(inName,"setHealth") ) { return setHealth_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setRoaming") ) { return setRoaming_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"untouchable") ) { return untouchable; }
		if (HX_FIELD_EQ(inName,"isTouchable") ) { return isTouchable_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"roamingMaxLeft") ) { return roamingMaxLeft; }
		if (HX_FIELD_EQ(inName,"decreaseHealth") ) { return decreaseHealth_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"roamingDistance") ) { return roamingDistance; }
		if (HX_FIELD_EQ(inName,"roamingMaxRight") ) { return roamingMaxRight; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"roamingDirection") ) { return roamingDirection; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Ennemy_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"health") ) { health=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"roaming") ) { roaming=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"untouchable") ) { untouchable=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"roamingMaxLeft") ) { roamingMaxLeft=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"roamingDistance") ) { roamingDistance=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"roamingMaxRight") ) { roamingMaxRight=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"roamingDirection") ) { roamingDirection=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Ennemy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("health"));
	outFields->push(HX_CSTRING("untouchable"));
	outFields->push(HX_CSTRING("roaming"));
	outFields->push(HX_CSTRING("roamingDistance"));
	outFields->push(HX_CSTRING("roamingMaxLeft"));
	outFields->push(HX_CSTRING("roamingMaxRight"));
	outFields->push(HX_CSTRING("roamingDirection"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Ennemy_obj,health),HX_CSTRING("health")},
	{hx::fsBool,(int)offsetof(Ennemy_obj,untouchable),HX_CSTRING("untouchable")},
	{hx::fsBool,(int)offsetof(Ennemy_obj,roaming),HX_CSTRING("roaming")},
	{hx::fsInt,(int)offsetof(Ennemy_obj,roamingDistance),HX_CSTRING("roamingDistance")},
	{hx::fsFloat,(int)offsetof(Ennemy_obj,roamingMaxLeft),HX_CSTRING("roamingMaxLeft")},
	{hx::fsFloat,(int)offsetof(Ennemy_obj,roamingMaxRight),HX_CSTRING("roamingMaxRight")},
	{hx::fsString,(int)offsetof(Ennemy_obj,roamingDirection),HX_CSTRING("roamingDirection")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("health"),
	HX_CSTRING("untouchable"),
	HX_CSTRING("roaming"),
	HX_CSTRING("roamingDistance"),
	HX_CSTRING("roamingMaxLeft"),
	HX_CSTRING("roamingMaxRight"),
	HX_CSTRING("roamingDirection"),
	HX_CSTRING("setRoaming"),
	HX_CSTRING("roam"),
	HX_CSTRING("getHealth"),
	HX_CSTRING("setHealth"),
	HX_CSTRING("isTouchable"),
	HX_CSTRING("decreaseHealth"),
	HX_CSTRING("flash"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Ennemy_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Ennemy_obj::__mClass,"__mClass");
};

#endif

Class Ennemy_obj::__mClass;

void Ennemy_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ukuleledog.games.core.Ennemy"), hx::TCanCast< Ennemy_obj> ,sStaticFields,sMemberFields,
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

void Ennemy_obj::__boot()
{
}

} // end namespace com
} // end namespace ukuleledog
} // end namespace games
} // end namespace core
