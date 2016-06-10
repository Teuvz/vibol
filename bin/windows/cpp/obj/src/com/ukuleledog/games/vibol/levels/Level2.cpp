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
#ifndef INCLUDED_com_ukuleledog_games_vibol_elements_LongBlock
#include <com/ukuleledog/games/vibol/elements/LongBlock.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_vibol_elements_Teleport
#include <com/ukuleledog/games/vibol/elements/Teleport.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_vibol_elements_Vibol
#include <com/ukuleledog/games/vibol/elements/Vibol.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_vibol_enemies_Frog
#include <com/ukuleledog/games/vibol/enemies/Frog.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_vibol_levels_Level2
#include <com/ukuleledog/games/vibol/levels/Level2.h>
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

Void Level2_obj::__construct()
{
HX_STACK_FRAME("com.ukuleledog.games.vibol.levels.Level2","new",0x1ba09b9a,"com.ukuleledog.games.vibol.levels.Level2.new","com/ukuleledog/games/vibol/levels/Level2.hx",41,0xe00a0557)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(42)
	super::__construct();
	HX_STACK_LINE(44)
	::com::ukuleledog::games::vibol::elements::LongBlock _g = ::com::ukuleledog::games::vibol::elements::LongBlock_obj::__new((int)20,null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(44)
	this->floor1 = _g;
	HX_STACK_LINE(45)
	this->addElement(this->floor1,(int)7,null());
	HX_STACK_LINE(47)
	::com::ukuleledog::games::vibol::enemies::Frog _g1 = ::com::ukuleledog::games::vibol::enemies::Frog_obj::__new(null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(47)
	this->frog1 = _g1;
	HX_STACK_LINE(48)
	this->addEnnemy(this->frog1,(int)6,(int)5);
	HX_STACK_LINE(49)
	this->frog1->setRoaming((int)1,null());
	HX_STACK_LINE(51)
	::com::ukuleledog::games::vibol::enemies::Frog _g2 = ::com::ukuleledog::games::vibol::enemies::Frog_obj::__new(null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(51)
	this->frog2 = _g2;
	HX_STACK_LINE(52)
	this->addEnnemy(this->frog2,(int)6,(int)10);
	HX_STACK_LINE(53)
	this->frog2->setRoaming((int)1,HX_CSTRING("left"));
	HX_STACK_LINE(55)
	::com::ukuleledog::games::vibol::elements::Block _g3 = ::com::ukuleledog::games::vibol::elements::Block_obj::__new(null(),null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(55)
	this->block2 = _g3;
	HX_STACK_LINE(56)
	this->addElement(this->block2,(int)9,(int)23);
	HX_STACK_LINE(57)
	this->block2->setMoving((int)5,(int)22,(int)3);
	HX_STACK_LINE(59)
	::com::ukuleledog::games::vibol::elements::LongBlock _g4 = ::com::ukuleledog::games::vibol::elements::LongBlock_obj::__new((int)25,null());		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(59)
	this->floor2 = _g4;
	HX_STACK_LINE(60)
	this->addElement(this->floor2,(int)7,(int)26);
	HX_STACK_LINE(62)
	::com::ukuleledog::games::vibol::enemies::Frog _g5 = ::com::ukuleledog::games::vibol::enemies::Frog_obj::__new(null());		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(62)
	this->frog3 = _g5;
	HX_STACK_LINE(63)
	this->addEnnemy(this->frog3,(int)6,(int)29);
	HX_STACK_LINE(64)
	this->frog3->setRoaming((int)1,null());
	HX_STACK_LINE(66)
	::com::ukuleledog::games::vibol::enemies::Frog _g6 = ::com::ukuleledog::games::vibol::enemies::Frog_obj::__new(null());		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(66)
	this->frog4 = _g6;
	HX_STACK_LINE(67)
	this->addEnnemy(this->frog4,(int)6,(int)34);
	HX_STACK_LINE(68)
	this->frog4->setRoaming((int)1,HX_CSTRING("left"));
	HX_STACK_LINE(70)
	::com::ukuleledog::games::vibol::enemies::Frog _g7 = ::com::ukuleledog::games::vibol::enemies::Frog_obj::__new(null());		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(70)
	this->frog4 = _g7;
	HX_STACK_LINE(71)
	this->addEnnemy(this->frog4,(int)6,(int)39);
	HX_STACK_LINE(72)
	this->frog4->setRoaming((int)1,null());
	HX_STACK_LINE(74)
	::com::ukuleledog::games::vibol::elements::Teleport _g8 = ::com::ukuleledog::games::vibol::elements::Teleport_obj::__new();		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(74)
	this->endTeleport = _g8;
	HX_STACK_LINE(75)
	this->endTeleport->set_y((int)320);
	HX_STACK_LINE(76)
	this->endTeleport->set_x((int)3200);
	HX_STACK_LINE(77)
	this->addChild(this->endTeleport);
	HX_STACK_LINE(79)
	::com::ukuleledog::games::vibol::elements::Vibol _g9 = ::com::ukuleledog::games::vibol::elements::Vibol_obj::__new();		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(79)
	this->setHero(_g9);
	HX_STACK_LINE(80)
	::openfl::_v2::geom::Point _g10 = ::openfl::_v2::geom::Point_obj::__new((int)1,(int)6);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(80)
	this->startingPosition = _g10;
	HX_STACK_LINE(82)
	::openfl::_v2::display::BitmapData thing = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/background2.png"),null());		HX_STACK_VAR(thing,"thing");
	HX_STACK_LINE(83)
	this->get_graphics()->beginBitmapFill(thing,null(),null(),null());
	HX_STACK_LINE(84)
	int _g11 = thing->get_width();		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(84)
	this->get_graphics()->drawRect((int)0,(int)0,_g11,(int)514);
	HX_STACK_LINE(85)
	this->get_graphics()->endFill();
	HX_STACK_LINE(87)
	this->init();
}
;
	return null();
}

//Level2_obj::~Level2_obj() { }

Dynamic Level2_obj::__CreateEmpty() { return  new Level2_obj; }
hx::ObjectPtr< Level2_obj > Level2_obj::__new()
{  hx::ObjectPtr< Level2_obj > result = new Level2_obj();
	result->__construct();
	return result;}

Dynamic Level2_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Level2_obj > result = new Level2_obj();
	result->__construct();
	return result;}


Level2_obj::Level2_obj()
{
}

void Level2_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Level2);
	HX_MARK_MEMBER_NAME(floor1,"floor1");
	HX_MARK_MEMBER_NAME(frog1,"frog1");
	HX_MARK_MEMBER_NAME(frog2,"frog2");
	HX_MARK_MEMBER_NAME(block1,"block1");
	HX_MARK_MEMBER_NAME(block2,"block2");
	HX_MARK_MEMBER_NAME(block3,"block3");
	HX_MARK_MEMBER_NAME(block4,"block4");
	HX_MARK_MEMBER_NAME(block5,"block5");
	HX_MARK_MEMBER_NAME(block6,"block6");
	HX_MARK_MEMBER_NAME(block7,"block7");
	HX_MARK_MEMBER_NAME(block8,"block8");
	HX_MARK_MEMBER_NAME(floor2,"floor2");
	HX_MARK_MEMBER_NAME(frog3,"frog3");
	HX_MARK_MEMBER_NAME(frog4,"frog4");
	::com::ukuleledog::games::vibol::levels::VibolLevel_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Level2_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(floor1,"floor1");
	HX_VISIT_MEMBER_NAME(frog1,"frog1");
	HX_VISIT_MEMBER_NAME(frog2,"frog2");
	HX_VISIT_MEMBER_NAME(block1,"block1");
	HX_VISIT_MEMBER_NAME(block2,"block2");
	HX_VISIT_MEMBER_NAME(block3,"block3");
	HX_VISIT_MEMBER_NAME(block4,"block4");
	HX_VISIT_MEMBER_NAME(block5,"block5");
	HX_VISIT_MEMBER_NAME(block6,"block6");
	HX_VISIT_MEMBER_NAME(block7,"block7");
	HX_VISIT_MEMBER_NAME(block8,"block8");
	HX_VISIT_MEMBER_NAME(floor2,"floor2");
	HX_VISIT_MEMBER_NAME(frog3,"frog3");
	HX_VISIT_MEMBER_NAME(frog4,"frog4");
	::com::ukuleledog::games::vibol::levels::VibolLevel_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Level2_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"frog1") ) { return frog1; }
		if (HX_FIELD_EQ(inName,"frog2") ) { return frog2; }
		if (HX_FIELD_EQ(inName,"frog3") ) { return frog3; }
		if (HX_FIELD_EQ(inName,"frog4") ) { return frog4; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"floor1") ) { return floor1; }
		if (HX_FIELD_EQ(inName,"block1") ) { return block1; }
		if (HX_FIELD_EQ(inName,"block2") ) { return block2; }
		if (HX_FIELD_EQ(inName,"block3") ) { return block3; }
		if (HX_FIELD_EQ(inName,"block4") ) { return block4; }
		if (HX_FIELD_EQ(inName,"block5") ) { return block5; }
		if (HX_FIELD_EQ(inName,"block6") ) { return block6; }
		if (HX_FIELD_EQ(inName,"block7") ) { return block7; }
		if (HX_FIELD_EQ(inName,"block8") ) { return block8; }
		if (HX_FIELD_EQ(inName,"floor2") ) { return floor2; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Level2_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"frog1") ) { frog1=inValue.Cast< ::com::ukuleledog::games::vibol::enemies::Frog >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frog2") ) { frog2=inValue.Cast< ::com::ukuleledog::games::vibol::enemies::Frog >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frog3") ) { frog3=inValue.Cast< ::com::ukuleledog::games::vibol::enemies::Frog >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frog4") ) { frog4=inValue.Cast< ::com::ukuleledog::games::vibol::enemies::Frog >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"floor1") ) { floor1=inValue.Cast< ::com::ukuleledog::games::vibol::elements::LongBlock >(); return inValue; }
		if (HX_FIELD_EQ(inName,"block1") ) { block1=inValue.Cast< ::com::ukuleledog::games::vibol::elements::Block >(); return inValue; }
		if (HX_FIELD_EQ(inName,"block2") ) { block2=inValue.Cast< ::com::ukuleledog::games::vibol::elements::Block >(); return inValue; }
		if (HX_FIELD_EQ(inName,"block3") ) { block3=inValue.Cast< ::com::ukuleledog::games::vibol::elements::Block >(); return inValue; }
		if (HX_FIELD_EQ(inName,"block4") ) { block4=inValue.Cast< ::com::ukuleledog::games::vibol::elements::Block >(); return inValue; }
		if (HX_FIELD_EQ(inName,"block5") ) { block5=inValue.Cast< ::com::ukuleledog::games::vibol::elements::Block >(); return inValue; }
		if (HX_FIELD_EQ(inName,"block6") ) { block6=inValue.Cast< ::com::ukuleledog::games::vibol::elements::Block >(); return inValue; }
		if (HX_FIELD_EQ(inName,"block7") ) { block7=inValue.Cast< ::com::ukuleledog::games::vibol::elements::Block >(); return inValue; }
		if (HX_FIELD_EQ(inName,"block8") ) { block8=inValue.Cast< ::com::ukuleledog::games::vibol::elements::Block >(); return inValue; }
		if (HX_FIELD_EQ(inName,"floor2") ) { floor2=inValue.Cast< ::com::ukuleledog::games::vibol::elements::LongBlock >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Level2_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("floor1"));
	outFields->push(HX_CSTRING("frog1"));
	outFields->push(HX_CSTRING("frog2"));
	outFields->push(HX_CSTRING("block1"));
	outFields->push(HX_CSTRING("block2"));
	outFields->push(HX_CSTRING("block3"));
	outFields->push(HX_CSTRING("block4"));
	outFields->push(HX_CSTRING("block5"));
	outFields->push(HX_CSTRING("block6"));
	outFields->push(HX_CSTRING("block7"));
	outFields->push(HX_CSTRING("block8"));
	outFields->push(HX_CSTRING("floor2"));
	outFields->push(HX_CSTRING("frog3"));
	outFields->push(HX_CSTRING("frog4"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::ukuleledog::games::vibol::elements::LongBlock*/ ,(int)offsetof(Level2_obj,floor1),HX_CSTRING("floor1")},
	{hx::fsObject /*::com::ukuleledog::games::vibol::enemies::Frog*/ ,(int)offsetof(Level2_obj,frog1),HX_CSTRING("frog1")},
	{hx::fsObject /*::com::ukuleledog::games::vibol::enemies::Frog*/ ,(int)offsetof(Level2_obj,frog2),HX_CSTRING("frog2")},
	{hx::fsObject /*::com::ukuleledog::games::vibol::elements::Block*/ ,(int)offsetof(Level2_obj,block1),HX_CSTRING("block1")},
	{hx::fsObject /*::com::ukuleledog::games::vibol::elements::Block*/ ,(int)offsetof(Level2_obj,block2),HX_CSTRING("block2")},
	{hx::fsObject /*::com::ukuleledog::games::vibol::elements::Block*/ ,(int)offsetof(Level2_obj,block3),HX_CSTRING("block3")},
	{hx::fsObject /*::com::ukuleledog::games::vibol::elements::Block*/ ,(int)offsetof(Level2_obj,block4),HX_CSTRING("block4")},
	{hx::fsObject /*::com::ukuleledog::games::vibol::elements::Block*/ ,(int)offsetof(Level2_obj,block5),HX_CSTRING("block5")},
	{hx::fsObject /*::com::ukuleledog::games::vibol::elements::Block*/ ,(int)offsetof(Level2_obj,block6),HX_CSTRING("block6")},
	{hx::fsObject /*::com::ukuleledog::games::vibol::elements::Block*/ ,(int)offsetof(Level2_obj,block7),HX_CSTRING("block7")},
	{hx::fsObject /*::com::ukuleledog::games::vibol::elements::Block*/ ,(int)offsetof(Level2_obj,block8),HX_CSTRING("block8")},
	{hx::fsObject /*::com::ukuleledog::games::vibol::elements::LongBlock*/ ,(int)offsetof(Level2_obj,floor2),HX_CSTRING("floor2")},
	{hx::fsObject /*::com::ukuleledog::games::vibol::enemies::Frog*/ ,(int)offsetof(Level2_obj,frog3),HX_CSTRING("frog3")},
	{hx::fsObject /*::com::ukuleledog::games::vibol::enemies::Frog*/ ,(int)offsetof(Level2_obj,frog4),HX_CSTRING("frog4")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("floor1"),
	HX_CSTRING("frog1"),
	HX_CSTRING("frog2"),
	HX_CSTRING("block1"),
	HX_CSTRING("block2"),
	HX_CSTRING("block3"),
	HX_CSTRING("block4"),
	HX_CSTRING("block5"),
	HX_CSTRING("block6"),
	HX_CSTRING("block7"),
	HX_CSTRING("block8"),
	HX_CSTRING("floor2"),
	HX_CSTRING("frog3"),
	HX_CSTRING("frog4"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Level2_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Level2_obj::__mClass,"__mClass");
};

#endif

Class Level2_obj::__mClass;

void Level2_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ukuleledog.games.vibol.levels.Level2"), hx::TCanCast< Level2_obj> ,sStaticFields,sMemberFields,
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

void Level2_obj::__boot()
{
}

} // end namespace com
} // end namespace ukuleledog
} // end namespace games
} // end namespace vibol
} // end namespace levels
