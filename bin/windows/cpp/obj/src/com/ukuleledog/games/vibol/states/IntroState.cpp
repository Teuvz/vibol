#include <hxcpp.h>

#ifndef INCLUDED_com_ukuleledog_games_core_State
#include <com/ukuleledog/games/core/State.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_vibol_states_IntroState
#include <com/ukuleledog/games/vibol/states/IntroState.h>
#endif
#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_easing_Bounce
#include <motion/easing/Bounce.h>
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
#ifndef INCLUDED_openfl__v2_display_Bitmap
#include <openfl/_v2/display/Bitmap.h>
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
#ifndef INCLUDED_openfl__v2_text_TextField
#include <openfl/_v2/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextFormat
#include <openfl/_v2/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextFormatAlign
#include <openfl/_v2/text/TextFormatAlign.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_Timer
#include <openfl/_v2/utils/Timer.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_events_TimerEvent
#include <openfl/events/TimerEvent.h>
#endif
namespace com{
namespace ukuleledog{
namespace games{
namespace vibol{
namespace states{

Void IntroState_obj::__construct()
{
HX_STACK_FRAME("com.ukuleledog.games.vibol.states.IntroState","new",0x918d387e,"com.ukuleledog.games.vibol.states.IntroState.new","com/ukuleledog/games/vibol/states/IntroState.hx",22,0x369b4573)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(42)
	this->storyStep = (int)0;
	HX_STACK_LINE(46)
	super::__construct();
	HX_STACK_LINE(48)
	::openfl::_v2::display::BitmapData _g = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/introbg1.png"),false);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(48)
	::openfl::_v2::display::Bitmap _g1 = ::openfl::_v2::display::Bitmap_obj::__new(_g,null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(48)
	this->introbg1 = _g1;
	HX_STACK_LINE(49)
	::openfl::_v2::display::BitmapData _g2 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/introbg2.png"),false);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(49)
	::openfl::_v2::display::Bitmap _g3 = ::openfl::_v2::display::Bitmap_obj::__new(_g2,null(),null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(49)
	this->introbg2 = _g3;
	HX_STACK_LINE(50)
	::openfl::_v2::display::BitmapData _g4 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/intro1.png"),false);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(50)
	::openfl::_v2::display::Bitmap _g5 = ::openfl::_v2::display::Bitmap_obj::__new(_g4,null(),null());		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(50)
	this->intro1 = _g5;
	HX_STACK_LINE(51)
	::openfl::_v2::display::BitmapData _g6 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/intro2.png"),false);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(51)
	::openfl::_v2::display::Bitmap _g7 = ::openfl::_v2::display::Bitmap_obj::__new(_g6,null(),null());		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(51)
	this->intro2 = _g7;
	HX_STACK_LINE(52)
	::openfl::_v2::display::BitmapData _g8 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/intro-super.png"),false);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(52)
	::openfl::_v2::display::Bitmap _g9 = ::openfl::_v2::display::Bitmap_obj::__new(_g8,null(),null());		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(52)
	this->supert = _g9;
	HX_STACK_LINE(53)
	::openfl::_v2::display::BitmapData _g10 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/intro-epic.png"),false);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(53)
	::openfl::_v2::display::Bitmap _g11 = ::openfl::_v2::display::Bitmap_obj::__new(_g10,null(),null());		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(53)
	this->epic = _g11;
	HX_STACK_LINE(54)
	::openfl::_v2::display::BitmapData _g12 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/intro-vibol.png"),false);		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(54)
	::openfl::_v2::display::Bitmap _g13 = ::openfl::_v2::display::Bitmap_obj::__new(_g12,null(),null());		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(54)
	this->vibol = _g13;
	HX_STACK_LINE(55)
	::openfl::_v2::display::BitmapData _g14 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/intro-quest.png"),false);		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(55)
	::openfl::_v2::display::Bitmap _g15 = ::openfl::_v2::display::Bitmap_obj::__new(_g14,null(),null());		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(55)
	this->quest = _g15;
	HX_STACK_LINE(56)
	::openfl::_v2::display::BitmapData _g16 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/intro-adventure.png"),false);		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(56)
	::openfl::_v2::display::Bitmap _g17 = ::openfl::_v2::display::Bitmap_obj::__new(_g16,null(),null());		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(56)
	this->adventure = _g17;
	HX_STACK_LINE(58)
	::openfl::_v2::utils::Timer _g18 = ::openfl::_v2::utils::Timer_obj::__new((int)100,null());		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(58)
	this->introTimer = _g18;
	HX_STACK_LINE(59)
	this->introTimer->addEventListener(::openfl::events::TimerEvent_obj::TIMER,this->introLoop_dyn(),null(),null(),null());
	HX_STACK_LINE(62)
	::openfl::_v2::text::TextFormat _g19 = ::openfl::_v2::text::TextFormat_obj::__new(HX_CSTRING("fixedsys"),(int)32,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g19,"_g19");
	HX_STACK_LINE(62)
	this->defaultFormat = _g19;
	HX_STACK_LINE(63)
	this->defaultFormat->align = ::openfl::_v2::text::TextFormatAlign_obj::CENTER;
	HX_STACK_LINE(64)
	::openfl::_v2::text::TextField _g20 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g20,"_g20");
	HX_STACK_LINE(64)
	this->startTextField = _g20;
	HX_STACK_LINE(65)
	::openfl::_v2::text::TextField _g21 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g21,"_g21");
	HX_STACK_LINE(65)
	this->storyTextField1 = _g21;
	HX_STACK_LINE(66)
	::openfl::_v2::text::TextField _g22 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g22,"_g22");
	HX_STACK_LINE(66)
	this->storyTextField2 = _g22;
	HX_STACK_LINE(67)
	::openfl::_v2::text::TextField _g23 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g23,"_g23");
	HX_STACK_LINE(67)
	this->storyTextField3 = _g23;
	HX_STACK_LINE(69)
	::openfl::_v2::utils::Timer _g24 = ::openfl::_v2::utils::Timer_obj::__new((int)1000,null());		HX_STACK_VAR(_g24,"_g24");
	HX_STACK_LINE(69)
	this->textTimer = _g24;
	HX_STACK_LINE(70)
	this->textTimer->addEventListener(::openfl::events::TimerEvent_obj::TIMER,this->textLoop_dyn(),null(),null(),null());
	HX_STACK_LINE(72)
	this->addEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null(),null(),null());
}
;
	return null();
}

//IntroState_obj::~IntroState_obj() { }

Dynamic IntroState_obj::__CreateEmpty() { return  new IntroState_obj; }
hx::ObjectPtr< IntroState_obj > IntroState_obj::__new()
{  hx::ObjectPtr< IntroState_obj > result = new IntroState_obj();
	result->__construct();
	return result;}

Dynamic IntroState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IntroState_obj > result = new IntroState_obj();
	result->__construct();
	return result;}

Void IntroState_obj::init( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.ukuleledog.games.vibol.states.IntroState","init",0xc6bced32,"com.ukuleledog.games.vibol.states.IntroState.init","com/ukuleledog/games/vibol/states/IntroState.hx",76,0x369b4573)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(77)
		this->removeEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null());
		HX_STACK_LINE(79)
		this->introbg1->set_visible(false);
		HX_STACK_LINE(80)
		this->introbg2->set_visible(false);
		HX_STACK_LINE(81)
		this->intro2->set_alpha((int)0);
		HX_STACK_LINE(82)
		this->supert->set_x((int)-300);
		HX_STACK_LINE(83)
		this->epic->set_x((int)300);
		HX_STACK_LINE(84)
		this->vibol->set_x((int)-300);
		HX_STACK_LINE(85)
		this->quest->set_x((int)300);
		HX_STACK_LINE(86)
		this->adventure->set_alpha((int)0);
		HX_STACK_LINE(87)
		this->adventure->set_scaleX(1.3);
		HX_STACK_LINE(88)
		this->adventure->set_scaleY(1.3);
		HX_STACK_LINE(89)
		this->adventure->set_x(-154.2);
		HX_STACK_LINE(91)
		this->addChild(this->introbg1);
		HX_STACK_LINE(92)
		this->addChild(this->introbg2);
		HX_STACK_LINE(93)
		this->addChild(this->intro1);
		HX_STACK_LINE(94)
		this->addChild(this->intro2);
		HX_STACK_LINE(95)
		this->addChild(this->supert);
		HX_STACK_LINE(96)
		this->addChild(this->epic);
		HX_STACK_LINE(97)
		this->addChild(this->vibol);
		HX_STACK_LINE(98)
		this->addChild(this->quest);
		HX_STACK_LINE(99)
		this->addChild(this->adventure);
		HX_STACK_LINE(101)
		this->startTextField->set_defaultTextFormat(this->defaultFormat);
		HX_STACK_LINE(102)
		int _g = this->get_stage()->get_stageWidth();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(102)
		this->startTextField->set_width(_g);
		HX_STACK_LINE(103)
		this->startTextField->set_y((int)450);
		HX_STACK_LINE(104)
		this->startTextField->set_text(HX_CSTRING("Press space to start"));
		HX_STACK_LINE(105)
		this->startTextField->set_visible(false);
		HX_STACK_LINE(106)
		this->addChild(this->startTextField);
		HX_STACK_LINE(108)
		this->storyTextField1->set_defaultTextFormat(this->defaultFormat);
		HX_STACK_LINE(109)
		int _g1 = this->get_stage()->get_stageWidth();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(109)
		this->storyTextField1->set_width(_g1);
		HX_STACK_LINE(110)
		this->storyTextField1->set_y((int)20);
		HX_STACK_LINE(111)
		this->storyTextField1->set_multiline(true);
		HX_STACK_LINE(112)
		this->storyTextField1->set_text(HX_CSTRING("Legend says a young man will one day\n remove the holy sword from the stone."));
		HX_STACK_LINE(113)
		this->storyTextField1->set_alpha((int)0);
		HX_STACK_LINE(114)
		this->addChild(this->storyTextField1);
		HX_STACK_LINE(116)
		this->storyTextField2->set_defaultTextFormat(this->defaultFormat);
		HX_STACK_LINE(117)
		int _g2 = this->get_stage()->get_stageWidth();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(117)
		this->storyTextField2->set_width(_g2);
		HX_STACK_LINE(118)
		this->storyTextField2->set_y((int)80);
		HX_STACK_LINE(119)
		this->storyTextField2->set_multiline(true);
		HX_STACK_LINE(120)
		this->storyTextField2->set_text(HX_CSTRING("It will grant him great powers and charm,\n making him King upon all lands."));
		HX_STACK_LINE(121)
		this->storyTextField2->set_alpha((int)0);
		HX_STACK_LINE(122)
		this->addChild(this->storyTextField2);
		HX_STACK_LINE(124)
		this->storyTextField3->set_defaultTextFormat(this->defaultFormat);
		HX_STACK_LINE(125)
		int _g3 = this->get_stage()->get_stageWidth();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(125)
		this->storyTextField3->set_width(_g3);
		HX_STACK_LINE(126)
		this->storyTextField3->set_y((int)150);
		HX_STACK_LINE(127)
		this->storyTextField3->set_multiline(true);
		HX_STACK_LINE(128)
		this->storyTextField3->set_text(HX_CSTRING("This is the story of the kid who\n became that man."));
		HX_STACK_LINE(129)
		this->storyTextField3->set_alpha((int)0);
		HX_STACK_LINE(130)
		this->addChild(this->storyTextField3);
		HX_STACK_LINE(132)
		this->startAnimation();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IntroState_obj,init,(void))

Void IntroState_obj::startAnimation( ){
{
		HX_STACK_FRAME("com.ukuleledog.games.vibol.states.IntroState","startAnimation",0x5ace2ee4,"com.ukuleledog.games.vibol.states.IntroState.startAnimation","com/ukuleledog/games/vibol/states/IntroState.hx",136,0x369b4573)
		HX_STACK_THIS(this)
		HX_STACK_LINE(135)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/states/IntroState.hx",137,0x369b4573)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , (int)1,false);
					return __result;
				}
				return null();
			}
		};

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,Array< ::Dynamic >,_g)
		Void run(){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","com/ukuleledog/games/vibol/states/IntroState.hx",138,0x369b4573)
			{
				struct _Function_2_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/states/IntroState.hx",138,0x369b4573)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("x") , (int)0,false);
							return __result;
						}
						return null();
					}
				};

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,Array< ::Dynamic >,_g)
				Void run(){
					HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","com/ukuleledog/games/vibol/states/IntroState.hx",139,0x369b4573)
					{
						struct _Function_3_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/states/IntroState.hx",139,0x369b4573)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("x") , (int)0,false);
									return __result;
								}
								return null();
							}
						};

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_2,Array< ::Dynamic >,_g)
						Void run(){
							HX_STACK_FRAME("*","_Function_3_2",0x520271ba,"*._Function_3_2","com/ukuleledog/games/vibol/states/IntroState.hx",140,0x369b4573)
							{
								struct _Function_4_1{
									inline static Dynamic Block( ){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/states/IntroState.hx",140,0x369b4573)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_CSTRING("x") , (int)0,false);
											return __result;
										}
										return null();
									}
								};

								HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_2,Array< ::Dynamic >,_g)
								Void run(){
									HX_STACK_FRAME("*","_Function_4_2",0x520333fb,"*._Function_4_2","com/ukuleledog/games/vibol/states/IntroState.hx",141,0x369b4573)
									{
										struct _Function_5_1{
											inline static Dynamic Block( ){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/states/IntroState.hx",141,0x369b4573)
												{
													hx::Anon __result = hx::Anon_obj::Create();
													__result->Add(HX_CSTRING("x") , (int)0,false);
													return __result;
												}
												return null();
											}
										};

										HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_5_2,Array< ::Dynamic >,_g)
										Void run(){
											HX_STACK_FRAME("*","_Function_5_2",0x5203f63c,"*._Function_5_2","com/ukuleledog/games/vibol/states/IntroState.hx",142,0x369b4573)
											{
												struct _Function_6_1{
													inline static Dynamic Block( ){
														HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/states/IntroState.hx",142,0x369b4573)
														{
															hx::Anon __result = hx::Anon_obj::Create();
															__result->Add(HX_CSTRING("x") , (int)0,false);
															__result->Add(HX_CSTRING("alpha") , (int)1,false);
															__result->Add(HX_CSTRING("scaleX") , (int)1,false);
															__result->Add(HX_CSTRING("scaleY") , (int)1,false);
															return __result;
														}
														return null();
													}
												};
												HX_STACK_LINE(142)
												::motion::Actuate_obj::tween(_g->__get((int)0).StaticCast< ::com::ukuleledog::games::vibol::states::IntroState >()->adventure,(int)3,_Function_6_1::Block(),null(),null())->ease(::motion::easing::Linear_obj::get_easeNone())->onComplete(_g->__get((int)0).StaticCast< ::com::ukuleledog::games::vibol::states::IntroState >()->endAnimation_dyn(),null());
											}
											return null();
										}
										HX_END_LOCAL_FUNC0((void))

										HX_STACK_LINE(141)
										::motion::Actuate_obj::tween(_g->__get((int)0).StaticCast< ::com::ukuleledog::games::vibol::states::IntroState >()->quest,(int)1,_Function_5_1::Block(),null(),null())->ease(::motion::easing::Bounce_obj::get_easeOut())->onComplete( Dynamic(new _Function_5_2(_g)),null());
									}
									return null();
								}
								HX_END_LOCAL_FUNC0((void))

								HX_STACK_LINE(140)
								::motion::Actuate_obj::tween(_g->__get((int)0).StaticCast< ::com::ukuleledog::games::vibol::states::IntroState >()->vibol,(int)1,_Function_4_1::Block(),null(),null())->ease(::motion::easing::Bounce_obj::get_easeOut())->onComplete( Dynamic(new _Function_4_2(_g)),null());
							}
							return null();
						}
						HX_END_LOCAL_FUNC0((void))

						HX_STACK_LINE(139)
						::motion::Actuate_obj::tween(_g->__get((int)0).StaticCast< ::com::ukuleledog::games::vibol::states::IntroState >()->epic,(int)1,_Function_3_1::Block(),null(),null())->ease(::motion::easing::Bounce_obj::get_easeOut())->onComplete( Dynamic(new _Function_3_2(_g)),null());
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(138)
				::motion::Actuate_obj::tween(_g->__get((int)0).StaticCast< ::com::ukuleledog::games::vibol::states::IntroState >()->supert,(int)1,_Function_2_1::Block(),null(),null())->ease(::motion::easing::Bounce_obj::get_easeOut())->onComplete( Dynamic(new _Function_2_2(_g)),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(137)
		::motion::Actuate_obj::tween(this->intro2,(int)2,_Function_1_1::Block(),null(),null())->onComplete( Dynamic(new _Function_1_2(_g)),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IntroState_obj,startAnimation,(void))

Void IntroState_obj::endAnimation( ){
{
		HX_STACK_FRAME("com.ukuleledog.games.vibol.states.IntroState","endAnimation",0x234a9bcb,"com.ukuleledog.games.vibol.states.IntroState.endAnimation","com/ukuleledog/games/vibol/states/IntroState.hx",151,0x369b4573)
		HX_STACK_THIS(this)
		HX_STACK_LINE(152)
		this->introbg1->set_visible(true);
		HX_STACK_LINE(153)
		this->introTimer->start();
		HX_STACK_LINE(154)
		this->textTimer->start();
		HX_STACK_LINE(156)
		this->get_stage()->addEventListener(::openfl::_v2::events::KeyboardEvent_obj::KEY_DOWN,this->startStory_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IntroState_obj,endAnimation,(void))

Void IntroState_obj::introLoop( ::openfl::events::TimerEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.vibol.states.IntroState","introLoop",0xfae0958e,"com.ukuleledog.games.vibol.states.IntroState.introLoop","com/ukuleledog/games/vibol/states/IntroState.hx",160,0x369b4573)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(161)
		bool _g = !(this->introbg1->get_visible());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(161)
		this->introbg1->set_visible(_g);
		HX_STACK_LINE(162)
		bool _g1 = !(this->introbg2->get_visible());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(162)
		this->introbg2->set_visible(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IntroState_obj,introLoop,(void))

Void IntroState_obj::textLoop( ::openfl::events::TimerEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.vibol.states.IntroState","textLoop",0xc71564d3,"com.ukuleledog.games.vibol.states.IntroState.textLoop","com/ukuleledog/games/vibol/states/IntroState.hx",166,0x369b4573)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(167)
		bool _g = !(this->startTextField->get_visible());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(167)
		this->startTextField->set_visible(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IntroState_obj,textLoop,(void))

Void IntroState_obj::startStory( ::openfl::_v2::events::KeyboardEvent e){
{
		HX_STACK_FRAME("com.ukuleledog.games.vibol.states.IntroState","startStory",0xca59e3d5,"com.ukuleledog.games.vibol.states.IntroState.startStory","com/ukuleledog/games/vibol/states/IntroState.hx",171,0x369b4573)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(170)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(172)
		if (((e->keyCode == (int)32))){
			HX_STACK_LINE(174)
			this->get_stage()->removeEventListener(::openfl::_v2::events::KeyboardEvent_obj::KEY_DOWN,this->startStory_dyn(),null());
			HX_STACK_LINE(175)
			this->startTextField->set_visible(false);
			HX_STACK_LINE(176)
			this->textTimer->stop();
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/states/IntroState.hx",178,0x369b4573)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("alpha") , (int)0,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(178)
			::motion::Actuate_obj::tween(this->introbg1,(int)1,_Function_2_1::Block(),null(),null());
			struct _Function_2_2{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/states/IntroState.hx",179,0x369b4573)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("alpha") , (int)0,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(179)
			::motion::Actuate_obj::tween(this->introbg2,(int)1,_Function_2_2::Block(),null(),null());
			struct _Function_2_3{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/states/IntroState.hx",180,0x369b4573)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("alpha") , (int)0,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(180)
			::motion::Actuate_obj::tween(this->supert,(int)1,_Function_2_3::Block(),null(),null());
			struct _Function_2_4{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/states/IntroState.hx",181,0x369b4573)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("alpha") , (int)0,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(181)
			::motion::Actuate_obj::tween(this->epic,(int)1,_Function_2_4::Block(),null(),null());
			struct _Function_2_5{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/states/IntroState.hx",182,0x369b4573)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("alpha") , (int)0,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(182)
			::motion::Actuate_obj::tween(this->vibol,(int)1,_Function_2_5::Block(),null(),null());
			struct _Function_2_6{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/states/IntroState.hx",183,0x369b4573)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("alpha") , (int)0,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(183)
			::motion::Actuate_obj::tween(this->quest,(int)1,_Function_2_6::Block(),null(),null());
			struct _Function_2_7{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/states/IntroState.hx",184,0x369b4573)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("alpha") , (int)0,false);
						return __result;
					}
					return null();
				}
			};

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_8,Array< ::Dynamic >,_g)
			Void run(){
				HX_STACK_FRAME("*","_Function_2_8",0x5201af7f,"*._Function_2_8","com/ukuleledog/games/vibol/states/IntroState.hx",184,0x369b4573)
				{
					HX_STACK_LINE(185)
					_g->__get((int)0).StaticCast< ::com::ukuleledog::games::vibol::states::IntroState >()->introTimer->stop();
					HX_STACK_LINE(186)
					_g->__get((int)0).StaticCast< ::com::ukuleledog::games::vibol::states::IntroState >()->introTimer->removeEventListener(::openfl::events::TimerEvent_obj::TIMER,_g->__get((int)0).StaticCast< ::com::ukuleledog::games::vibol::states::IntroState >()->introLoop_dyn(),null());
					struct _Function_3_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/states/IntroState.hx",188,0x369b4573)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("alpha") , (int)0,false);
								return __result;
							}
							return null();
						}
					};

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_2,Array< ::Dynamic >,_g)
					Void run(){
						HX_STACK_FRAME("*","_Function_3_2",0x520271ba,"*._Function_3_2","com/ukuleledog/games/vibol/states/IntroState.hx",189,0x369b4573)
						{
							struct _Function_4_1{
								inline static Dynamic Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/states/IntroState.hx",189,0x369b4573)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_CSTRING("alpha") , (int)1,false);
										return __result;
									}
									return null();
								}
							};

							HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_2,Array< ::Dynamic >,_g)
							Void run(){
								HX_STACK_FRAME("*","_Function_4_2",0x520333fb,"*._Function_4_2","com/ukuleledog/games/vibol/states/IntroState.hx",190,0x369b4573)
								{
									struct _Function_5_1{
										inline static Dynamic Block( ){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/states/IntroState.hx",190,0x369b4573)
											{
												hx::Anon __result = hx::Anon_obj::Create();
												__result->Add(HX_CSTRING("alpha") , (int)1,false);
												return __result;
											}
											return null();
										}
									};

									HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_5_2,Array< ::Dynamic >,_g)
									Void run(){
										HX_STACK_FRAME("*","_Function_5_2",0x5203f63c,"*._Function_5_2","com/ukuleledog/games/vibol/states/IntroState.hx",191,0x369b4573)
										{
											struct _Function_6_1{
												inline static Dynamic Block( ){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/states/IntroState.hx",191,0x369b4573)
													{
														hx::Anon __result = hx::Anon_obj::Create();
														__result->Add(HX_CSTRING("alpha") , (int)1,false);
														return __result;
													}
													return null();
												}
											};

											HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_6_2,Array< ::Dynamic >,_g)
											Void run(){
												HX_STACK_FRAME("*","_Function_6_2",0x5204b87d,"*._Function_6_2","com/ukuleledog/games/vibol/states/IntroState.hx",191,0x369b4573)
												{
													struct _Function_7_1{
														inline static Dynamic Block( ){
															HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/states/IntroState.hx",192,0x369b4573)
															{
																hx::Anon __result = hx::Anon_obj::Create();
																__result->Add(HX_CSTRING("alpha") , (int)0,false);
																return __result;
															}
															return null();
														}
													};
													HX_STACK_LINE(192)
													::motion::Actuate_obj::tween(_g->__get((int)0).StaticCast< ::com::ukuleledog::games::vibol::states::IntroState >()->storyTextField1,(int)1,_Function_7_1::Block(),null(),null());
													struct _Function_7_2{
														inline static Dynamic Block( ){
															HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/states/IntroState.hx",193,0x369b4573)
															{
																hx::Anon __result = hx::Anon_obj::Create();
																__result->Add(HX_CSTRING("alpha") , (int)0,false);
																return __result;
															}
															return null();
														}
													};
													HX_STACK_LINE(193)
													::motion::Actuate_obj::tween(_g->__get((int)0).StaticCast< ::com::ukuleledog::games::vibol::states::IntroState >()->storyTextField2,(int)1,_Function_7_2::Block(),null(),null());
													struct _Function_7_3{
														inline static Dynamic Block( ){
															HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/states/IntroState.hx",194,0x369b4573)
															{
																hx::Anon __result = hx::Anon_obj::Create();
																__result->Add(HX_CSTRING("alpha") , (int)0,false);
																return __result;
															}
															return null();
														}
													};

													HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_7_4,Array< ::Dynamic >,_g)
													Void run(){
														HX_STACK_FRAME("*","_Function_7_4",0x52057ac0,"*._Function_7_4","com/ukuleledog/games/vibol/states/IntroState.hx",195,0x369b4573)
														{
															struct _Function_8_1{
																inline static Dynamic Block( ){
																	HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/states/IntroState.hx",195,0x369b4573)
																	{
																		hx::Anon __result = hx::Anon_obj::Create();
																		__result->Add(HX_CSTRING("alpha") , (int)0,false);
																		return __result;
																	}
																	return null();
																}
															};

															HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_8_2,Array< ::Dynamic >,_g)
															Void run(){
																HX_STACK_FRAME("*","_Function_8_2",0x52063cff,"*._Function_8_2","com/ukuleledog/games/vibol/states/IntroState.hx",196,0x369b4573)
																{
																	HX_STACK_LINE(196)
																	_g->__get((int)0).StaticCast< ::com::ukuleledog::games::vibol::states::IntroState >()->dispatchEvent(::openfl::_v2::events::Event_obj::__new(::openfl::_v2::events::Event_obj::COMPLETE,null(),null()));
																}
																return null();
															}
															HX_END_LOCAL_FUNC0((void))

															HX_STACK_LINE(195)
															::motion::Actuate_obj::tween(_g->__get((int)0).StaticCast< ::com::ukuleledog::games::vibol::states::IntroState >(),(int)2,_Function_8_1::Block(),null(),null())->onComplete( Dynamic(new _Function_8_2(_g)),null());
														}
														return null();
													}
													HX_END_LOCAL_FUNC0((void))

													HX_STACK_LINE(194)
													::motion::Actuate_obj::tween(_g->__get((int)0).StaticCast< ::com::ukuleledog::games::vibol::states::IntroState >()->storyTextField3,(int)1,_Function_7_3::Block(),null(),null())->onComplete( Dynamic(new _Function_7_4(_g)),null());
												}
												return null();
											}
											HX_END_LOCAL_FUNC0((void))

											HX_STACK_LINE(191)
											::motion::Actuate_obj::tween(_g->__get((int)0).StaticCast< ::com::ukuleledog::games::vibol::states::IntroState >()->storyTextField3,(int)5,_Function_6_1::Block(),null(),null())->onComplete( Dynamic(new _Function_6_2(_g)),null());
										}
										return null();
									}
									HX_END_LOCAL_FUNC0((void))

									HX_STACK_LINE(190)
									::motion::Actuate_obj::tween(_g->__get((int)0).StaticCast< ::com::ukuleledog::games::vibol::states::IntroState >()->storyTextField2,(int)3,_Function_5_1::Block(),null(),null())->onComplete( Dynamic(new _Function_5_2(_g)),null());
								}
								return null();
							}
							HX_END_LOCAL_FUNC0((void))

							HX_STACK_LINE(189)
							::motion::Actuate_obj::tween(_g->__get((int)0).StaticCast< ::com::ukuleledog::games::vibol::states::IntroState >()->storyTextField1,(int)3,_Function_4_1::Block(),null(),null())->onComplete( Dynamic(new _Function_4_2(_g)),null());
						}
						return null();
					}
					HX_END_LOCAL_FUNC0((void))

					HX_STACK_LINE(188)
					::motion::Actuate_obj::tween(_g->__get((int)0).StaticCast< ::com::ukuleledog::games::vibol::states::IntroState >()->intro2,(int)2,_Function_3_1::Block(),null(),null())->onComplete( Dynamic(new _Function_3_2(_g)),null());
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(184)
			::motion::Actuate_obj::tween(this->adventure,(int)1,_Function_2_7::Block(),null(),null())->onComplete( Dynamic(new _Function_2_8(_g)),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IntroState_obj,startStory,(void))


IntroState_obj::IntroState_obj()
{
}

void IntroState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IntroState);
	HX_MARK_MEMBER_NAME(introbg1,"introbg1");
	HX_MARK_MEMBER_NAME(introbg2,"introbg2");
	HX_MARK_MEMBER_NAME(intro1,"intro1");
	HX_MARK_MEMBER_NAME(intro2,"intro2");
	HX_MARK_MEMBER_NAME(supert,"supert");
	HX_MARK_MEMBER_NAME(epic,"epic");
	HX_MARK_MEMBER_NAME(vibol,"vibol");
	HX_MARK_MEMBER_NAME(quest,"quest");
	HX_MARK_MEMBER_NAME(adventure,"adventure");
	HX_MARK_MEMBER_NAME(introTimer,"introTimer");
	HX_MARK_MEMBER_NAME(defaultFormat,"defaultFormat");
	HX_MARK_MEMBER_NAME(startTextField,"startTextField");
	HX_MARK_MEMBER_NAME(storyTextField1,"storyTextField1");
	HX_MARK_MEMBER_NAME(storyTextField2,"storyTextField2");
	HX_MARK_MEMBER_NAME(storyTextField3,"storyTextField3");
	HX_MARK_MEMBER_NAME(textTimer,"textTimer");
	HX_MARK_MEMBER_NAME(storyStep,"storyStep");
	::com::ukuleledog::games::core::State_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void IntroState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(introbg1,"introbg1");
	HX_VISIT_MEMBER_NAME(introbg2,"introbg2");
	HX_VISIT_MEMBER_NAME(intro1,"intro1");
	HX_VISIT_MEMBER_NAME(intro2,"intro2");
	HX_VISIT_MEMBER_NAME(supert,"supert");
	HX_VISIT_MEMBER_NAME(epic,"epic");
	HX_VISIT_MEMBER_NAME(vibol,"vibol");
	HX_VISIT_MEMBER_NAME(quest,"quest");
	HX_VISIT_MEMBER_NAME(adventure,"adventure");
	HX_VISIT_MEMBER_NAME(introTimer,"introTimer");
	HX_VISIT_MEMBER_NAME(defaultFormat,"defaultFormat");
	HX_VISIT_MEMBER_NAME(startTextField,"startTextField");
	HX_VISIT_MEMBER_NAME(storyTextField1,"storyTextField1");
	HX_VISIT_MEMBER_NAME(storyTextField2,"storyTextField2");
	HX_VISIT_MEMBER_NAME(storyTextField3,"storyTextField3");
	HX_VISIT_MEMBER_NAME(textTimer,"textTimer");
	HX_VISIT_MEMBER_NAME(storyStep,"storyStep");
	::com::ukuleledog::games::core::State_obj::__Visit(HX_VISIT_ARG);
}

Dynamic IntroState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"epic") ) { return epic; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"vibol") ) { return vibol; }
		if (HX_FIELD_EQ(inName,"quest") ) { return quest; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"intro1") ) { return intro1; }
		if (HX_FIELD_EQ(inName,"intro2") ) { return intro2; }
		if (HX_FIELD_EQ(inName,"supert") ) { return supert; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"introbg1") ) { return introbg1; }
		if (HX_FIELD_EQ(inName,"introbg2") ) { return introbg2; }
		if (HX_FIELD_EQ(inName,"textLoop") ) { return textLoop_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"adventure") ) { return adventure; }
		if (HX_FIELD_EQ(inName,"textTimer") ) { return textTimer; }
		if (HX_FIELD_EQ(inName,"storyStep") ) { return storyStep; }
		if (HX_FIELD_EQ(inName,"introLoop") ) { return introLoop_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"introTimer") ) { return introTimer; }
		if (HX_FIELD_EQ(inName,"startStory") ) { return startStory_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"endAnimation") ) { return endAnimation_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultFormat") ) { return defaultFormat; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"startTextField") ) { return startTextField; }
		if (HX_FIELD_EQ(inName,"startAnimation") ) { return startAnimation_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"storyTextField1") ) { return storyTextField1; }
		if (HX_FIELD_EQ(inName,"storyTextField2") ) { return storyTextField2; }
		if (HX_FIELD_EQ(inName,"storyTextField3") ) { return storyTextField3; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IntroState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"epic") ) { epic=inValue.Cast< ::openfl::_v2::display::Bitmap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"vibol") ) { vibol=inValue.Cast< ::openfl::_v2::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"quest") ) { quest=inValue.Cast< ::openfl::_v2::display::Bitmap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"intro1") ) { intro1=inValue.Cast< ::openfl::_v2::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"intro2") ) { intro2=inValue.Cast< ::openfl::_v2::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"supert") ) { supert=inValue.Cast< ::openfl::_v2::display::Bitmap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"introbg1") ) { introbg1=inValue.Cast< ::openfl::_v2::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"introbg2") ) { introbg2=inValue.Cast< ::openfl::_v2::display::Bitmap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"adventure") ) { adventure=inValue.Cast< ::openfl::_v2::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textTimer") ) { textTimer=inValue.Cast< ::openfl::_v2::utils::Timer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"storyStep") ) { storyStep=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"introTimer") ) { introTimer=inValue.Cast< ::openfl::_v2::utils::Timer >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultFormat") ) { defaultFormat=inValue.Cast< ::openfl::_v2::text::TextFormat >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"startTextField") ) { startTextField=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"storyTextField1") ) { storyTextField1=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"storyTextField2") ) { storyTextField2=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"storyTextField3") ) { storyTextField3=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IntroState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("introbg1"));
	outFields->push(HX_CSTRING("introbg2"));
	outFields->push(HX_CSTRING("intro1"));
	outFields->push(HX_CSTRING("intro2"));
	outFields->push(HX_CSTRING("supert"));
	outFields->push(HX_CSTRING("epic"));
	outFields->push(HX_CSTRING("vibol"));
	outFields->push(HX_CSTRING("quest"));
	outFields->push(HX_CSTRING("adventure"));
	outFields->push(HX_CSTRING("introTimer"));
	outFields->push(HX_CSTRING("defaultFormat"));
	outFields->push(HX_CSTRING("startTextField"));
	outFields->push(HX_CSTRING("storyTextField1"));
	outFields->push(HX_CSTRING("storyTextField2"));
	outFields->push(HX_CSTRING("storyTextField3"));
	outFields->push(HX_CSTRING("textTimer"));
	outFields->push(HX_CSTRING("storyStep"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::display::Bitmap*/ ,(int)offsetof(IntroState_obj,introbg1),HX_CSTRING("introbg1")},
	{hx::fsObject /*::openfl::_v2::display::Bitmap*/ ,(int)offsetof(IntroState_obj,introbg2),HX_CSTRING("introbg2")},
	{hx::fsObject /*::openfl::_v2::display::Bitmap*/ ,(int)offsetof(IntroState_obj,intro1),HX_CSTRING("intro1")},
	{hx::fsObject /*::openfl::_v2::display::Bitmap*/ ,(int)offsetof(IntroState_obj,intro2),HX_CSTRING("intro2")},
	{hx::fsObject /*::openfl::_v2::display::Bitmap*/ ,(int)offsetof(IntroState_obj,supert),HX_CSTRING("supert")},
	{hx::fsObject /*::openfl::_v2::display::Bitmap*/ ,(int)offsetof(IntroState_obj,epic),HX_CSTRING("epic")},
	{hx::fsObject /*::openfl::_v2::display::Bitmap*/ ,(int)offsetof(IntroState_obj,vibol),HX_CSTRING("vibol")},
	{hx::fsObject /*::openfl::_v2::display::Bitmap*/ ,(int)offsetof(IntroState_obj,quest),HX_CSTRING("quest")},
	{hx::fsObject /*::openfl::_v2::display::Bitmap*/ ,(int)offsetof(IntroState_obj,adventure),HX_CSTRING("adventure")},
	{hx::fsObject /*::openfl::_v2::utils::Timer*/ ,(int)offsetof(IntroState_obj,introTimer),HX_CSTRING("introTimer")},
	{hx::fsObject /*::openfl::_v2::text::TextFormat*/ ,(int)offsetof(IntroState_obj,defaultFormat),HX_CSTRING("defaultFormat")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(IntroState_obj,startTextField),HX_CSTRING("startTextField")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(IntroState_obj,storyTextField1),HX_CSTRING("storyTextField1")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(IntroState_obj,storyTextField2),HX_CSTRING("storyTextField2")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(IntroState_obj,storyTextField3),HX_CSTRING("storyTextField3")},
	{hx::fsObject /*::openfl::_v2::utils::Timer*/ ,(int)offsetof(IntroState_obj,textTimer),HX_CSTRING("textTimer")},
	{hx::fsInt,(int)offsetof(IntroState_obj,storyStep),HX_CSTRING("storyStep")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("introbg1"),
	HX_CSTRING("introbg2"),
	HX_CSTRING("intro1"),
	HX_CSTRING("intro2"),
	HX_CSTRING("supert"),
	HX_CSTRING("epic"),
	HX_CSTRING("vibol"),
	HX_CSTRING("quest"),
	HX_CSTRING("adventure"),
	HX_CSTRING("introTimer"),
	HX_CSTRING("defaultFormat"),
	HX_CSTRING("startTextField"),
	HX_CSTRING("storyTextField1"),
	HX_CSTRING("storyTextField2"),
	HX_CSTRING("storyTextField3"),
	HX_CSTRING("textTimer"),
	HX_CSTRING("storyStep"),
	HX_CSTRING("init"),
	HX_CSTRING("startAnimation"),
	HX_CSTRING("endAnimation"),
	HX_CSTRING("introLoop"),
	HX_CSTRING("textLoop"),
	HX_CSTRING("startStory"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IntroState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IntroState_obj::__mClass,"__mClass");
};

#endif

Class IntroState_obj::__mClass;

void IntroState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ukuleledog.games.vibol.states.IntroState"), hx::TCanCast< IntroState_obj> ,sStaticFields,sMemberFields,
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

void IntroState_obj::__boot()
{
}

} // end namespace com
} // end namespace ukuleledog
} // end namespace games
} // end namespace vibol
} // end namespace states
