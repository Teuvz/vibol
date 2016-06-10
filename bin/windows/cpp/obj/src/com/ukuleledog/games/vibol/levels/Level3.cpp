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
#ifndef INCLUDED_com_ukuleledog_games_core_Level
#include <com/ukuleledog/games/core/Level.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_vibol_elements_GameEvent
#include <com/ukuleledog/games/vibol/elements/GameEvent.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_vibol_elements_LongBlock
#include <com/ukuleledog/games/vibol/elements/LongBlock.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_vibol_elements_Vibol
#include <com/ukuleledog/games/vibol/elements/Vibol.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_vibol_levels_Level3
#include <com/ukuleledog/games/vibol/levels/Level3.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_vibol_levels_VibolLevel
#include <com/ukuleledog/games/vibol/levels/VibolLevel.h>
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
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
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
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
namespace com{
namespace ukuleledog{
namespace games{
namespace vibol{
namespace levels{

Void Level3_obj::__construct()
{
HX_STACK_FRAME("com.ukuleledog.games.vibol.levels.Level3","new",0xaf07301b,"com.ukuleledog.games.vibol.levels.Level3.new","com/ukuleledog/games/vibol/levels/Level3.hx",34,0xe0b33bf6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(35)
	super::__construct();
	HX_STACK_LINE(37)
	::com::ukuleledog::games::vibol::elements::LongBlock _g = ::com::ukuleledog::games::vibol::elements::LongBlock_obj::__new((int)8,null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(37)
	this->floor1 = _g;
	HX_STACK_LINE(38)
	this->addElement(this->floor1,(int)7,null());
	HX_STACK_LINE(40)
	::com::ukuleledog::games::vibol::elements::LongBlock _g1 = ::com::ukuleledog::games::vibol::elements::LongBlock_obj::__new((int)6,null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(40)
	this->floor2 = _g1;
	HX_STACK_LINE(41)
	this->addElement(this->floor2,(int)6,(int)2);
	HX_STACK_LINE(43)
	::com::ukuleledog::games::vibol::elements::GameEvent _g2 = ::com::ukuleledog::games::vibol::elements::GameEvent_obj::__new(null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(43)
	this->event = _g2;
	HX_STACK_LINE(44)
	this->addGameEvent(this->event,(int)4,(int)3);
	HX_STACK_LINE(46)
	::com::ukuleledog::games::vibol::elements::Vibol _g3 = ::com::ukuleledog::games::vibol::elements::Vibol_obj::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(46)
	this->setHero(_g3);
	HX_STACK_LINE(47)
	::openfl::_v2::geom::Point _g4 = ::openfl::_v2::geom::Point_obj::__new((int)0,(int)6);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(47)
	this->startingPosition = _g4;
	HX_STACK_LINE(49)
	::openfl::_v2::display::BitmapData thing = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/background3.png"),null());		HX_STACK_VAR(thing,"thing");
	HX_STACK_LINE(50)
	this->get_graphics()->beginBitmapFill(thing,null(),null(),null());
	HX_STACK_LINE(51)
	int _g5 = thing->get_width();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(51)
	this->get_graphics()->drawRect((int)0,(int)0,_g5,(int)514);
	HX_STACK_LINE(52)
	this->get_graphics()->endFill();
	HX_STACK_LINE(54)
	this->init();
}
;
	return null();
}

//Level3_obj::~Level3_obj() { }

Dynamic Level3_obj::__CreateEmpty() { return  new Level3_obj; }
hx::ObjectPtr< Level3_obj > Level3_obj::__new()
{  hx::ObjectPtr< Level3_obj > result = new Level3_obj();
	result->__construct();
	return result;}

Dynamic Level3_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Level3_obj > result = new Level3_obj();
	result->__construct();
	return result;}

Void Level3_obj::manageEvent( ::com::ukuleledog::games::vibol::elements::GameEvent _gameEvent){
{
		HX_STACK_FRAME("com.ukuleledog.games.vibol.levels.Level3","manageEvent",0xf6e5f630,"com.ukuleledog.games.vibol.levels.Level3.manageEvent","com/ukuleledog/games/vibol/levels/Level3.hx",59,0xe0b33bf6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_gameEvent,"_gameEvent")
		HX_STACK_LINE(58)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(61)
		this->playing = false;
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/levels/Level3.hx",62,0xe0b33bf6)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("x") , 224.,false);
					__result->Add(HX_CSTRING("y") , (int)320,false);
					return __result;
				}
				return null();
			}
		};

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,Array< ::Dynamic >,_g)
		Void run(){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","com/ukuleledog/games/vibol/levels/Level3.hx",63,0xe0b33bf6)
			{
				struct _Function_2_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/levels/Level3.hx",63,0xe0b33bf6)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("scaleX") , 1.5,false);
							__result->Add(HX_CSTRING("scaleY") , 1.5,false);
							__result->Add(HX_CSTRING("x") , (int)-128,false);
							__result->Add(HX_CSTRING("y") , (int)-192,false);
							return __result;
						}
						return null();
					}
				};

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,Array< ::Dynamic >,_g)
				Void run(){
					HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","com/ukuleledog/games/vibol/levels/Level3.hx",64,0xe0b33bf6)
					{
						struct _Function_3_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/levels/Level3.hx",64,0xe0b33bf6)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("scaleX") , (int)1,false);
									__result->Add(HX_CSTRING("scaleY") , (int)1,false);
									__result->Add(HX_CSTRING("x") , (int)0,false);
									__result->Add(HX_CSTRING("y") , (int)0,false);
									return __result;
								}
								return null();
							}
						};

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_2,Array< ::Dynamic >,_g)
						Void run(){
							HX_STACK_FRAME("*","_Function_3_2",0x520271ba,"*._Function_3_2","com/ukuleledog/games/vibol/levels/Level3.hx",65,0xe0b33bf6)
							{
								struct _Function_4_1{
									inline static Dynamic Block( ){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/levels/Level3.hx",65,0xe0b33bf6)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_CSTRING("x") , (int)448,false);
											return __result;
										}
										return null();
									}
								};

								HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_2,Array< ::Dynamic >,_g)
								Void run(){
									HX_STACK_FRAME("*","_Function_4_2",0x520333fb,"*._Function_4_2","com/ukuleledog/games/vibol/levels/Level3.hx",66,0xe0b33bf6)
									{
										struct _Function_5_1{
											inline static Dynamic Block( ){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/levels/Level3.hx",66,0xe0b33bf6)
												{
													hx::Anon __result = hx::Anon_obj::Create();
													__result->Add(HX_CSTRING("alpha") , (int)0,false);
													return __result;
												}
												return null();
											}
										};

										HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_5_2,Array< ::Dynamic >,_g)
										Void run(){
											HX_STACK_FRAME("*","_Function_5_2",0x5203f63c,"*._Function_5_2","com/ukuleledog/games/vibol/levels/Level3.hx",67,0xe0b33bf6)
											{
												HX_STACK_LINE(67)
												_g->__get((int)0).StaticCast< ::com::ukuleledog::games::vibol::levels::Level3 >()->dispatchEvent(::openfl::_v2::events::Event_obj::__new(::openfl::_v2::events::Event_obj::COMPLETE,null(),null()));
											}
											return null();
										}
										HX_END_LOCAL_FUNC0((void))

										HX_STACK_LINE(66)
										::motion::Actuate_obj::tween(_g->__get((int)0).StaticCast< ::com::ukuleledog::games::vibol::levels::Level3 >(),(int)1,_Function_5_1::Block(),null(),null())->onComplete( Dynamic(new _Function_5_2(_g)),null());
									}
									return null();
								}
								HX_END_LOCAL_FUNC0((void))

								HX_STACK_LINE(65)
								::motion::Actuate_obj::tween(_g->__get((int)0).StaticCast< ::com::ukuleledog::games::vibol::levels::Level3 >()->hero,(int)3,_Function_4_1::Block(),null(),null())->ease(::motion::easing::Linear_obj::get_easeNone())->onComplete( Dynamic(new _Function_4_2(_g)),null());
							}
							return null();
						}
						HX_END_LOCAL_FUNC0((void))

						HX_STACK_LINE(64)
						::motion::Actuate_obj::tween(_g->__get((int)0).StaticCast< ::com::ukuleledog::games::vibol::levels::Level3 >(),(int)5,_Function_3_1::Block(),null(),null())->ease(::motion::easing::Linear_obj::get_easeNone())->onComplete( Dynamic(new _Function_3_2(_g)),null())->delay((int)10);
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(63)
				::motion::Actuate_obj::tween(_g->__get((int)0).StaticCast< ::com::ukuleledog::games::vibol::levels::Level3 >(),(int)5,_Function_2_1::Block(),null(),null())->ease(::motion::easing::Linear_obj::get_easeNone())->onComplete( Dynamic(new _Function_2_2(_g)),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(62)
		::motion::Actuate_obj::tween(this->hero,(int)1,_Function_1_1::Block(),null(),null())->onComplete( Dynamic(new _Function_1_2(_g)),null());
	}
return null();
}



Level3_obj::Level3_obj()
{
}

void Level3_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Level3);
	HX_MARK_MEMBER_NAME(floor1,"floor1");
	HX_MARK_MEMBER_NAME(floor2,"floor2");
	HX_MARK_MEMBER_NAME(event,"event");
	HX_MARK_MEMBER_NAME(event2,"event2");
	::com::ukuleledog::games::vibol::levels::VibolLevel_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Level3_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(floor1,"floor1");
	HX_VISIT_MEMBER_NAME(floor2,"floor2");
	HX_VISIT_MEMBER_NAME(event,"event");
	HX_VISIT_MEMBER_NAME(event2,"event2");
	::com::ukuleledog::games::vibol::levels::VibolLevel_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Level3_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"event") ) { return event; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"floor1") ) { return floor1; }
		if (HX_FIELD_EQ(inName,"floor2") ) { return floor2; }
		if (HX_FIELD_EQ(inName,"event2") ) { return event2; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"manageEvent") ) { return manageEvent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Level3_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"event") ) { event=inValue.Cast< ::com::ukuleledog::games::vibol::elements::GameEvent >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"floor1") ) { floor1=inValue.Cast< ::com::ukuleledog::games::vibol::elements::LongBlock >(); return inValue; }
		if (HX_FIELD_EQ(inName,"floor2") ) { floor2=inValue.Cast< ::com::ukuleledog::games::vibol::elements::LongBlock >(); return inValue; }
		if (HX_FIELD_EQ(inName,"event2") ) { event2=inValue.Cast< ::com::ukuleledog::games::vibol::elements::GameEvent >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Level3_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("floor1"));
	outFields->push(HX_CSTRING("floor2"));
	outFields->push(HX_CSTRING("event"));
	outFields->push(HX_CSTRING("event2"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::ukuleledog::games::vibol::elements::LongBlock*/ ,(int)offsetof(Level3_obj,floor1),HX_CSTRING("floor1")},
	{hx::fsObject /*::com::ukuleledog::games::vibol::elements::LongBlock*/ ,(int)offsetof(Level3_obj,floor2),HX_CSTRING("floor2")},
	{hx::fsObject /*::com::ukuleledog::games::vibol::elements::GameEvent*/ ,(int)offsetof(Level3_obj,event),HX_CSTRING("event")},
	{hx::fsObject /*::com::ukuleledog::games::vibol::elements::GameEvent*/ ,(int)offsetof(Level3_obj,event2),HX_CSTRING("event2")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("floor1"),
	HX_CSTRING("floor2"),
	HX_CSTRING("event"),
	HX_CSTRING("event2"),
	HX_CSTRING("manageEvent"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Level3_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Level3_obj::__mClass,"__mClass");
};

#endif

Class Level3_obj::__mClass;

void Level3_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ukuleledog.games.vibol.levels.Level3"), hx::TCanCast< Level3_obj> ,sStaticFields,sMemberFields,
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

void Level3_obj::__boot()
{
}

} // end namespace com
} // end namespace ukuleledog
} // end namespace games
} // end namespace vibol
} // end namespace levels
