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
#ifndef INCLUDED_com_ukuleledog_games_core_Weapon
#include <com/ukuleledog/games/core/Weapon.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_vibol_elements_GameEvent
#include <com/ukuleledog/games/vibol/elements/GameEvent.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_vibol_elements_Sword
#include <com/ukuleledog/games/vibol/elements/Sword.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_vibol_elements_Teleport
#include <com/ukuleledog/games/vibol/elements/Teleport.h>
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
#ifndef INCLUDED_motion_easing_Bounce
#include <motion/easing/Bounce.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Linear
#include <motion/easing/Linear.h>
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
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
namespace com{
namespace ukuleledog{
namespace games{
namespace vibol{
namespace levels{

Void VibolLevel_obj::__construct()
{
HX_STACK_FRAME("com.ukuleledog.games.vibol.levels.VibolLevel","new",0x971c6ca4,"com.ukuleledog.games.vibol.levels.VibolLevel.new","com/ukuleledog/games/vibol/levels/VibolLevel.hx",17,0xa5fc580d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(23)
	this->maxFallingSpeed = (int)5;
	HX_STACK_LINE(22)
	this->minFallingSpeed = (int)1;
	HX_STACK_LINE(21)
	this->fallingSpeed = (int)1;
	HX_STACK_LINE(27)
	super::__construct();
}
;
	return null();
}

//VibolLevel_obj::~VibolLevel_obj() { }

Dynamic VibolLevel_obj::__CreateEmpty() { return  new VibolLevel_obj; }
hx::ObjectPtr< VibolLevel_obj > VibolLevel_obj::__new()
{  hx::ObjectPtr< VibolLevel_obj > result = new VibolLevel_obj();
	result->__construct();
	return result;}

Dynamic VibolLevel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VibolLevel_obj > result = new VibolLevel_obj();
	result->__construct();
	return result;}

Void VibolLevel_obj::activateFighting( ){
{
		HX_STACK_FRAME("com.ukuleledog.games.vibol.levels.VibolLevel","activateFighting",0x971fc521,"com.ukuleledog.games.vibol.levels.VibolLevel.activateFighting","com/ukuleledog/games/vibol/levels/VibolLevel.hx",32,0xa5fc580d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(33)
		this->fightRoom = true;
		HX_STACK_LINE(35)
		::com::ukuleledog::games::vibol::elements::Sword _g = ::com::ukuleledog::games::vibol::elements::Sword_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(35)
		this->weapon = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VibolLevel_obj,activateFighting,(void))

Void VibolLevel_obj::loop( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.ukuleledog.games.vibol.levels.VibolLevel","loop",0xa077c5a0,"com.ukuleledog.games.vibol.levels.VibolLevel.loop","com/ukuleledog/games/vibol/levels/VibolLevel.hx",40,0xa5fc580d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(42)
		if (((this->playing == false))){
			HX_STACK_LINE(43)
			return null();
		}
		HX_STACK_LINE(45)
		this->onGround = false;
		HX_STACK_LINE(47)
		{
			HX_STACK_LINE(47)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(47)
			Array< ::Dynamic > _g1 = this->elements;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(47)
			while((true)){
				HX_STACK_LINE(47)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(47)
					break;
				}
				HX_STACK_LINE(47)
				::com::ukuleledog::games::core::GameObject element = _g1->__get(_g).StaticCast< ::com::ukuleledog::games::core::GameObject >();		HX_STACK_VAR(element,"element");
				HX_STACK_LINE(47)
				++(_g);
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::vibol::levels::VibolLevel_obj > __this,::com::ukuleledog::games::core::GameObject &element){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/levels/VibolLevel.hx",49,0xa5fc580d)
						{
							HX_STACK_LINE(49)
							Float _g2 = __this->hero->get_x();		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(49)
							Float _g11 = __this->hero->get_y();		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(49)
							return element->mustTestCollision(_g2,_g11);
						}
						return null();
					}
				};
				HX_STACK_LINE(49)
				if (((  ((element->isColider())) ? bool(_Function_3_1::Block(this,element)) : bool(false) ))){
					HX_STACK_LINE(52)
					::openfl::_v2::display::Sprite _g2 = this->hero->getLeftBumper();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(52)
					if ((element->hitTestObject(_g2))){
						HX_STACK_LINE(54)
						Float _g3 = element->get_x();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(54)
						Float _g4 = element->get_width();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(54)
						Float _g5 = (_g3 + _g4);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(54)
						this->hero->set_x(_g5);
					}
					else{
						HX_STACK_LINE(56)
						::openfl::_v2::display::Sprite _g6 = this->hero->getTopBumper();		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(56)
						if ((element->hitTestObject(_g6))){
							HX_STACK_LINE(58)
							::motion::Actuate_obj::stop(this->hero,null(),null(),null());
							HX_STACK_LINE(59)
							Float _g7 = element->get_y();		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(59)
							Float _g8 = element->get_height();		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(59)
							Float _g9 = (_g7 + _g8);		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(59)
							this->hero->set_y(_g9);
						}
					}
					HX_STACK_LINE(62)
					::openfl::_v2::display::Sprite _g10 = this->hero->getRightBumper();		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(62)
					if ((element->hitTestObject(_g10))){
						HX_STACK_LINE(64)
						Float _g11 = element->get_x();		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(64)
						Float _g12 = this->hero->get_width();		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(64)
						Float _g13 = (_g11 - _g12);		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(64)
						this->hero->set_x(_g13);
					}
					HX_STACK_LINE(67)
					::openfl::_v2::display::Sprite _g14 = this->hero->getBottomBumper();		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(67)
					if ((element->hitTestObject(_g14))){
						HX_STACK_LINE(69)
						this->onGround = true;
						HX_STACK_LINE(70)
						this->fallingSpeed = this->minFallingSpeed;
						HX_STACK_LINE(71)
						Float _g15 = element->get_y();		HX_STACK_VAR(_g15,"_g15");
						HX_STACK_LINE(71)
						Float _g16 = this->hero->get_height();		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(71)
						Float _g17 = (_g15 - _g16);		HX_STACK_VAR(_g17,"_g17");
						HX_STACK_LINE(71)
						this->hero->set_y(_g17);
					}
				}
				HX_STACK_LINE(76)
				element->move();
			}
		}
		HX_STACK_LINE(80)
		if (((bool(!(this->onGround)) && bool(!(this->jumping))))){
			HX_STACK_LINE(82)
			{
				HX_STACK_LINE(82)
				::com::ukuleledog::games::core::Hero _g = this->hero;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				Float _g18 = _g->get_y();		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(82)
				Float _g19 = (_g18 + this->fallingSpeed);		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(82)
				_g->set_y(_g19);
			}
			HX_STACK_LINE(84)
			if (((this->fallingSpeed < this->maxFallingSpeed))){
				HX_STACK_LINE(85)
				hx::AddEq(this->fallingSpeed,this->gravity);
			}
		}
		HX_STACK_LINE(89)
		Float _g20 = this->hero->get_y();		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(89)
		int _g21 = this->get_stage()->get_stageHeight();		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(89)
		if (((_g20 > _g21))){
			HX_STACK_LINE(91)
			this->hero->set_x((this->startingPosition->x * (int)64));
			HX_STACK_LINE(92)
			this->hero->set_y((this->startingPosition->y * (int)64));
			HX_STACK_LINE(94)
			::motion::easing::IEasing _g22 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g22,"_g22");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/levels/VibolLevel.hx",94,0xa5fc580d)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("x") , (int)0,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(94)
			::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),(int)1,_Function_2_1::Block(),null(),null())->ease(_g22);
		}
		HX_STACK_LINE(97)
		{
			HX_STACK_LINE(97)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(97)
			Array< ::Dynamic > _g1 = this->ennemies;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(97)
			while((true)){
				HX_STACK_LINE(97)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(97)
					break;
				}
				HX_STACK_LINE(97)
				::com::ukuleledog::games::core::Ennemy ennemy = _g1->__get(_g).StaticCast< ::com::ukuleledog::games::core::Ennemy >();		HX_STACK_VAR(ennemy,"ennemy");
				HX_STACK_LINE(97)
				++(_g);
				HX_STACK_LINE(99)
				Float _g23 = this->hero->get_x();		HX_STACK_VAR(_g23,"_g23");
				HX_STACK_LINE(99)
				Float _g24 = this->hero->get_y();		HX_STACK_VAR(_g24,"_g24");
				HX_STACK_LINE(99)
				if (((  ((ennemy->mustTestCollision(_g23,_g24))) ? bool(ennemy->hitTestObject(this->hero)) : bool(false) ))){
					HX_STACK_LINE(101)
					this->hero->set_x((this->startingPosition->x * (int)64));
					HX_STACK_LINE(102)
					this->hero->set_y((this->startingPosition->y * (int)64));
					HX_STACK_LINE(104)
					::motion::easing::IEasing _g25 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g25,"_g25");
					struct _Function_4_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/levels/VibolLevel.hx",104,0xa5fc580d)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("x") , (int)0,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(104)
					::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),(int)1,_Function_4_1::Block(),null(),null())->ease(_g25);
				}
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::vibol::levels::VibolLevel_obj > __this,::com::ukuleledog::games::core::Ennemy &ennemy){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/levels/VibolLevel.hx",107,0xa5fc580d)
						{
							HX_STACK_LINE(107)
							Float _g26 = __this->hero->get_x();		HX_STACK_VAR(_g26,"_g26");
							HX_STACK_LINE(107)
							Float _g27 = __this->hero->get_y();		HX_STACK_VAR(_g27,"_g27");
							HX_STACK_LINE(107)
							return ennemy->mustTestCollision(_g26,_g27);
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static bool Block( ::com::ukuleledog::games::core::Ennemy &ennemy){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/levels/VibolLevel.hx",107,0xa5fc580d)
						{
							HX_STACK_LINE(107)
							bool _g28 = ennemy->isTouchable();		HX_STACK_VAR(_g28,"_g28");
							HX_STACK_LINE(107)
							return (_g28 == true);
						}
						return null();
					}
				};
				HX_STACK_LINE(107)
				if (((  (((  (((  ((this->hitting)) ? bool(_Function_3_1::Block(this,ennemy)) : bool(false) ))) ? bool(_Function_3_2::Block(ennemy)) : bool(false) ))) ? bool(ennemy->hitTestObject(this->weapon)) : bool(false) ))){
					HX_STACK_LINE(109)
					ennemy->decreaseHealth();
					HX_STACK_LINE(111)
					int _g29 = ennemy->getHealth();		HX_STACK_VAR(_g29,"_g29");
					HX_STACK_LINE(111)
					if (((_g29 <= (int)0))){
						HX_STACK_LINE(113)
						this->removeChild(ennemy);
						HX_STACK_LINE(114)
						this->ennemies->remove(ennemy);
						HX_STACK_LINE(115)
						ennemy = null();
					}
				}
				HX_STACK_LINE(119)
				if (((ennemy != null()))){
					HX_STACK_LINE(120)
					ennemy->roam();
				}
			}
		}
		HX_STACK_LINE(123)
		{
			HX_STACK_LINE(123)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(123)
			Array< ::Dynamic > _g1 = this->collectibles;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(123)
			while((true)){
				HX_STACK_LINE(123)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(123)
					break;
				}
				HX_STACK_LINE(123)
				::com::ukuleledog::games::core::GameObject collectible = _g1->__get(_g).StaticCast< ::com::ukuleledog::games::core::GameObject >();		HX_STACK_VAR(collectible,"collectible");
				HX_STACK_LINE(123)
				++(_g);
				HX_STACK_LINE(125)
				Float _g30 = this->hero->get_x();		HX_STACK_VAR(_g30,"_g30");
				HX_STACK_LINE(125)
				Float _g31 = this->hero->get_y();		HX_STACK_VAR(_g31,"_g31");
				HX_STACK_LINE(125)
				if (((  ((collectible->mustTestCollision(_g30,_g31))) ? bool(collectible->hitTestObject(this->hero)) : bool(false) ))){
					HX_STACK_LINE(127)
					this->removeChild(collectible);
					HX_STACK_LINE(128)
					this->collectibles->remove(collectible);
					HX_STACK_LINE(129)
					collectible = null();
				}
			}
		}
		HX_STACK_LINE(133)
		{
			HX_STACK_LINE(133)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(133)
			Array< ::Dynamic > _g1 = this->gameEvents;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(133)
			while((true)){
				HX_STACK_LINE(133)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(133)
					break;
				}
				HX_STACK_LINE(133)
				::com::ukuleledog::games::vibol::elements::GameEvent gameEvent = _g1->__get(_g).StaticCast< ::com::ukuleledog::games::vibol::elements::GameEvent >();		HX_STACK_VAR(gameEvent,"gameEvent");
				HX_STACK_LINE(133)
				++(_g);
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::vibol::levels::VibolLevel_obj > __this,::com::ukuleledog::games::vibol::elements::GameEvent &gameEvent){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/levels/VibolLevel.hx",135,0xa5fc580d)
						{
							HX_STACK_LINE(135)
							Float _g32 = __this->hero->get_x();		HX_STACK_VAR(_g32,"_g32");
							HX_STACK_LINE(135)
							Float _g33 = __this->hero->get_y();		HX_STACK_VAR(_g33,"_g33");
							HX_STACK_LINE(135)
							return gameEvent->mustTestCollision(_g32,_g33);
						}
						return null();
					}
				};
				HX_STACK_LINE(135)
				if (((  ((gameEvent->hitTestObject(this->hero))) ? bool(_Function_3_1::Block(this,gameEvent)) : bool(false) ))){
					HX_STACK_LINE(137)
					this->removeChild(gameEvent);
					HX_STACK_LINE(138)
					this->gameEvents->remove(gameEvent);
					HX_STACK_LINE(139)
					this->manageEvent(gameEvent);
				}
			}
		}
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::vibol::levels::VibolLevel_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/levels/VibolLevel.hx",143,0xa5fc580d)
				{
					HX_STACK_LINE(143)
					Float _g34 = __this->hero->get_x();		HX_STACK_VAR(_g34,"_g34");
					HX_STACK_LINE(143)
					Float _g35 = __this->hero->get_y();		HX_STACK_VAR(_g35,"_g35");
					HX_STACK_LINE(143)
					return __this->endTeleport->mustTestCollision(_g34,_g35);
				}
				return null();
			}
		};
		HX_STACK_LINE(143)
		if (((  (((  (((this->endTeleport != null()))) ? bool(_Function_1_1::Block(this)) : bool(false) ))) ? bool(this->endTeleport->hitTestObject(this->hero)) : bool(false) ))){
			HX_STACK_LINE(145)
			::openfl::_v2::events::Event _g36 = ::openfl::_v2::events::Event_obj::__new(::openfl::_v2::events::Event_obj::COMPLETE,null(),null());		HX_STACK_VAR(_g36,"_g36");
			HX_STACK_LINE(145)
			this->dispatchEvent(_g36);
		}
		HX_STACK_LINE(148)
		this->positionWeapon();
	}
return null();
}


Void VibolLevel_obj::jump( ){
{
		HX_STACK_FRAME("com.ukuleledog.games.vibol.levels.VibolLevel","jump",0x9f29e42a,"com.ukuleledog.games.vibol.levels.VibolLevel.jump","com/ukuleledog/games/vibol/levels/VibolLevel.hx",153,0xa5fc580d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(153)
		if (((bool(!(this->jumping)) && bool(this->onGround)))){
			HX_STACK_LINE(155)
			this->jumping = true;
			HX_STACK_LINE(156)
			Float _g = this->hero->get_y();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(156)
			Float _g1 = (_g - this->jumpPower);		HX_STACK_VAR(_g1,"_g1");
			struct _Function_2_1{
				inline static Dynamic Block( Float &_g1){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/levels/VibolLevel.hx",156,0xa5fc580d)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("y") , _g1,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(156)
			Dynamic _g2 = _Function_2_1::Block(_g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(156)
			::motion::Actuate_obj::tween(this->hero,(int)1,_g2,null(),null())->onComplete(this->endJump_dyn(),null());
		}
	}
return null();
}


Void VibolLevel_obj::endJump( ){
{
		HX_STACK_FRAME("com.ukuleledog.games.vibol.levels.VibolLevel","endJump",0x6d148cad,"com.ukuleledog.games.vibol.levels.VibolLevel.endJump","com/ukuleledog/games/vibol/levels/VibolLevel.hx",162,0xa5fc580d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(162)
		this->jumping = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VibolLevel_obj,endJump,(void))

Void VibolLevel_obj::action( ){
{
		HX_STACK_FRAME("com.ukuleledog.games.vibol.levels.VibolLevel","action",0x36b9a1f2,"com.ukuleledog.games.vibol.levels.VibolLevel.action","com/ukuleledog/games/vibol/levels/VibolLevel.hx",167,0xa5fc580d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(167)
		if (((  (((  ((this->fightRoom)) ? bool(this->canHit()) : bool(false) ))) ? bool(this->playing) : bool(false) ))){
			HX_STACK_LINE(169)
			this->animateWeapon();
		}
	}
return null();
}


Void VibolLevel_obj::animateWeapon( ){
{
		HX_STACK_FRAME("com.ukuleledog.games.vibol.levels.VibolLevel","animateWeapon",0x7f9c2da1,"com.ukuleledog.games.vibol.levels.VibolLevel.animateWeapon","com/ukuleledog/games/vibol/levels/VibolLevel.hx",174,0xa5fc580d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(173)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(175)
		this->hitting = true;
		HX_STACK_LINE(176)
		this->positionWeapon();
		HX_STACK_LINE(177)
		this->addChild(this->weapon);
		HX_STACK_LINE(178)
		Float _g1 = this->hero->get_x();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(178)
		Float endPosition = (_g1 + (int)64);		HX_STACK_VAR(endPosition,"endPosition");
		HX_STACK_LINE(179)
		Float _g11 = this->hero->get_x();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(179)
		Array< Float > startPosition = Array_obj< Float >::__new().Add((_g11 + (int)16));		HX_STACK_VAR(startPosition,"startPosition");
		HX_STACK_LINE(180)
		::motion::easing::IEasing _g2 = ::motion::easing::Bounce_obj::get_easeOut();		HX_STACK_VAR(_g2,"_g2");
		struct _Function_1_1{
			inline static Dynamic Block( Float &endPosition){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/levels/VibolLevel.hx",180,0xa5fc580d)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , (int)1,false);
					__result->Add(HX_CSTRING("x") , endPosition,false);
					return __result;
				}
				return null();
			}
		};

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_2,Array< ::Dynamic >,_g,Array< Float >,startPosition)
		Void run(){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","com/ukuleledog/games/vibol/levels/VibolLevel.hx",181,0xa5fc580d)
			{
				struct _Function_2_1{
					inline static Dynamic Block( Array< Float > &startPosition){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/vibol/levels/VibolLevel.hx",181,0xa5fc580d)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("x") , startPosition->__get((int)0),false);
							__result->Add(HX_CSTRING("alpha") , (int)0,false);
							return __result;
						}
						return null();
					}
				};

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,Array< ::Dynamic >,_g)
				Void run(){
					HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","com/ukuleledog/games/vibol/levels/VibolLevel.hx",181,0xa5fc580d)
					{
						HX_STACK_LINE(182)
						_g->__get((int)0).StaticCast< ::com::ukuleledog::games::vibol::levels::VibolLevel >()->hitting = false;
						HX_STACK_LINE(183)
						_g->__get((int)0).StaticCast< ::com::ukuleledog::games::vibol::levels::VibolLevel >()->removeChild(_g->__get((int)0).StaticCast< ::com::ukuleledog::games::vibol::levels::VibolLevel >()->weapon);
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(181)
				::motion::Actuate_obj::tween(_g->__get((int)0).StaticCast< ::com::ukuleledog::games::vibol::levels::VibolLevel >()->weapon,0.1,_Function_2_1::Block(startPosition),null(),null())->ease(::motion::easing::Bounce_obj::get_easeOut())->onComplete( Dynamic(new _Function_2_2(_g)),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(180)
		::motion::Actuate_obj::tween(this->weapon,0.1,_Function_1_1::Block(endPosition),null(),null())->ease(_g2)->onComplete( Dynamic(new _Function_1_2(_g,startPosition)),null());
	}
return null();
}


Void VibolLevel_obj::start( ){
{
		HX_STACK_FRAME("com.ukuleledog.games.vibol.levels.VibolLevel","start",0xd366a9a6,"com.ukuleledog.games.vibol.levels.VibolLevel.start","com/ukuleledog/games/vibol/levels/VibolLevel.hx",190,0xa5fc580d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(190)
		this->setCamera();
	}
return null();
}



VibolLevel_obj::VibolLevel_obj()
{
}

void VibolLevel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VibolLevel);
	HX_MARK_MEMBER_NAME(endTeleport,"endTeleport");
	HX_MARK_MEMBER_NAME(fallingSpeed,"fallingSpeed");
	HX_MARK_MEMBER_NAME(minFallingSpeed,"minFallingSpeed");
	HX_MARK_MEMBER_NAME(maxFallingSpeed,"maxFallingSpeed");
	::com::ukuleledog::games::core::Level_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VibolLevel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(endTeleport,"endTeleport");
	HX_VISIT_MEMBER_NAME(fallingSpeed,"fallingSpeed");
	HX_VISIT_MEMBER_NAME(minFallingSpeed,"minFallingSpeed");
	HX_VISIT_MEMBER_NAME(maxFallingSpeed,"maxFallingSpeed");
	::com::ukuleledog::games::core::Level_obj::__Visit(HX_VISIT_ARG);
}

Dynamic VibolLevel_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"loop") ) { return loop_dyn(); }
		if (HX_FIELD_EQ(inName,"jump") ) { return jump_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"action") ) { return action_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"endJump") ) { return endJump_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"endTeleport") ) { return endTeleport; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fallingSpeed") ) { return fallingSpeed; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"animateWeapon") ) { return animateWeapon_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"minFallingSpeed") ) { return minFallingSpeed; }
		if (HX_FIELD_EQ(inName,"maxFallingSpeed") ) { return maxFallingSpeed; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"activateFighting") ) { return activateFighting_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VibolLevel_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"endTeleport") ) { endTeleport=inValue.Cast< ::com::ukuleledog::games::vibol::elements::Teleport >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fallingSpeed") ) { fallingSpeed=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"minFallingSpeed") ) { minFallingSpeed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxFallingSpeed") ) { maxFallingSpeed=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VibolLevel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("endTeleport"));
	outFields->push(HX_CSTRING("fallingSpeed"));
	outFields->push(HX_CSTRING("minFallingSpeed"));
	outFields->push(HX_CSTRING("maxFallingSpeed"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::ukuleledog::games::vibol::elements::Teleport*/ ,(int)offsetof(VibolLevel_obj,endTeleport),HX_CSTRING("endTeleport")},
	{hx::fsInt,(int)offsetof(VibolLevel_obj,fallingSpeed),HX_CSTRING("fallingSpeed")},
	{hx::fsInt,(int)offsetof(VibolLevel_obj,minFallingSpeed),HX_CSTRING("minFallingSpeed")},
	{hx::fsInt,(int)offsetof(VibolLevel_obj,maxFallingSpeed),HX_CSTRING("maxFallingSpeed")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("endTeleport"),
	HX_CSTRING("fallingSpeed"),
	HX_CSTRING("minFallingSpeed"),
	HX_CSTRING("maxFallingSpeed"),
	HX_CSTRING("activateFighting"),
	HX_CSTRING("loop"),
	HX_CSTRING("jump"),
	HX_CSTRING("endJump"),
	HX_CSTRING("action"),
	HX_CSTRING("animateWeapon"),
	HX_CSTRING("start"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VibolLevel_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VibolLevel_obj::__mClass,"__mClass");
};

#endif

Class VibolLevel_obj::__mClass;

void VibolLevel_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ukuleledog.games.vibol.levels.VibolLevel"), hx::TCanCast< VibolLevel_obj> ,sStaticFields,sMemberFields,
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

void VibolLevel_obj::__boot()
{
}

} // end namespace com
} // end namespace ukuleledog
} // end namespace games
} // end namespace vibol
} // end namespace levels
