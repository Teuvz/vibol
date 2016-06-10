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
#ifndef INCLUDED_com_ukuleledog_games_vibol_elements_Coin
#include <com/ukuleledog/games/vibol/elements/Coin.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_vibol_elements_LongBlock
#include <com/ukuleledog/games/vibol/elements/LongBlock.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_vibol_elements_Teleport
#include <com/ukuleledog/games/vibol/elements/Teleport.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_vibol_elements_Vibol
#include <com/ukuleledog/games/vibol/elements/Vibol.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_vibol_enemies_Schroom
#include <com/ukuleledog/games/vibol/enemies/Schroom.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_vibol_levels_Level1
#include <com/ukuleledog/games/vibol/levels/Level1.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_vibol_levels_VibolLevel
#include <com/ukuleledog/games/vibol/levels/VibolLevel.h>
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

Void Level1_obj::__construct()
{
HX_STACK_FRAME("com.ukuleledog.games.vibol.levels.Level1","new",0x883a0719,"com.ukuleledog.games.vibol.levels.Level1.new","com/ukuleledog/games/vibol/levels/Level1.hx",36,0xdf60ceb8)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(37)
	super::__construct();
	HX_STACK_LINE(39)
	::com::ukuleledog::games::vibol::elements::Block _g = ::com::ukuleledog::games::vibol::elements::Block_obj::__new(HX_CSTRING("block-forest"),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(39)
	this->block1 = _g;
	HX_STACK_LINE(40)
	this->addElement(this->block1,(int)5,null());
	HX_STACK_LINE(42)
	::com::ukuleledog::games::vibol::elements::Block _g1 = ::com::ukuleledog::games::vibol::elements::Block_obj::__new(HX_CSTRING("block-forest"),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(42)
	this->block2 = _g1;
	HX_STACK_LINE(43)
	this->addElement(this->block2,(int)3,(int)2);
	HX_STACK_LINE(45)
	::com::ukuleledog::games::vibol::elements::Block _g2 = ::com::ukuleledog::games::vibol::elements::Block_obj::__new(HX_CSTRING("block-forest"),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(45)
	this->block3 = _g2;
	HX_STACK_LINE(46)
	this->addElement(this->block3,(int)4,(int)1);
	HX_STACK_LINE(48)
	::com::ukuleledog::games::vibol::elements::LongBlock _g3 = ::com::ukuleledog::games::vibol::elements::LongBlock_obj::__new((int)8,HX_CSTRING("floor-forest"));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(48)
	this->floor1 = _g3;
	HX_STACK_LINE(49)
	this->addElement(this->floor1,(int)7,null());
	HX_STACK_LINE(51)
	::com::ukuleledog::games::vibol::elements::LongBlock _g4 = ::com::ukuleledog::games::vibol::elements::LongBlock_obj::__new((int)8,HX_CSTRING("floor-forest"));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(51)
	this->floor2 = _g4;
	HX_STACK_LINE(52)
	this->addElement(this->floor2,(int)7,(int)14);
	HX_STACK_LINE(54)
	::com::ukuleledog::games::vibol::elements::Block _g5 = ::com::ukuleledog::games::vibol::elements::Block_obj::__new(HX_CSTRING("block-forest"),null());		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(54)
	this->block4 = _g5;
	HX_STACK_LINE(55)
	this->addElement(this->block4,(int)6,(int)27);
	HX_STACK_LINE(57)
	::com::ukuleledog::games::vibol::elements::LongBlock _g6 = ::com::ukuleledog::games::vibol::elements::LongBlock_obj::__new(16.5,HX_CSTRING("floor-forest"));		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(57)
	this->floor3 = _g6;
	HX_STACK_LINE(58)
	this->addElement(this->floor3,(int)7,(int)27);
	HX_STACK_LINE(60)
	::com::ukuleledog::games::vibol::enemies::Schroom _g7 = ::com::ukuleledog::games::vibol::enemies::Schroom_obj::__new();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(60)
	this->ennemy1 = _g7;
	HX_STACK_LINE(61)
	this->addEnnemy(this->ennemy1,(int)6,(int)4);
	HX_STACK_LINE(62)
	this->ennemy1->setRoaming((int)2,null());
	HX_STACK_LINE(64)
	::com::ukuleledog::games::vibol::enemies::Schroom _g8 = ::com::ukuleledog::games::vibol::enemies::Schroom_obj::__new();		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(64)
	this->ennemy2 = _g8;
	HX_STACK_LINE(65)
	this->addEnnemy(this->ennemy2,(int)6,(int)34);
	HX_STACK_LINE(66)
	this->ennemy2->setRoaming((int)3,null());
	HX_STACK_LINE(68)
	::com::ukuleledog::games::vibol::elements::Coin _g9 = ::com::ukuleledog::games::vibol::elements::Coin_obj::__new();		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(68)
	this->coin = _g9;
	HX_STACK_LINE(69)
	this->addCollectible(this->coin,(int)4,(int)17);
	HX_STACK_LINE(71)
	::com::ukuleledog::games::vibol::elements::Teleport _g10 = ::com::ukuleledog::games::vibol::elements::Teleport_obj::__new();		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(71)
	this->endTeleport = _g10;
	HX_STACK_LINE(72)
	this->endTeleport->set_y((int)320);
	HX_STACK_LINE(73)
	this->endTeleport->set_x((int)2560);
	HX_STACK_LINE(74)
	this->addChild(this->endTeleport);
	HX_STACK_LINE(76)
	::com::ukuleledog::games::vibol::elements::Vibol _g11 = ::com::ukuleledog::games::vibol::elements::Vibol_obj::__new();		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(76)
	this->setHero(_g11);
	HX_STACK_LINE(77)
	::openfl::_v2::geom::Point _g12 = ::openfl::_v2::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(77)
	this->startingPosition = _g12;
	HX_STACK_LINE(79)
	::openfl::_v2::display::BitmapData thing = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/background.png"),null());		HX_STACK_VAR(thing,"thing");
	HX_STACK_LINE(80)
	this->get_graphics()->beginBitmapFill(thing,null(),null(),null());
	HX_STACK_LINE(81)
	int _g13 = thing->get_width();		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(81)
	this->get_graphics()->drawRect((int)0,(int)0,_g13,(int)514);
	HX_STACK_LINE(82)
	this->get_graphics()->endFill();
	HX_STACK_LINE(84)
	this->init();
}
;
	return null();
}

//Level1_obj::~Level1_obj() { }

Dynamic Level1_obj::__CreateEmpty() { return  new Level1_obj; }
hx::ObjectPtr< Level1_obj > Level1_obj::__new()
{  hx::ObjectPtr< Level1_obj > result = new Level1_obj();
	result->__construct();
	return result;}

Dynamic Level1_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Level1_obj > result = new Level1_obj();
	result->__construct();
	return result;}


Level1_obj::Level1_obj()
{
}

void Level1_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Level1);
	HX_MARK_MEMBER_NAME(block1,"block1");
	HX_MARK_MEMBER_NAME(block2,"block2");
	HX_MARK_MEMBER_NAME(block3,"block3");
	HX_MARK_MEMBER_NAME(block4,"block4");
	HX_MARK_MEMBER_NAME(floor1,"floor1");
	HX_MARK_MEMBER_NAME(floor2,"floor2");
	HX_MARK_MEMBER_NAME(floor3,"floor3");
	HX_MARK_MEMBER_NAME(ennemy1,"ennemy1");
	HX_MARK_MEMBER_NAME(ennemy2,"ennemy2");
	HX_MARK_MEMBER_NAME(coin,"coin");
	::com::ukuleledog::games::vibol::levels::VibolLevel_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Level1_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(block1,"block1");
	HX_VISIT_MEMBER_NAME(block2,"block2");
	HX_VISIT_MEMBER_NAME(block3,"block3");
	HX_VISIT_MEMBER_NAME(block4,"block4");
	HX_VISIT_MEMBER_NAME(floor1,"floor1");
	HX_VISIT_MEMBER_NAME(floor2,"floor2");
	HX_VISIT_MEMBER_NAME(floor3,"floor3");
	HX_VISIT_MEMBER_NAME(ennemy1,"ennemy1");
	HX_VISIT_MEMBER_NAME(ennemy2,"ennemy2");
	HX_VISIT_MEMBER_NAME(coin,"coin");
	::com::ukuleledog::games::vibol::levels::VibolLevel_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Level1_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"coin") ) { return coin; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"block1") ) { return block1; }
		if (HX_FIELD_EQ(inName,"block2") ) { return block2; }
		if (HX_FIELD_EQ(inName,"block3") ) { return block3; }
		if (HX_FIELD_EQ(inName,"block4") ) { return block4; }
		if (HX_FIELD_EQ(inName,"floor1") ) { return floor1; }
		if (HX_FIELD_EQ(inName,"floor2") ) { return floor2; }
		if (HX_FIELD_EQ(inName,"floor3") ) { return floor3; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ennemy1") ) { return ennemy1; }
		if (HX_FIELD_EQ(inName,"ennemy2") ) { return ennemy2; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Level1_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"coin") ) { coin=inValue.Cast< ::com::ukuleledog::games::vibol::elements::Coin >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"block1") ) { block1=inValue.Cast< ::com::ukuleledog::games::vibol::elements::Block >(); return inValue; }
		if (HX_FIELD_EQ(inName,"block2") ) { block2=inValue.Cast< ::com::ukuleledog::games::vibol::elements::Block >(); return inValue; }
		if (HX_FIELD_EQ(inName,"block3") ) { block3=inValue.Cast< ::com::ukuleledog::games::vibol::elements::Block >(); return inValue; }
		if (HX_FIELD_EQ(inName,"block4") ) { block4=inValue.Cast< ::com::ukuleledog::games::vibol::elements::Block >(); return inValue; }
		if (HX_FIELD_EQ(inName,"floor1") ) { floor1=inValue.Cast< ::com::ukuleledog::games::vibol::elements::LongBlock >(); return inValue; }
		if (HX_FIELD_EQ(inName,"floor2") ) { floor2=inValue.Cast< ::com::ukuleledog::games::vibol::elements::LongBlock >(); return inValue; }
		if (HX_FIELD_EQ(inName,"floor3") ) { floor3=inValue.Cast< ::com::ukuleledog::games::vibol::elements::LongBlock >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ennemy1") ) { ennemy1=inValue.Cast< ::com::ukuleledog::games::vibol::enemies::Schroom >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ennemy2") ) { ennemy2=inValue.Cast< ::com::ukuleledog::games::vibol::enemies::Schroom >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Level1_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("block1"));
	outFields->push(HX_CSTRING("block2"));
	outFields->push(HX_CSTRING("block3"));
	outFields->push(HX_CSTRING("block4"));
	outFields->push(HX_CSTRING("floor1"));
	outFields->push(HX_CSTRING("floor2"));
	outFields->push(HX_CSTRING("floor3"));
	outFields->push(HX_CSTRING("ennemy1"));
	outFields->push(HX_CSTRING("ennemy2"));
	outFields->push(HX_CSTRING("coin"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::ukuleledog::games::vibol::elements::Block*/ ,(int)offsetof(Level1_obj,block1),HX_CSTRING("block1")},
	{hx::fsObject /*::com::ukuleledog::games::vibol::elements::Block*/ ,(int)offsetof(Level1_obj,block2),HX_CSTRING("block2")},
	{hx::fsObject /*::com::ukuleledog::games::vibol::elements::Block*/ ,(int)offsetof(Level1_obj,block3),HX_CSTRING("block3")},
	{hx::fsObject /*::com::ukuleledog::games::vibol::elements::Block*/ ,(int)offsetof(Level1_obj,block4),HX_CSTRING("block4")},
	{hx::fsObject /*::com::ukuleledog::games::vibol::elements::LongBlock*/ ,(int)offsetof(Level1_obj,floor1),HX_CSTRING("floor1")},
	{hx::fsObject /*::com::ukuleledog::games::vibol::elements::LongBlock*/ ,(int)offsetof(Level1_obj,floor2),HX_CSTRING("floor2")},
	{hx::fsObject /*::com::ukuleledog::games::vibol::elements::LongBlock*/ ,(int)offsetof(Level1_obj,floor3),HX_CSTRING("floor3")},
	{hx::fsObject /*::com::ukuleledog::games::vibol::enemies::Schroom*/ ,(int)offsetof(Level1_obj,ennemy1),HX_CSTRING("ennemy1")},
	{hx::fsObject /*::com::ukuleledog::games::vibol::enemies::Schroom*/ ,(int)offsetof(Level1_obj,ennemy2),HX_CSTRING("ennemy2")},
	{hx::fsObject /*::com::ukuleledog::games::vibol::elements::Coin*/ ,(int)offsetof(Level1_obj,coin),HX_CSTRING("coin")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("block1"),
	HX_CSTRING("block2"),
	HX_CSTRING("block3"),
	HX_CSTRING("block4"),
	HX_CSTRING("floor1"),
	HX_CSTRING("floor2"),
	HX_CSTRING("floor3"),
	HX_CSTRING("ennemy1"),
	HX_CSTRING("ennemy2"),
	HX_CSTRING("coin"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Level1_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Level1_obj::__mClass,"__mClass");
};

#endif

Class Level1_obj::__mClass;

void Level1_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ukuleledog.games.vibol.levels.Level1"), hx::TCanCast< Level1_obj> ,sStaticFields,sMemberFields,
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

void Level1_obj::__boot()
{
}

} // end namespace com
} // end namespace ukuleledog
} // end namespace games
} // end namespace vibol
} // end namespace levels
