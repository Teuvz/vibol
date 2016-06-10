#include <hxcpp.h>

#ifndef INCLUDED_com_ukuleledog_games_core_Level
#include <com/ukuleledog/games/core/Level.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_core_State
#include <com/ukuleledog/games/core/State.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_vibol_levels_Level1
#include <com/ukuleledog/games/vibol/levels/Level1.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_vibol_levels_Level2
#include <com/ukuleledog/games/vibol/levels/Level2.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_vibol_levels_Level3
#include <com/ukuleledog/games/vibol/levels/Level3.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_vibol_levels_Level4
#include <com/ukuleledog/games/vibol/levels/Level4.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_vibol_levels_Level5
#include <com/ukuleledog/games/vibol/levels/Level5.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_vibol_levels_VibolLevel
#include <com/ukuleledog/games/vibol/levels/VibolLevel.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_vibol_states_GameState
#include <com/ukuleledog/games/vibol/states/GameState.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
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
#ifndef INCLUDED_openfl__v2_display_Stage
#include <openfl/_v2/display/Stage.h>
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
#ifndef INCLUDED_openfl__v2_events_KeyboardEvent
#include <openfl/_v2/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl_events_JoystickEvent
#include <openfl/events/JoystickEvent.h>
#endif
namespace com{
namespace ukuleledog{
namespace games{
namespace vibol{
namespace states{

Void GameState_obj::__construct()
{
HX_STACK_FRAME("com.ukuleledog.games.vibol.states.GameState","new",0x4b61b20a,"com.ukuleledog.games.vibol.states.GameState.new","com/ukuleledog/games/vibol/states/GameState.hx",26,0x304d0b05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(30)
	this->levelNb = (int)1;
	HX_STACK_LINE(35)
	super::__construct();
	HX_STACK_LINE(36)
	this->addEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null(),null(),null());
	HX_STACK_LINE(38)
	Array< bool > _g = Array_obj< bool >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(38)
	this->keysPressed = _g;
	HX_STACK_LINE(39)
	::com::ukuleledog::games::vibol::levels::Level1 _g1 = ::com::ukuleledog::games::vibol::levels::Level1_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(39)
	this->level = _g1;
}
;
	return null();
}

//GameState_obj::~GameState_obj() { }

Dynamic GameState_obj::__CreateEmpty() { return  new GameState_obj; }
hx::ObjectPtr< GameState_obj > GameState_obj::__new()
{  hx::ObjectPtr< GameState_obj > result = new GameState_obj();
	result->__construct();
	return result;}

Dynamic GameState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameState_obj > result = new GameState_obj();
	result->__construct();
	return result;}

Void GameState_obj::init( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.ukuleledog.games.vibol.states.GameState","init",0xa6d2ce26,"com.ukuleledog.games.vibol.states.GameState.init","com/ukuleledog/games/vibol/states/GameState.hx",43,0x304d0b05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(44)
		this->removeEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null());
		HX_STACK_LINE(46)
		this->level->addEventListener(::openfl::_v2::events::Event_obj::COMPLETE,this->changeLevel_dyn(),null(),null(),null());
		HX_STACK_LINE(47)
		this->addChild(this->level);
		HX_STACK_LINE(48)
		this->level->start();
		HX_STACK_LINE(50)
		this->get_stage()->addEventListener(::openfl::_v2::events::KeyboardEvent_obj::KEY_DOWN,this->keyDownHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(51)
		this->get_stage()->addEventListener(::openfl::_v2::events::KeyboardEvent_obj::KEY_UP,this->keyUpHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(52)
		this->addEventListener(::openfl::_v2::events::Event_obj::ENTER_FRAME,this->loop_dyn(),null(),null(),null());
		HX_STACK_LINE(54)
		this->addEventListener(HX_CSTRING("buttonDown"),this->joystickButton_dyn(),null(),null(),null());
		HX_STACK_LINE(55)
		this->get_stage()->addEventListener(HX_CSTRING("axisMove"),this->joystickAxis_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,init,(void))

Void GameState_obj::joystickButton( ::openfl::events::JoystickEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.vibol.states.GameState","joystickButton",0x155c7664,"com.ukuleledog.games.vibol.states.GameState.joystickButton","com/ukuleledog/games/vibol/states/GameState.hx",60,0x304d0b05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(60)
		::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("GameState.hx"),60,HX_CSTRING("com.ukuleledog.games.vibol.states.GameState"),HX_CSTRING("joystickButton")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,joystickButton,(void))

Void GameState_obj::joystickAxis( ::openfl::events::JoystickEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.vibol.states.GameState","joystickAxis",0xa52ad093,"com.ukuleledog.games.vibol.states.GameState.joystickAxis","com/ukuleledog/games/vibol/states/GameState.hx",64,0x304d0b05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,joystickAxis,(void))

Void GameState_obj::changeLevel( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.ukuleledog.games.vibol.states.GameState","changeLevel",0x79cf599e,"com.ukuleledog.games.vibol.states.GameState.changeLevel","com/ukuleledog/games/vibol/states/GameState.hx",69,0x304d0b05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(70)
		this->removeEventListener(::openfl::_v2::events::Event_obj::ENTER_FRAME,this->loop_dyn(),null());
		HX_STACK_LINE(71)
		this->level->removeEventListener(::openfl::_v2::events::Event_obj::COMPLETE,this->changeLevel_dyn(),null());
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/states/GameState.hx",73,0x304d0b05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(73)
		::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),(int)1,_Function_1_1::Block(),null(),null())->onComplete(this->changeLevelReady_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,changeLevel,(void))

Void GameState_obj::changeLevelReady( ){
{
		HX_STACK_FRAME("com.ukuleledog.games.vibol.states.GameState","changeLevelReady",0x013919e5,"com.ukuleledog.games.vibol.states.GameState.changeLevelReady","com/ukuleledog/games/vibol/states/GameState.hx",78,0x304d0b05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(79)
		this->removeChild(this->level);
		HX_STACK_LINE(80)
		this->level = null();
		HX_STACK_LINE(81)
		(this->levelNb)++;
		HX_STACK_LINE(83)
		{
			HX_STACK_LINE(83)
			int _g = this->levelNb;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(83)
			switch( (int)(_g)){
				case (int)2: {
					HX_STACK_LINE(86)
					::com::ukuleledog::games::vibol::levels::Level2 _g1 = ::com::ukuleledog::games::vibol::levels::Level2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(86)
					this->level = _g1;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(88)
					::com::ukuleledog::games::vibol::levels::Level3 _g1 = ::com::ukuleledog::games::vibol::levels::Level3_obj::__new();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(88)
					this->level = _g1;
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(90)
					::com::ukuleledog::games::vibol::levels::Level4 _g2 = ::com::ukuleledog::games::vibol::levels::Level4_obj::__new();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(90)
					this->level = _g2;
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(92)
					::com::ukuleledog::games::vibol::levels::Level5 _g3 = ::com::ukuleledog::games::vibol::levels::Level5_obj::__new();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(92)
					this->level = _g3;
				}
				;break;
			}
		}
		HX_STACK_LINE(95)
		this->addChild(this->level);
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/states/GameState.hx",97,0x304d0b05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , (int)1,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(97)
		::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),(int)1,_Function_1_1::Block(),null(),null())->onComplete(this->changeLevelEnd_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameState_obj,changeLevelReady,(void))

Void GameState_obj::changeLevelEnd( ){
{
		HX_STACK_FRAME("com.ukuleledog.games.vibol.states.GameState","changeLevelEnd",0x8e32b8dd,"com.ukuleledog.games.vibol.states.GameState.changeLevelEnd","com/ukuleledog/games/vibol/states/GameState.hx",101,0x304d0b05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(102)
		this->addEventListener(::openfl::_v2::events::Event_obj::ENTER_FRAME,this->loop_dyn(),null(),null(),null());
		HX_STACK_LINE(103)
		this->level->addEventListener(::openfl::_v2::events::Event_obj::COMPLETE,this->changeLevel_dyn(),null(),null(),null());
		HX_STACK_LINE(104)
		this->level->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameState_obj,changeLevelEnd,(void))

Void GameState_obj::loop( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.ukuleledog.games.vibol.states.GameState","loop",0xa8cf397a,"com.ukuleledog.games.vibol.states.GameState.loop","com/ukuleledog/games/vibol/states/GameState.hx",108,0x304d0b05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(110)
		if (((this->keysPressed->__get((int)39) == true))){
			HX_STACK_LINE(112)
			this->level->moveRight();
		}
		else{
			HX_STACK_LINE(114)
			if (((this->keysPressed->__get((int)37) == true))){
				HX_STACK_LINE(116)
				this->level->moveLeft();
			}
		}
		HX_STACK_LINE(119)
		if (((  (((this->keysPressed->__get((int)65) == true))) ? bool(this->level->canJump()) : bool(false) ))){
			HX_STACK_LINE(121)
			this->level->jump();
		}
		HX_STACK_LINE(124)
		if (((this->keysPressed->__get((int)90) == true))){
			HX_STACK_LINE(126)
			this->level->action();
		}
		HX_STACK_LINE(129)
		this->level->loop(e);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,loop,(void))

Void GameState_obj::keyDownHandler( ::openfl::_v2::events::KeyboardEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.vibol.states.GameState","keyDownHandler",0x55d2debf,"com.ukuleledog.games.vibol.states.GameState.keyDownHandler","com/ukuleledog/games/vibol/states/GameState.hx",135,0x304d0b05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(135)
		this->keysPressed[e->keyCode] = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,keyDownHandler,(void))

Void GameState_obj::keyUpHandler( ::openfl::_v2::events::KeyboardEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.vibol.states.GameState","keyUpHandler",0xe9780626,"com.ukuleledog.games.vibol.states.GameState.keyUpHandler","com/ukuleledog/games/vibol/states/GameState.hx",140,0x304d0b05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(140)
		this->keysPressed[e->keyCode] = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,keyUpHandler,(void))


GameState_obj::GameState_obj()
{
}

void GameState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameState);
	HX_MARK_MEMBER_NAME(keysPressed,"keysPressed");
	HX_MARK_MEMBER_NAME(levelNb,"levelNb");
	HX_MARK_MEMBER_NAME(level,"level");
	::com::ukuleledog::games::core::State_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(keysPressed,"keysPressed");
	HX_VISIT_MEMBER_NAME(levelNb,"levelNb");
	HX_VISIT_MEMBER_NAME(level,"level");
	::com::ukuleledog::games::core::State_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GameState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"loop") ) { return loop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { return level; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"levelNb") ) { return levelNb; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"keysPressed") ) { return keysPressed; }
		if (HX_FIELD_EQ(inName,"changeLevel") ) { return changeLevel_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"joystickAxis") ) { return joystickAxis_dyn(); }
		if (HX_FIELD_EQ(inName,"keyUpHandler") ) { return keyUpHandler_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"joystickButton") ) { return joystickButton_dyn(); }
		if (HX_FIELD_EQ(inName,"changeLevelEnd") ) { return changeLevelEnd_dyn(); }
		if (HX_FIELD_EQ(inName,"keyDownHandler") ) { return keyDownHandler_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"changeLevelReady") ) { return changeLevelReady_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { level=inValue.Cast< ::com::ukuleledog::games::core::Level >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"levelNb") ) { levelNb=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"keysPressed") ) { keysPressed=inValue.Cast< Array< bool > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("keysPressed"));
	outFields->push(HX_CSTRING("levelNb"));
	outFields->push(HX_CSTRING("level"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(GameState_obj,keysPressed),HX_CSTRING("keysPressed")},
	{hx::fsInt,(int)offsetof(GameState_obj,levelNb),HX_CSTRING("levelNb")},
	{hx::fsObject /*::com::ukuleledog::games::core::Level*/ ,(int)offsetof(GameState_obj,level),HX_CSTRING("level")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("keysPressed"),
	HX_CSTRING("levelNb"),
	HX_CSTRING("level"),
	HX_CSTRING("init"),
	HX_CSTRING("joystickButton"),
	HX_CSTRING("joystickAxis"),
	HX_CSTRING("changeLevel"),
	HX_CSTRING("changeLevelReady"),
	HX_CSTRING("changeLevelEnd"),
	HX_CSTRING("loop"),
	HX_CSTRING("keyDownHandler"),
	HX_CSTRING("keyUpHandler"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameState_obj::__mClass,"__mClass");
};

#endif

Class GameState_obj::__mClass;

void GameState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ukuleledog.games.vibol.states.GameState"), hx::TCanCast< GameState_obj> ,sStaticFields,sMemberFields,
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

void GameState_obj::__boot()
{
}

} // end namespace com
} // end namespace ukuleledog
} // end namespace games
} // end namespace vibol
} // end namespace states
