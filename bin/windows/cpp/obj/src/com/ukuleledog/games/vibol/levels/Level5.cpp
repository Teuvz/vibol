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
#ifndef INCLUDED_com_ukuleledog_games_core_Hero
#include <com/ukuleledog/games/core/Hero.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_core_Level
#include <com/ukuleledog/games/core/Level.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_vibol_elements_Block
#include <com/ukuleledog/games/vibol/elements/Block.h>
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
#ifndef INCLUDED_com_ukuleledog_games_vibol_enemies_Boss
#include <com/ukuleledog/games/vibol/enemies/Boss.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_vibol_enemies_Orc
#include <com/ukuleledog/games/vibol/enemies/Orc.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_vibol_levels_Level5
#include <com/ukuleledog/games/vibol/levels/Level5.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_vibol_levels_VibolLevel
#include <com/ukuleledog/games/vibol/levels/VibolLevel.h>
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
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
namespace com{
namespace ukuleledog{
namespace games{
namespace vibol{
namespace levels{

Void Level5_obj::__construct()
{
HX_STACK_FRAME("com.ukuleledog.games.vibol.levels.Level5","new",0xd5d4591d,"com.ukuleledog.games.vibol.levels.Level5.new","com/ukuleledog/games/vibol/levels/Level5.hx",43,0xe205a934)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(44)
	super::__construct();
	HX_STACK_LINE(45)
	this->activateFighting();
	HX_STACK_LINE(47)
	::com::ukuleledog::games::vibol::elements::LongBlock _g = ::com::ukuleledog::games::vibol::elements::LongBlock_obj::__new((int)20,null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(47)
	this->floor1 = _g;
	HX_STACK_LINE(48)
	this->addElement(this->floor1,(int)7,null());
	HX_STACK_LINE(50)
	::com::ukuleledog::games::vibol::enemies::Orc _g1 = ::com::ukuleledog::games::vibol::enemies::Orc_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(50)
	this->orc1 = _g1;
	HX_STACK_LINE(51)
	this->addEnnemy(this->orc1,(int)6,(int)4);
	HX_STACK_LINE(52)
	this->orc1->setRoaming((int)1,null());
	HX_STACK_LINE(54)
	::com::ukuleledog::games::vibol::enemies::Orc _g2 = ::com::ukuleledog::games::vibol::enemies::Orc_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(54)
	this->orc2 = _g2;
	HX_STACK_LINE(55)
	this->addEnnemy(this->orc2,(int)6,(int)7);
	HX_STACK_LINE(56)
	this->orc2->setRoaming((int)1,HX_CSTRING("left"));
	HX_STACK_LINE(58)
	::com::ukuleledog::games::vibol::elements::Block _g3 = ::com::ukuleledog::games::vibol::elements::Block_obj::__new(null(),null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(58)
	this->block1 = _g3;
	HX_STACK_LINE(59)
	this->addElement(this->block1,(int)6,(int)12);
	HX_STACK_LINE(61)
	::com::ukuleledog::games::vibol::enemies::Orc _g4 = ::com::ukuleledog::games::vibol::enemies::Orc_obj::__new();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(61)
	this->orc3 = _g4;
	HX_STACK_LINE(62)
	this->addEnnemy(this->orc3,(int)5,(int)12);
	HX_STACK_LINE(64)
	::com::ukuleledog::games::vibol::elements::Block _g5 = ::com::ukuleledog::games::vibol::elements::Block_obj::__new(null(),null());		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(64)
	this->block2 = _g5;
	HX_STACK_LINE(65)
	this->addElement(this->block2,(int)6,(int)18);
	HX_STACK_LINE(67)
	::com::ukuleledog::games::vibol::enemies::Orc _g6 = ::com::ukuleledog::games::vibol::enemies::Orc_obj::__new();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(67)
	this->orc4 = _g6;
	HX_STACK_LINE(68)
	this->addEnnemy(this->orc4,(int)5,(int)18);
	HX_STACK_LINE(69)
	this->orc4->setHealth((int)3);
	HX_STACK_LINE(71)
	::com::ukuleledog::games::vibol::elements::LongBlock _g7 = ::com::ukuleledog::games::vibol::elements::LongBlock_obj::__new((int)20,null());		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(71)
	this->floor2 = _g7;
	HX_STACK_LINE(72)
	this->addElement(this->floor2,(int)7,(int)24);
	HX_STACK_LINE(74)
	::com::ukuleledog::games::vibol::elements::GameEvent _g8 = ::com::ukuleledog::games::vibol::elements::GameEvent_obj::__new(HX_CSTRING("pan"));		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(74)
	this->event1 = _g8;
	HX_STACK_LINE(75)
	this->addGameEvent(this->event1,(int)4,(int)19);
	HX_STACK_LINE(77)
	::com::ukuleledog::games::vibol::enemies::Orc _g9 = ::com::ukuleledog::games::vibol::enemies::Orc_obj::__new();		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(77)
	this->orc5 = _g9;
	HX_STACK_LINE(78)
	this->addEnnemy(this->orc5,(int)6,(int)28);
	HX_STACK_LINE(79)
	this->orc5->setRoaming((int)1,HX_CSTRING("left"));
	HX_STACK_LINE(80)
	this->orc5->setHealth((int)3);
	HX_STACK_LINE(82)
	::com::ukuleledog::games::vibol::enemies::Boss _g10 = ::com::ukuleledog::games::vibol::enemies::Boss_obj::__new();		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(82)
	this->boss = _g10;
	HX_STACK_LINE(83)
	this->addEnnemy(this->boss,(int)3,(int)26);
	HX_STACK_LINE(85)
	::com::ukuleledog::games::vibol::elements::GameEvent _g11 = ::com::ukuleledog::games::vibol::elements::GameEvent_obj::__new(HX_CSTRING("ending"));		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(85)
	this->event1 = _g11;
	HX_STACK_LINE(86)
	this->addGameEvent(this->event1,(int)5,(int)40);
	HX_STACK_LINE(88)
	::com::ukuleledog::games::vibol::elements::Vibol _g12 = ::com::ukuleledog::games::vibol::elements::Vibol_obj::__new();		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(88)
	this->setHero(_g12);
	HX_STACK_LINE(89)
	::openfl::_v2::geom::Point _g13 = ::openfl::_v2::geom::Point_obj::__new((int)1,(int)6);		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(89)
	this->startingPosition = _g13;
	HX_STACK_LINE(91)
	::openfl::_v2::display::BitmapData thing = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/background5.png"),null());		HX_STACK_VAR(thing,"thing");
	HX_STACK_LINE(92)
	this->get_graphics()->beginBitmapFill(thing,null(),null(),null());
	HX_STACK_LINE(93)
	int _g14 = thing->get_width();		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(93)
	this->get_graphics()->drawRect((int)0,(int)0,_g14,(int)514);
	HX_STACK_LINE(94)
	this->get_graphics()->endFill();
	HX_STACK_LINE(96)
	this->init();
}
;
	return null();
}

//Level5_obj::~Level5_obj() { }

Dynamic Level5_obj::__CreateEmpty() { return  new Level5_obj; }
hx::ObjectPtr< Level5_obj > Level5_obj::__new()
{  hx::ObjectPtr< Level5_obj > result = new Level5_obj();
	result->__construct();
	return result;}

Dynamic Level5_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Level5_obj > result = new Level5_obj();
	result->__construct();
	return result;}

Void Level5_obj::manageEvent( ::com::ukuleledog::games::vibol::elements::GameEvent _gameEvent){
{
		HX_STACK_FRAME("com.ukuleledog.games.vibol.levels.Level5","manageEvent",0x8266f132,"com.ukuleledog.games.vibol.levels.Level5.manageEvent","com/ukuleledog/games/vibol/levels/Level5.hx",100,0xe205a934)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_gameEvent,"_gameEvent")
		HX_STACK_LINE(99)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(102)
		::String _g1 = _gameEvent->getName();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(102)
		if (((_g1 == HX_CSTRING("pan")))){
			HX_STACK_LINE(104)
			this->playing = false;
			HX_STACK_LINE(106)
			::motion::easing::IEasing _g11 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g11,"_g11");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/levels/Level5.hx",106,0xe205a934)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("x") , (int)1216,false);
						__result->Add(HX_CSTRING("y") , (int)384,false);
						return __result;
					}
					return null();
				}
			};

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,Array< ::Dynamic >,_g)
			Void run(){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","com/ukuleledog/games/vibol/levels/Level5.hx",108,0xe205a934)
				{
					struct _Function_3_1{
						inline static Dynamic Block( Array< ::Dynamic > &_g){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/levels/Level5.hx",108,0xe205a934)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("x") , ((int)0 - ((_g->__get((int)0).StaticCast< ::com::ukuleledog::games::vibol::levels::Level5 >()->floor2->get_x() - (int)64))),false);
								return __result;
							}
							return null();
						}
					};

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_2,Array< ::Dynamic >,_g)
					Void run(){
						HX_STACK_FRAME("*","_Function_3_2",0x520271ba,"*._Function_3_2","com/ukuleledog/games/vibol/levels/Level5.hx",110,0xe205a934)
						{
							struct _Function_4_1{
								inline static Dynamic Block( Array< ::Dynamic > &_g){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/levels/Level5.hx",110,0xe205a934)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_CSTRING("x") , _g->__get((int)0).StaticCast< ::com::ukuleledog::games::vibol::levels::Level5 >()->floor2->get_x(),false);
										return __result;
									}
									return null();
								}
							};

							HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_2,Array< ::Dynamic >,_g)
							Void run(){
								HX_STACK_FRAME("*","_Function_4_2",0x520333fb,"*._Function_4_2","com/ukuleledog/games/vibol/levels/Level5.hx",110,0xe205a934)
								{
									HX_STACK_LINE(112)
									::haxe::Log_obj::trace(HX_CSTRING("animate"),hx::SourceInfo(HX_CSTRING("Level5.hx"),112,HX_CSTRING("com.ukuleledog.games.vibol.levels.Level5"),HX_CSTRING("manageEvent")));
									struct _Function_5_1{
										inline static Dynamic Block( ){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/levels/Level5.hx",114,0xe205a934)
											{
												hx::Anon __result = hx::Anon_obj::Create();
												__result->Add(HX_CSTRING("x") , (int)2240,false);
												return __result;
											}
											return null();
										}
									};

									HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_5_2,Array< ::Dynamic >,_g)
									Void run(){
										HX_STACK_FRAME("*","_Function_5_2",0x5203f63c,"*._Function_5_2","com/ukuleledog/games/vibol/levels/Level5.hx",115,0xe205a934)
										{
											struct _Function_6_1{
												inline static Dynamic Block( ){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/levels/Level5.hx",115,0xe205a934)
													{
														hx::Anon __result = hx::Anon_obj::Create();
														__result->Add(HX_CSTRING("x") , -1005.9,false);
														return __result;
													}
													return null();
												}
											};

											HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_6_2,Array< ::Dynamic >,_g)
											Void run(){
												HX_STACK_FRAME("*","_Function_6_2",0x5204b87d,"*._Function_6_2","com/ukuleledog/games/vibol/levels/Level5.hx",115,0xe205a934)
												{
													HX_STACK_LINE(116)
													_g->__get((int)0).StaticCast< ::com::ukuleledog::games::vibol::levels::Level5 >()->boss->setRoaming((int)1,null());
													HX_STACK_LINE(117)
													_g->__get((int)0).StaticCast< ::com::ukuleledog::games::vibol::levels::Level5 >()->endJump();
													HX_STACK_LINE(118)
													_g->__get((int)0).StaticCast< ::com::ukuleledog::games::vibol::levels::Level5 >()->playing = true;
												}
												return null();
											}
											HX_END_LOCAL_FUNC0((void))

											HX_STACK_LINE(115)
											::motion::Actuate_obj::tween(_g->__get((int)0).StaticCast< ::com::ukuleledog::games::vibol::levels::Level5 >(),(int)5,_Function_6_1::Block(),null(),null())->ease(::motion::easing::Linear_obj::get_easeNone())->onComplete( Dynamic(new _Function_6_2(_g)),null());
										}
										return null();
									}
									HX_END_LOCAL_FUNC0((void))

									HX_STACK_LINE(114)
									::motion::Actuate_obj::tween(_g->__get((int)0).StaticCast< ::com::ukuleledog::games::vibol::levels::Level5 >()->boss,(int)5,_Function_5_1::Block(),null(),null())->ease(::motion::easing::Linear_obj::get_easeNone())->delay((int)3)->onComplete( Dynamic(new _Function_5_2(_g)),null());
								}
								return null();
							}
							HX_END_LOCAL_FUNC0((void))

							HX_STACK_LINE(110)
							::motion::Actuate_obj::tween(_g->__get((int)0).StaticCast< ::com::ukuleledog::games::vibol::levels::Level5 >()->boss,(int)2,_Function_4_1::Block(_g),null(),null())->ease(::motion::easing::Linear_obj::get_easeNone())->onComplete( Dynamic(new _Function_4_2(_g)),null());
						}
						return null();
					}
					HX_END_LOCAL_FUNC0((void))

					HX_STACK_LINE(108)
					::motion::Actuate_obj::tween(_g->__get((int)0).StaticCast< ::com::ukuleledog::games::vibol::levels::Level5 >(),(int)5,_Function_3_1::Block(_g),null(),null())->ease(::motion::easing::Linear_obj::get_easeNone())->onComplete( Dynamic(new _Function_3_2(_g)),null());
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(106)
			::motion::Actuate_obj::tween(this->hero,0.8,_Function_2_1::Block(),null(),null())->ease(_g11)->onComplete( Dynamic(new _Function_2_2(_g)),null());
		}
		else{
			HX_STACK_LINE(130)
			this->playing = false;
			HX_STACK_LINE(132)
			::haxe::Log_obj::trace(HX_CSTRING("the end"),hx::SourceInfo(HX_CSTRING("Level5.hx"),132,HX_CSTRING("com.ukuleledog.games.vibol.levels.Level5"),HX_CSTRING("manageEvent")));
		}
	}
return null();
}



Level5_obj::Level5_obj()
{
}

void Level5_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Level5);
	HX_MARK_MEMBER_NAME(floor1,"floor1");
	HX_MARK_MEMBER_NAME(orc1,"orc1");
	HX_MARK_MEMBER_NAME(orc2,"orc2");
	HX_MARK_MEMBER_NAME(block1,"block1");
	HX_MARK_MEMBER_NAME(orc3,"orc3");
	HX_MARK_MEMBER_NAME(block2,"block2");
	HX_MARK_MEMBER_NAME(orc4,"orc4");
	HX_MARK_MEMBER_NAME(floor2,"floor2");
	HX_MARK_MEMBER_NAME(event1,"event1");
	HX_MARK_MEMBER_NAME(orc5,"orc5");
	HX_MARK_MEMBER_NAME(boss,"boss");
	HX_MARK_MEMBER_NAME(event2,"event2");
	::com::ukuleledog::games::vibol::levels::VibolLevel_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Level5_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(floor1,"floor1");
	HX_VISIT_MEMBER_NAME(orc1,"orc1");
	HX_VISIT_MEMBER_NAME(orc2,"orc2");
	HX_VISIT_MEMBER_NAME(block1,"block1");
	HX_VISIT_MEMBER_NAME(orc3,"orc3");
	HX_VISIT_MEMBER_NAME(block2,"block2");
	HX_VISIT_MEMBER_NAME(orc4,"orc4");
	HX_VISIT_MEMBER_NAME(floor2,"floor2");
	HX_VISIT_MEMBER_NAME(event1,"event1");
	HX_VISIT_MEMBER_NAME(orc5,"orc5");
	HX_VISIT_MEMBER_NAME(boss,"boss");
	HX_VISIT_MEMBER_NAME(event2,"event2");
	::com::ukuleledog::games::vibol::levels::VibolLevel_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Level5_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"orc1") ) { return orc1; }
		if (HX_FIELD_EQ(inName,"orc2") ) { return orc2; }
		if (HX_FIELD_EQ(inName,"orc3") ) { return orc3; }
		if (HX_FIELD_EQ(inName,"orc4") ) { return orc4; }
		if (HX_FIELD_EQ(inName,"orc5") ) { return orc5; }
		if (HX_FIELD_EQ(inName,"boss") ) { return boss; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"floor1") ) { return floor1; }
		if (HX_FIELD_EQ(inName,"block1") ) { return block1; }
		if (HX_FIELD_EQ(inName,"block2") ) { return block2; }
		if (HX_FIELD_EQ(inName,"floor2") ) { return floor2; }
		if (HX_FIELD_EQ(inName,"event1") ) { return event1; }
		if (HX_FIELD_EQ(inName,"event2") ) { return event2; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"manageEvent") ) { return manageEvent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Level5_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"orc1") ) { orc1=inValue.Cast< ::com::ukuleledog::games::vibol::enemies::Orc >(); return inValue; }
		if (HX_FIELD_EQ(inName,"orc2") ) { orc2=inValue.Cast< ::com::ukuleledog::games::vibol::enemies::Orc >(); return inValue; }
		if (HX_FIELD_EQ(inName,"orc3") ) { orc3=inValue.Cast< ::com::ukuleledog::games::vibol::enemies::Orc >(); return inValue; }
		if (HX_FIELD_EQ(inName,"orc4") ) { orc4=inValue.Cast< ::com::ukuleledog::games::vibol::enemies::Orc >(); return inValue; }
		if (HX_FIELD_EQ(inName,"orc5") ) { orc5=inValue.Cast< ::com::ukuleledog::games::vibol::enemies::Orc >(); return inValue; }
		if (HX_FIELD_EQ(inName,"boss") ) { boss=inValue.Cast< ::com::ukuleledog::games::vibol::enemies::Boss >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"floor1") ) { floor1=inValue.Cast< ::com::ukuleledog::games::vibol::elements::LongBlock >(); return inValue; }
		if (HX_FIELD_EQ(inName,"block1") ) { block1=inValue.Cast< ::com::ukuleledog::games::vibol::elements::Block >(); return inValue; }
		if (HX_FIELD_EQ(inName,"block2") ) { block2=inValue.Cast< ::com::ukuleledog::games::vibol::elements::Block >(); return inValue; }
		if (HX_FIELD_EQ(inName,"floor2") ) { floor2=inValue.Cast< ::com::ukuleledog::games::vibol::elements::LongBlock >(); return inValue; }
		if (HX_FIELD_EQ(inName,"event1") ) { event1=inValue.Cast< ::com::ukuleledog::games::vibol::elements::GameEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"event2") ) { event2=inValue.Cast< ::com::ukuleledog::games::vibol::elements::GameEvent >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Level5_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("floor1"));
	outFields->push(HX_CSTRING("orc1"));
	outFields->push(HX_CSTRING("orc2"));
	outFields->push(HX_CSTRING("block1"));
	outFields->push(HX_CSTRING("orc3"));
	outFields->push(HX_CSTRING("block2"));
	outFields->push(HX_CSTRING("orc4"));
	outFields->push(HX_CSTRING("floor2"));
	outFields->push(HX_CSTRING("event1"));
	outFields->push(HX_CSTRING("orc5"));
	outFields->push(HX_CSTRING("boss"));
	outFields->push(HX_CSTRING("event2"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::ukuleledog::games::vibol::elements::LongBlock*/ ,(int)offsetof(Level5_obj,floor1),HX_CSTRING("floor1")},
	{hx::fsObject /*::com::ukuleledog::games::vibol::enemies::Orc*/ ,(int)offsetof(Level5_obj,orc1),HX_CSTRING("orc1")},
	{hx::fsObject /*::com::ukuleledog::games::vibol::enemies::Orc*/ ,(int)offsetof(Level5_obj,orc2),HX_CSTRING("orc2")},
	{hx::fsObject /*::com::ukuleledog::games::vibol::elements::Block*/ ,(int)offsetof(Level5_obj,block1),HX_CSTRING("block1")},
	{hx::fsObject /*::com::ukuleledog::games::vibol::enemies::Orc*/ ,(int)offsetof(Level5_obj,orc3),HX_CSTRING("orc3")},
	{hx::fsObject /*::com::ukuleledog::games::vibol::elements::Block*/ ,(int)offsetof(Level5_obj,block2),HX_CSTRING("block2")},
	{hx::fsObject /*::com::ukuleledog::games::vibol::enemies::Orc*/ ,(int)offsetof(Level5_obj,orc4),HX_CSTRING("orc4")},
	{hx::fsObject /*::com::ukuleledog::games::vibol::elements::LongBlock*/ ,(int)offsetof(Level5_obj,floor2),HX_CSTRING("floor2")},
	{hx::fsObject /*::com::ukuleledog::games::vibol::elements::GameEvent*/ ,(int)offsetof(Level5_obj,event1),HX_CSTRING("event1")},
	{hx::fsObject /*::com::ukuleledog::games::vibol::enemies::Orc*/ ,(int)offsetof(Level5_obj,orc5),HX_CSTRING("orc5")},
	{hx::fsObject /*::com::ukuleledog::games::vibol::enemies::Boss*/ ,(int)offsetof(Level5_obj,boss),HX_CSTRING("boss")},
	{hx::fsObject /*::com::ukuleledog::games::vibol::elements::GameEvent*/ ,(int)offsetof(Level5_obj,event2),HX_CSTRING("event2")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("floor1"),
	HX_CSTRING("orc1"),
	HX_CSTRING("orc2"),
	HX_CSTRING("block1"),
	HX_CSTRING("orc3"),
	HX_CSTRING("block2"),
	HX_CSTRING("orc4"),
	HX_CSTRING("floor2"),
	HX_CSTRING("event1"),
	HX_CSTRING("orc5"),
	HX_CSTRING("boss"),
	HX_CSTRING("event2"),
	HX_CSTRING("manageEvent"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Level5_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Level5_obj::__mClass,"__mClass");
};

#endif

Class Level5_obj::__mClass;

void Level5_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ukuleledog.games.vibol.levels.Level5"), hx::TCanCast< Level5_obj> ,sStaticFields,sMemberFields,
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

void Level5_obj::__boot()
{
}

} // end namespace com
} // end namespace ukuleledog
} // end namespace games
} // end namespace vibol
} // end namespace levels
