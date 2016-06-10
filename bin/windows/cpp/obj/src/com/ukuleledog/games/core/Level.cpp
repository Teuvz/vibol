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
namespace core{

Void Level_obj::__construct()
{
HX_STACK_FRAME("com.ukuleledog.games.core.Level","new",0x73d7962a,"com.ukuleledog.games.core.Level.new","com/ukuleledog/games/core/Level.hx",15,0x708c2f46)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(34)
	this->hitting = false;
	HX_STACK_LINE(32)
	this->gravity = (int)1;
	HX_STACK_LINE(31)
	this->jumpPeek = (int)0;
	HX_STACK_LINE(30)
	this->jumpPower = (int)100;
	HX_STACK_LINE(29)
	this->jumping = false;
	HX_STACK_LINE(28)
	this->onGround = false;
	HX_STACK_LINE(19)
	this->playing = true;
	HX_STACK_LINE(18)
	this->fightRoom = false;
	HX_STACK_LINE(39)
	super::__construct();
	HX_STACK_LINE(40)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(40)
	this->elements = _g;
	HX_STACK_LINE(41)
	Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(41)
	this->ennemies = _g1;
	HX_STACK_LINE(42)
	Array< ::Dynamic > _g2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(42)
	this->collectibles = _g2;
	HX_STACK_LINE(43)
	Array< ::Dynamic > _g3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(43)
	this->movingElements = _g3;
	HX_STACK_LINE(44)
	Array< ::Dynamic > _g4 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(44)
	this->gameEvents = _g4;
}
;
	return null();
}

//Level_obj::~Level_obj() { }

Dynamic Level_obj::__CreateEmpty() { return  new Level_obj; }
hx::ObjectPtr< Level_obj > Level_obj::__new()
{  hx::ObjectPtr< Level_obj > result = new Level_obj();
	result->__construct();
	return result;}

Dynamic Level_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Level_obj > result = new Level_obj();
	result->__construct();
	return result;}

Void Level_obj::init( ){
{
		HX_STACK_FRAME("com.ukuleledog.games.core.Level","init",0xe5848606,"com.ukuleledog.games.core.Level.init","com/ukuleledog/games/core/Level.hx",48,0x708c2f46)
		HX_STACK_THIS(this)
		HX_STACK_LINE(49)
		this->hero->set_x((this->startingPosition->x * (int)64));
		HX_STACK_LINE(50)
		this->hero->set_y((this->startingPosition->y * (int)64));
		HX_STACK_LINE(51)
		this->addChild(this->hero);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Level_obj,init,(void))

Void Level_obj::setHero( ::com::ukuleledog::games::core::Hero _hero){
{
		HX_STACK_FRAME("com.ukuleledog.games.core.Level","setHero",0x3acaeb86,"com.ukuleledog.games.core.Level.setHero","com/ukuleledog/games/core/Level.hx",56,0x708c2f46)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_hero,"_hero")
		HX_STACK_LINE(56)
		this->hero = _hero;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Level_obj,setHero,(void))

Void Level_obj::addElement( ::com::ukuleledog::games::core::GameObject _element,hx::Null< int >  __o__y,hx::Null< int >  __o__x){
int _y = __o__y.Default(0);
int _x = __o__x.Default(0);
	HX_STACK_FRAME("com.ukuleledog.games.core.Level","addElement",0xb45bc211,"com.ukuleledog.games.core.Level.addElement","com/ukuleledog/games/core/Level.hx",60,0x708c2f46)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_element,"_element")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_ARG(_x,"_x")
{
		HX_STACK_LINE(61)
		_element->set_x(((int)64 * _x));
		HX_STACK_LINE(62)
		_element->set_y(((int)64 * _y));
		HX_STACK_LINE(63)
		this->elements->push(_element);
		HX_STACK_LINE(64)
		this->addChild(_element);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Level_obj,addElement,(void))

Void Level_obj::addEnnemy( ::com::ukuleledog::games::core::Ennemy _ennemy,hx::Null< int >  __o__y,hx::Null< int >  __o__x){
int _y = __o__y.Default(0);
int _x = __o__x.Default(0);
	HX_STACK_FRAME("com.ukuleledog.games.core.Level","addEnnemy",0x055b2a97,"com.ukuleledog.games.core.Level.addEnnemy","com/ukuleledog/games/core/Level.hx",68,0x708c2f46)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_ennemy,"_ennemy")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_ARG(_x,"_x")
{
		HX_STACK_LINE(69)
		_ennemy->set_x(((int)64 * _x));
		HX_STACK_LINE(70)
		_ennemy->set_y(((int)64 * _y));
		HX_STACK_LINE(71)
		this->ennemies->push(_ennemy);
		HX_STACK_LINE(72)
		this->addChild(_ennemy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Level_obj,addEnnemy,(void))

Void Level_obj::addCollectible( ::com::ukuleledog::games::core::GameObject _collectible,hx::Null< int >  __o__y,hx::Null< int >  __o__x){
int _y = __o__y.Default(0);
int _x = __o__x.Default(0);
	HX_STACK_FRAME("com.ukuleledog.games.core.Level","addCollectible",0xae83c711,"com.ukuleledog.games.core.Level.addCollectible","com/ukuleledog/games/core/Level.hx",76,0x708c2f46)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_collectible,"_collectible")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_ARG(_x,"_x")
{
		HX_STACK_LINE(77)
		_collectible->set_x(((int)64 * _x));
		HX_STACK_LINE(78)
		_collectible->set_y(((int)64 * _y));
		HX_STACK_LINE(79)
		this->collectibles->push(_collectible);
		HX_STACK_LINE(80)
		this->addChild(_collectible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Level_obj,addCollectible,(void))

Void Level_obj::addGameEvent( ::com::ukuleledog::games::vibol::elements::GameEvent _gameEvent,hx::Null< int >  __o__y,hx::Null< int >  __o__x){
int _y = __o__y.Default(0);
int _x = __o__x.Default(0);
	HX_STACK_FRAME("com.ukuleledog.games.core.Level","addGameEvent",0x3752095d,"com.ukuleledog.games.core.Level.addGameEvent","com/ukuleledog/games/core/Level.hx",84,0x708c2f46)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_gameEvent,"_gameEvent")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_ARG(_x,"_x")
{
		HX_STACK_LINE(85)
		_gameEvent->set_x(((int)64 * _x));
		HX_STACK_LINE(86)
		_gameEvent->set_y(((int)64 * _y));
		HX_STACK_LINE(87)
		this->gameEvents->push(_gameEvent);
		HX_STACK_LINE(88)
		this->addChild(_gameEvent);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Level_obj,addGameEvent,(void))

Void Level_obj::setCamera( ){
{
		HX_STACK_FRAME("com.ukuleledog.games.core.Level","setCamera",0x6348f531,"com.ukuleledog.games.core.Level.setCamera","com/ukuleledog/games/core/Level.hx",92,0x708c2f46)
		HX_STACK_THIS(this)
		HX_STACK_LINE(93)
		Float _g = this->hero->get_x();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(93)
		int _g1 = this->get_stage()->get_stageWidth();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(93)
		Float _g2 = (Float(_g1) / Float((int)2));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(93)
		Float _g3 = this->hero->get_width();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(93)
		Float _g4 = (Float(_g3) / Float((int)2));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(93)
		Float _g5 = (_g2 - _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(93)
		if (((_g > _g5))){
			HX_STACK_LINE(95)
			Float _g6 = this->hero->get_x();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(95)
			int _g7 = this->get_stage()->get_stageWidth();		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(95)
			Float _g8 = (Float(_g7) / Float((int)2));		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(95)
			Float _g9 = this->hero->get_width();		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(95)
			Float _g10 = (Float(_g9) / Float((int)2));		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(95)
			Float _g11 = (_g8 - _g10);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(95)
			Float _g12 = (_g6 - _g11);		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(95)
			Float _g13 = ((int)0 - _g12);		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(95)
			this->set_x(_g13);
		}
		HX_STACK_LINE(98)
		Float _g14 = this->get_x();		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(98)
		Float _g15 = this->get_width();		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(98)
		Float _g16 = (_g14 + _g15);		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(98)
		int _g17 = this->get_stage()->get_stageWidth();		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(98)
		if (((_g16 < _g17))){
			HX_STACK_LINE(100)
			Float _g18 = this->get_width();		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(100)
			int _g19 = this->get_stage()->get_stageWidth();		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(100)
			Float _g20 = (_g18 - _g19);		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(100)
			Float _g21 = ((int)0 - _g20);		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(100)
			this->set_x(_g21);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Level_obj,setCamera,(void))

Void Level_obj::moveRight( ){
{
		HX_STACK_FRAME("com.ukuleledog.games.core.Level","moveRight",0xf3401455,"com.ukuleledog.games.core.Level.moveRight","com/ukuleledog/games/core/Level.hx",105,0x708c2f46)
		HX_STACK_THIS(this)
		HX_STACK_LINE(106)
		Float _g = this->hero->get_x();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(106)
		Float _g1 = this->hero->get_width();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(106)
		Float _g2 = (_g + _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(106)
		Float _g3 = this->get_width();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(106)
		int _g4 = this->hero->getSpeed();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(106)
		Float _g5 = (_g3 - _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(106)
		if (((  (((_g2 < _g5))) ? bool(this->playing) : bool(false) ))){
			HX_STACK_LINE(108)
			::com::ukuleledog::games::core::Hero _g6 = this->hero;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(108)
			Float _g61 = _g6->get_x();		HX_STACK_VAR(_g61,"_g61");
			HX_STACK_LINE(108)
			int _g7 = this->hero->getSpeed();		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(108)
			Float _g8 = (_g61 + _g7);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(108)
			_g6->set_x(_g8);
		}
		HX_STACK_LINE(111)
		Float _g9 = this->hero->get_x();		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(111)
		Float _g10 = this->hero->get_width();		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(111)
		Float _g11 = (_g9 + _g10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(111)
		Float _g12 = this->get_width();		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(111)
		if (((_g11 > _g12))){
			HX_STACK_LINE(112)
			Float _g13 = this->get_width();		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(112)
			Float _g14 = this->hero->get_width();		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(112)
			Float _g15 = (_g13 - _g14);		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(112)
			this->hero->set_x(_g15);
		}
		HX_STACK_LINE(114)
		this->setCamera();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Level_obj,moveRight,(void))

Void Level_obj::moveLeft( ){
{
		HX_STACK_FRAME("com.ukuleledog.games.core.Level","moveLeft",0xee3071ae,"com.ukuleledog.games.core.Level.moveLeft","com/ukuleledog/games/core/Level.hx",118,0x708c2f46)
		HX_STACK_THIS(this)
		HX_STACK_LINE(119)
		Float _g = this->hero->get_x();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(119)
		if (((  (((_g > (int)0))) ? bool(this->playing) : bool(false) ))){
			HX_STACK_LINE(120)
			::com::ukuleledog::games::core::Hero _g1 = this->hero;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(120)
			Float _g11 = _g1->get_x();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(120)
			int _g2 = this->hero->getSpeed();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(120)
			Float _g3 = (_g11 - _g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(120)
			_g1->set_x(_g3);
		}
		HX_STACK_LINE(122)
		Float _g4 = this->hero->get_x();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(122)
		if (((_g4 < (int)0))){
			HX_STACK_LINE(123)
			Float _g5 = this->hero->get_x();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(123)
			(_g5 == (int)0);
		}
		HX_STACK_LINE(125)
		this->setCamera();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Level_obj,moveLeft,(void))

Void Level_obj::moveUp( ){
{
		HX_STACK_FRAME("com.ukuleledog.games.core.Level","moveUp",0xe9974842,"com.ukuleledog.games.core.Level.moveUp","com/ukuleledog/games/core/Level.hx",130,0x708c2f46)
		HX_STACK_THIS(this)
		HX_STACK_LINE(130)
		::com::ukuleledog::games::core::Hero _g = this->hero;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(130)
		Float _g1 = _g->get_y();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(130)
		int _g11 = this->hero->getSpeed();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(130)
		Float _g2 = (_g1 - _g11);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(130)
		_g->set_y(_g2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Level_obj,moveUp,(void))

Void Level_obj::moveDown( ){
{
		HX_STACK_FRAME("com.ukuleledog.games.core.Level","moveDown",0xe8ee6209,"com.ukuleledog.games.core.Level.moveDown","com/ukuleledog/games/core/Level.hx",135,0x708c2f46)
		HX_STACK_THIS(this)
		HX_STACK_LINE(135)
		::com::ukuleledog::games::core::Hero _g = this->hero;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(135)
		Float _g1 = _g->get_y();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(135)
		int _g11 = this->hero->getSpeed();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(135)
		Float _g2 = (_g1 + _g11);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(135)
		_g->set_y(_g2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Level_obj,moveDown,(void))

Void Level_obj::jump( ){
{
		HX_STACK_FRAME("com.ukuleledog.games.core.Level","jump",0xe6330fe4,"com.ukuleledog.games.core.Level.jump","com/ukuleledog/games/core/Level.hx",139,0x708c2f46)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Level_obj,jump,(void))

Void Level_obj::action( ){
{
		HX_STACK_FRAME("com.ukuleledog.games.core.Level","action",0x3330b02c,"com.ukuleledog.games.core.Level.action","com/ukuleledog/games/core/Level.hx",144,0x708c2f46)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Level_obj,action,(void))

Void Level_obj::loop( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.ukuleledog.games.core.Level","loop",0xe780f15a,"com.ukuleledog.games.core.Level.loop","com/ukuleledog/games/core/Level.hx",148,0x708c2f46)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Level_obj,loop,(void))

bool Level_obj::canJump( ){
	HX_STACK_FRAME("com.ukuleledog.games.core.Level","canJump",0x94fd1fe8,"com.ukuleledog.games.core.Level.canJump","com/ukuleledog/games/core/Level.hx",154,0x708c2f46)
	HX_STACK_THIS(this)
	HX_STACK_LINE(154)
	return (bool(!(this->jumping)) && bool(this->onGround));
}


HX_DEFINE_DYNAMIC_FUNC0(Level_obj,canJump,return )

bool Level_obj::canHit( ){
	HX_STACK_FRAME("com.ukuleledog.games.core.Level","canHit",0xd509e899,"com.ukuleledog.games.core.Level.canHit","com/ukuleledog/games/core/Level.hx",160,0x708c2f46)
	HX_STACK_THIS(this)
	HX_STACK_LINE(160)
	return !(this->hitting);
}


HX_DEFINE_DYNAMIC_FUNC0(Level_obj,canHit,return )

Void Level_obj::manageEvent( ::com::ukuleledog::games::vibol::elements::GameEvent _gameEvent){
{
		HX_STACK_FRAME("com.ukuleledog.games.core.Level","manageEvent",0x97b1833f,"com.ukuleledog.games.core.Level.manageEvent","com/ukuleledog/games/core/Level.hx",164,0x708c2f46)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_gameEvent,"_gameEvent")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Level_obj,manageEvent,(void))

Void Level_obj::setWeapon( ::com::ukuleledog::games::core::Weapon _weapon){
{
		HX_STACK_FRAME("com.ukuleledog.games.core.Level","setWeapon",0xa8204568,"com.ukuleledog.games.core.Level.setWeapon","com/ukuleledog/games/core/Level.hx",170,0x708c2f46)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_weapon,"_weapon")
		HX_STACK_LINE(170)
		this->weapon = _weapon;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Level_obj,setWeapon,(void))

::com::ukuleledog::games::core::Weapon Level_obj::getWeapon( ){
	HX_STACK_FRAME("com.ukuleledog.games.core.Level","getWeapon",0xc4cf595c,"com.ukuleledog.games.core.Level.getWeapon","com/ukuleledog/games/core/Level.hx",175,0x708c2f46)
	HX_STACK_THIS(this)
	HX_STACK_LINE(175)
	return this->weapon;
}


HX_DEFINE_DYNAMIC_FUNC0(Level_obj,getWeapon,return )

Void Level_obj::positionWeapon( ){
{
		HX_STACK_FRAME("com.ukuleledog.games.core.Level","positionWeapon",0x071aeadb,"com.ukuleledog.games.core.Level.positionWeapon","com/ukuleledog/games/core/Level.hx",180,0x708c2f46)
		HX_STACK_THIS(this)
		HX_STACK_LINE(180)
		if (((bool(this->fightRoom) && bool(!(this->hitting))))){
			HX_STACK_LINE(182)
			Float _g = this->hero->get_x();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(182)
			Float _g1 = (_g + (int)16);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(182)
			this->weapon->set_x(_g1);
			HX_STACK_LINE(183)
			Float _g2 = this->hero->get_y();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(183)
			Float _g3 = (_g2 + (int)16);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(183)
			this->weapon->set_y(_g3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Level_obj,positionWeapon,(void))

Void Level_obj::animateWeapon( ){
{
		HX_STACK_FRAME("com.ukuleledog.games.core.Level","animateWeapon",0xc7b0baa7,"com.ukuleledog.games.core.Level.animateWeapon","com/ukuleledog/games/core/Level.hx",188,0x708c2f46)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Level_obj,animateWeapon,(void))

Void Level_obj::start( ){
{
		HX_STACK_FRAME("com.ukuleledog.games.core.Level","start",0xb463c0ac,"com.ukuleledog.games.core.Level.start","com/ukuleledog/games/core/Level.hx",192,0x708c2f46)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Level_obj,start,(void))


Level_obj::Level_obj()
{
}

void Level_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Level);
	HX_MARK_MEMBER_NAME(fightRoom,"fightRoom");
	HX_MARK_MEMBER_NAME(playing,"playing");
	HX_MARK_MEMBER_NAME(elements,"elements");
	HX_MARK_MEMBER_NAME(ennemies,"ennemies");
	HX_MARK_MEMBER_NAME(collectibles,"collectibles");
	HX_MARK_MEMBER_NAME(movingElements,"movingElements");
	HX_MARK_MEMBER_NAME(gameEvents,"gameEvents");
	HX_MARK_MEMBER_NAME(hero,"hero");
	HX_MARK_MEMBER_NAME(startingPosition,"startingPosition");
	HX_MARK_MEMBER_NAME(onGround,"onGround");
	HX_MARK_MEMBER_NAME(jumping,"jumping");
	HX_MARK_MEMBER_NAME(jumpPower,"jumpPower");
	HX_MARK_MEMBER_NAME(jumpPeek,"jumpPeek");
	HX_MARK_MEMBER_NAME(gravity,"gravity");
	HX_MARK_MEMBER_NAME(hitting,"hitting");
	HX_MARK_MEMBER_NAME(weapon,"weapon");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Level_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fightRoom,"fightRoom");
	HX_VISIT_MEMBER_NAME(playing,"playing");
	HX_VISIT_MEMBER_NAME(elements,"elements");
	HX_VISIT_MEMBER_NAME(ennemies,"ennemies");
	HX_VISIT_MEMBER_NAME(collectibles,"collectibles");
	HX_VISIT_MEMBER_NAME(movingElements,"movingElements");
	HX_VISIT_MEMBER_NAME(gameEvents,"gameEvents");
	HX_VISIT_MEMBER_NAME(hero,"hero");
	HX_VISIT_MEMBER_NAME(startingPosition,"startingPosition");
	HX_VISIT_MEMBER_NAME(onGround,"onGround");
	HX_VISIT_MEMBER_NAME(jumping,"jumping");
	HX_VISIT_MEMBER_NAME(jumpPower,"jumpPower");
	HX_VISIT_MEMBER_NAME(jumpPeek,"jumpPeek");
	HX_VISIT_MEMBER_NAME(gravity,"gravity");
	HX_VISIT_MEMBER_NAME(hitting,"hitting");
	HX_VISIT_MEMBER_NAME(weapon,"weapon");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Level_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hero") ) { return hero; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"jump") ) { return jump_dyn(); }
		if (HX_FIELD_EQ(inName,"loop") ) { return loop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"weapon") ) { return weapon; }
		if (HX_FIELD_EQ(inName,"moveUp") ) { return moveUp_dyn(); }
		if (HX_FIELD_EQ(inName,"action") ) { return action_dyn(); }
		if (HX_FIELD_EQ(inName,"canHit") ) { return canHit_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"playing") ) { return playing; }
		if (HX_FIELD_EQ(inName,"jumping") ) { return jumping; }
		if (HX_FIELD_EQ(inName,"gravity") ) { return gravity; }
		if (HX_FIELD_EQ(inName,"hitting") ) { return hitting; }
		if (HX_FIELD_EQ(inName,"setHero") ) { return setHero_dyn(); }
		if (HX_FIELD_EQ(inName,"canJump") ) { return canJump_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"elements") ) { return elements; }
		if (HX_FIELD_EQ(inName,"ennemies") ) { return ennemies; }
		if (HX_FIELD_EQ(inName,"onGround") ) { return onGround; }
		if (HX_FIELD_EQ(inName,"jumpPeek") ) { return jumpPeek; }
		if (HX_FIELD_EQ(inName,"moveLeft") ) { return moveLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"moveDown") ) { return moveDown_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fightRoom") ) { return fightRoom; }
		if (HX_FIELD_EQ(inName,"jumpPower") ) { return jumpPower; }
		if (HX_FIELD_EQ(inName,"addEnnemy") ) { return addEnnemy_dyn(); }
		if (HX_FIELD_EQ(inName,"setCamera") ) { return setCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"moveRight") ) { return moveRight_dyn(); }
		if (HX_FIELD_EQ(inName,"setWeapon") ) { return setWeapon_dyn(); }
		if (HX_FIELD_EQ(inName,"getWeapon") ) { return getWeapon_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"gameEvents") ) { return gameEvents; }
		if (HX_FIELD_EQ(inName,"addElement") ) { return addElement_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"manageEvent") ) { return manageEvent_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"collectibles") ) { return collectibles; }
		if (HX_FIELD_EQ(inName,"addGameEvent") ) { return addGameEvent_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"animateWeapon") ) { return animateWeapon_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"movingElements") ) { return movingElements; }
		if (HX_FIELD_EQ(inName,"addCollectible") ) { return addCollectible_dyn(); }
		if (HX_FIELD_EQ(inName,"positionWeapon") ) { return positionWeapon_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"startingPosition") ) { return startingPosition; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Level_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hero") ) { hero=inValue.Cast< ::com::ukuleledog::games::core::Hero >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"weapon") ) { weapon=inValue.Cast< ::com::ukuleledog::games::core::Weapon >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"playing") ) { playing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jumping") ) { jumping=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gravity") ) { gravity=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hitting") ) { hitting=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"elements") ) { elements=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ennemies") ) { ennemies=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onGround") ) { onGround=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jumpPeek") ) { jumpPeek=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fightRoom") ) { fightRoom=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jumpPower") ) { jumpPower=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"gameEvents") ) { gameEvents=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"collectibles") ) { collectibles=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"movingElements") ) { movingElements=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"startingPosition") ) { startingPosition=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Level_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("fightRoom"));
	outFields->push(HX_CSTRING("playing"));
	outFields->push(HX_CSTRING("elements"));
	outFields->push(HX_CSTRING("ennemies"));
	outFields->push(HX_CSTRING("collectibles"));
	outFields->push(HX_CSTRING("movingElements"));
	outFields->push(HX_CSTRING("gameEvents"));
	outFields->push(HX_CSTRING("hero"));
	outFields->push(HX_CSTRING("startingPosition"));
	outFields->push(HX_CSTRING("onGround"));
	outFields->push(HX_CSTRING("jumping"));
	outFields->push(HX_CSTRING("jumpPower"));
	outFields->push(HX_CSTRING("jumpPeek"));
	outFields->push(HX_CSTRING("gravity"));
	outFields->push(HX_CSTRING("hitting"));
	outFields->push(HX_CSTRING("weapon"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Level_obj,fightRoom),HX_CSTRING("fightRoom")},
	{hx::fsBool,(int)offsetof(Level_obj,playing),HX_CSTRING("playing")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Level_obj,elements),HX_CSTRING("elements")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Level_obj,ennemies),HX_CSTRING("ennemies")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Level_obj,collectibles),HX_CSTRING("collectibles")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Level_obj,movingElements),HX_CSTRING("movingElements")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Level_obj,gameEvents),HX_CSTRING("gameEvents")},
	{hx::fsObject /*::com::ukuleledog::games::core::Hero*/ ,(int)offsetof(Level_obj,hero),HX_CSTRING("hero")},
	{hx::fsObject /*::openfl::_v2::geom::Point*/ ,(int)offsetof(Level_obj,startingPosition),HX_CSTRING("startingPosition")},
	{hx::fsBool,(int)offsetof(Level_obj,onGround),HX_CSTRING("onGround")},
	{hx::fsBool,(int)offsetof(Level_obj,jumping),HX_CSTRING("jumping")},
	{hx::fsInt,(int)offsetof(Level_obj,jumpPower),HX_CSTRING("jumpPower")},
	{hx::fsInt,(int)offsetof(Level_obj,jumpPeek),HX_CSTRING("jumpPeek")},
	{hx::fsInt,(int)offsetof(Level_obj,gravity),HX_CSTRING("gravity")},
	{hx::fsBool,(int)offsetof(Level_obj,hitting),HX_CSTRING("hitting")},
	{hx::fsObject /*::com::ukuleledog::games::core::Weapon*/ ,(int)offsetof(Level_obj,weapon),HX_CSTRING("weapon")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("fightRoom"),
	HX_CSTRING("playing"),
	HX_CSTRING("elements"),
	HX_CSTRING("ennemies"),
	HX_CSTRING("collectibles"),
	HX_CSTRING("movingElements"),
	HX_CSTRING("gameEvents"),
	HX_CSTRING("hero"),
	HX_CSTRING("startingPosition"),
	HX_CSTRING("onGround"),
	HX_CSTRING("jumping"),
	HX_CSTRING("jumpPower"),
	HX_CSTRING("jumpPeek"),
	HX_CSTRING("gravity"),
	HX_CSTRING("hitting"),
	HX_CSTRING("weapon"),
	HX_CSTRING("init"),
	HX_CSTRING("setHero"),
	HX_CSTRING("addElement"),
	HX_CSTRING("addEnnemy"),
	HX_CSTRING("addCollectible"),
	HX_CSTRING("addGameEvent"),
	HX_CSTRING("setCamera"),
	HX_CSTRING("moveRight"),
	HX_CSTRING("moveLeft"),
	HX_CSTRING("moveUp"),
	HX_CSTRING("moveDown"),
	HX_CSTRING("jump"),
	HX_CSTRING("action"),
	HX_CSTRING("loop"),
	HX_CSTRING("canJump"),
	HX_CSTRING("canHit"),
	HX_CSTRING("manageEvent"),
	HX_CSTRING("setWeapon"),
	HX_CSTRING("getWeapon"),
	HX_CSTRING("positionWeapon"),
	HX_CSTRING("animateWeapon"),
	HX_CSTRING("start"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Level_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Level_obj::__mClass,"__mClass");
};

#endif

Class Level_obj::__mClass;

void Level_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ukuleledog.games.core.Level"), hx::TCanCast< Level_obj> ,sStaticFields,sMemberFields,
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

void Level_obj::__boot()
{
}

} // end namespace com
} // end namespace ukuleledog
} // end namespace games
} // end namespace core
