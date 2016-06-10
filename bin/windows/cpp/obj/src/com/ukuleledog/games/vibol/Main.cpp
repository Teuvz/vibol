#include <hxcpp.h>

#ifndef INCLUDED_com_kircode_debug_FPS_Mem
#include <com/kircode/debug/FPS_Mem.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_core_State
#include <com/ukuleledog/games/core/State.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_vibol_Main
#include <com/ukuleledog/games/vibol/Main.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_vibol_states_GameState
#include <com/ukuleledog/games/vibol/states/GameState.h>
#endif
#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_openfl__v2_Lib
#include <openfl/_v2/Lib.h>
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
#ifndef INCLUDED_openfl__v2_display_MovieClip
#include <openfl/_v2/display/MovieClip.h>
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
#ifndef INCLUDED_openfl__v2_text_TextField
#include <openfl/_v2/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_display_StageAlign
#include <openfl/display/StageAlign.h>
#endif
#ifndef INCLUDED_openfl_display_StageScaleMode
#include <openfl/display/StageScaleMode.h>
#endif
namespace com{
namespace ukuleledog{
namespace games{
namespace vibol{

Void Main_obj::__construct()
{
HX_STACK_FRAME("com.ukuleledog.games.vibol.Main","new",0x04e70f70,"com.ukuleledog.games.vibol.Main.new","com/ukuleledog/games/vibol/Main.hx",68,0x549509de)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(69)
	super::__construct();
	HX_STACK_LINE(70)
	this->addEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->added_dyn(),null(),null(),null());
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Void Main_obj::resize( Dynamic e){
{
		HX_STACK_FRAME("com.ukuleledog.games.vibol.Main","resize",0x90cce4e4,"com.ukuleledog.games.vibol.Main.resize","com/ukuleledog/games/vibol/Main.hx",28,0x549509de)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(28)
		if ((!(this->inited))){
			HX_STACK_LINE(28)
			this->init();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,resize,(void))

Void Main_obj::init( ){
{
		HX_STACK_FRAME("com.ukuleledog.games.vibol.Main","init",0x41ff2a00,"com.ukuleledog.games.vibol.Main.init","com/ukuleledog/games/vibol/Main.hx",33,0x549509de)
		HX_STACK_THIS(this)
		HX_STACK_LINE(34)
		if ((this->inited)){
			HX_STACK_LINE(34)
			return null();
		}
		HX_STACK_LINE(35)
		this->inited = true;
		HX_STACK_LINE(46)
		::com::ukuleledog::games::vibol::states::GameState _g = ::com::ukuleledog::games::vibol::states::GameState_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(46)
		this->currentState = _g;
		HX_STACK_LINE(47)
		this->currentState->addEventListener(::openfl::_v2::events::Event_obj::COMPLETE,this->startGame_dyn(),null(),null(),null());
		HX_STACK_LINE(48)
		this->addChild(this->currentState);
		HX_STACK_LINE(50)
		::com::kircode::debug::FPS_Mem _g1 = ::com::kircode::debug::FPS_Mem_obj::__new((int)10,(int)10,(int)16777215);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(50)
		this->fps = _g1;
		HX_STACK_LINE(51)
		this->addChild(this->fps);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,init,(void))

Void Main_obj::startGame( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.ukuleledog.games.vibol.Main","startGame",0x93b65884,"com.ukuleledog.games.vibol.Main.startGame","com/ukuleledog/games/vibol/Main.hx",55,0x549509de)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(56)
		this->removeChild(this->fps);
		HX_STACK_LINE(57)
		this->removeChild(this->currentState);
		HX_STACK_LINE(58)
		::com::ukuleledog::games::vibol::states::GameState _g = ::com::ukuleledog::games::vibol::states::GameState_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(58)
		this->currentState = _g;
		HX_STACK_LINE(59)
		this->currentState->set_alpha((int)0);
		HX_STACK_LINE(60)
		this->addChild(this->currentState);
		HX_STACK_LINE(61)
		this->addChild(this->fps);
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/Main.hx",62,0x549509de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , (int)1,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(62)
		::motion::Actuate_obj::tween(this->currentState,0.5,_Function_1_1::Block(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,startGame,(void))

Void Main_obj::added( Dynamic e){
{
		HX_STACK_FRAME("com.ukuleledog.games.vibol.Main","added",0xdb70f7d0,"com.ukuleledog.games.vibol.Main.added","com/ukuleledog/games/vibol/Main.hx",74,0x549509de)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(75)
		this->removeEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->added_dyn(),null());
		HX_STACK_LINE(76)
		this->get_stage()->addEventListener(::openfl::_v2::events::Event_obj::RESIZE,this->resize_dyn(),null(),null(),null());
		HX_STACK_LINE(80)
		this->init();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,added,(void))

Void Main_obj::main( ){
{
		HX_STACK_FRAME("com.ukuleledog.games.vibol.Main","main",0x449a2729,"com.ukuleledog.games.vibol.Main.main","com/ukuleledog/games/vibol/Main.hx",85,0x549509de)
		HX_STACK_LINE(87)
		::openfl::_v2::Lib_obj::get_current()->get_stage()->set_align(::openfl::display::StageAlign_obj::TOP_LEFT);
		HX_STACK_LINE(88)
		::openfl::_v2::Lib_obj::get_current()->get_stage()->set_scaleMode(::openfl::display::StageScaleMode_obj::NO_SCALE);
		HX_STACK_LINE(89)
		::com::ukuleledog::games::vibol::Main _g = ::com::ukuleledog::games::vibol::Main_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(89)
		::openfl::_v2::Lib_obj::get_current()->addChild(_g);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(inited,"inited");
	HX_MARK_MEMBER_NAME(currentState,"currentState");
	HX_MARK_MEMBER_NAME(fps,"fps");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(inited,"inited");
	HX_VISIT_MEMBER_NAME(currentState,"currentState");
	HX_VISIT_MEMBER_NAME(fps,"fps");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"fps") ) { return fps; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"added") ) { return added_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"inited") ) { return inited; }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startGame") ) { return startGame_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentState") ) { return currentState; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"fps") ) { fps=inValue.Cast< ::com::kircode::debug::FPS_Mem >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"inited") ) { inited=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentState") ) { currentState=inValue.Cast< ::com::ukuleledog::games::core::State >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("inited"));
	outFields->push(HX_CSTRING("currentState"));
	outFields->push(HX_CSTRING("fps"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("main"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Main_obj,inited),HX_CSTRING("inited")},
	{hx::fsObject /*::com::ukuleledog::games::core::State*/ ,(int)offsetof(Main_obj,currentState),HX_CSTRING("currentState")},
	{hx::fsObject /*::com::kircode::debug::FPS_Mem*/ ,(int)offsetof(Main_obj,fps),HX_CSTRING("fps")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("inited"),
	HX_CSTRING("currentState"),
	HX_CSTRING("fps"),
	HX_CSTRING("resize"),
	HX_CSTRING("init"),
	HX_CSTRING("startGame"),
	HX_CSTRING("added"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#endif

Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ukuleledog.games.vibol.Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
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

void Main_obj::__boot()
{
}

} // end namespace com
} // end namespace ukuleledog
} // end namespace games
} // end namespace vibol
