#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_core_AnimatedObject
#include <com/ukuleledog/games/core/AnimatedObject.h>
#endif
#ifndef INCLUDED_com_ukuleledog_games_core_GameObject
#include <com/ukuleledog/games/core/GameObject.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_Timer
#include <openfl/_v2/utils/Timer.h>
#endif
#ifndef INCLUDED_openfl_events_TimerEvent
#include <openfl/events/TimerEvent.h>
#endif
namespace com{
namespace ukuleledog{
namespace games{
namespace core{

Void AnimatedObject_obj::__construct()
{
HX_STACK_FRAME("com.ukuleledog.games.core.AnimatedObject","new",0x91340780,"com.ukuleledog.games.core.AnimatedObject.new","com/ukuleledog/games/core/AnimatedObject.hx",17,0x9b0cbd30)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(37)
	this->currentAnimationLoop = true;
	HX_STACK_LINE(36)
	this->currentAnimationSpeed = (int)0;
	HX_STACK_LINE(35)
	this->currentAnimationWidth = (int)0;
	HX_STACK_LINE(34)
	this->currentAnimationHeight = (int)0;
	HX_STACK_LINE(33)
	this->currentAnimationLength = (int)0;
	HX_STACK_LINE(32)
	this->currentAnimationY = (int)0;
	HX_STACK_LINE(31)
	this->currentAnimationX = (int)0;
	HX_STACK_LINE(22)
	this->currentFrame = (int)0;
	HX_STACK_LINE(41)
	super::__construct();
	HX_STACK_LINE(42)
	::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(42)
	this->animationHeights = _g;
	HX_STACK_LINE(43)
	::haxe::ds::StringMap _g1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(43)
	this->animationLengths = _g1;
	HX_STACK_LINE(44)
	::haxe::ds::StringMap _g2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(44)
	this->animationPositionsX = _g2;
	HX_STACK_LINE(45)
	::haxe::ds::StringMap _g3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(45)
	this->animationPositionsY = _g3;
	HX_STACK_LINE(46)
	::haxe::ds::StringMap _g4 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(46)
	this->animationWidths = _g4;
	HX_STACK_LINE(47)
	::haxe::ds::StringMap _g5 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(47)
	this->animationSpeeds = _g5;
	HX_STACK_LINE(48)
	::haxe::ds::StringMap _g6 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(48)
	this->animationLooping = _g6;
	HX_STACK_LINE(50)
	this->addEventListener(::openfl::_v2::events::Event_obj::REMOVED_FROM_STAGE,this->kill_dyn(),null(),null(),null());
}
;
	return null();
}

//AnimatedObject_obj::~AnimatedObject_obj() { }

Dynamic AnimatedObject_obj::__CreateEmpty() { return  new AnimatedObject_obj; }
hx::ObjectPtr< AnimatedObject_obj > AnimatedObject_obj::__new()
{  hx::ObjectPtr< AnimatedObject_obj > result = new AnimatedObject_obj();
	result->__construct();
	return result;}

Dynamic AnimatedObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AnimatedObject_obj > result = new AnimatedObject_obj();
	result->__construct();
	return result;}

Void AnimatedObject_obj::setAnimation( ::String name){
{
		HX_STACK_FRAME("com.ukuleledog.games.core.AnimatedObject","setAnimation",0xcbb493e2,"com.ukuleledog.games.core.AnimatedObject.setAnimation","com/ukuleledog/games/core/AnimatedObject.hx",55,0x9b0cbd30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_LINE(56)
		if (((name == this->currentAnimation))){
			HX_STACK_LINE(57)
			return null();
		}
		HX_STACK_LINE(59)
		if (((this->animationTimer != null()))){
			HX_STACK_LINE(61)
			this->animationTimer->removeEventListener(::openfl::events::TimerEvent_obj::TIMER,this->animationLoop_dyn(),null());
			HX_STACK_LINE(62)
			this->animationTimer = null();
		}
		HX_STACK_LINE(65)
		this->currentAnimation = name;
		HX_STACK_LINE(66)
		this->currentFrame = (int)0;
		HX_STACK_LINE(67)
		Dynamic _g = this->animationPositionsX->get(name);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(67)
		this->currentAnimationX = _g;
		HX_STACK_LINE(68)
		Dynamic _g1 = this->animationPositionsY->get(name);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(68)
		this->currentAnimationY = _g1;
		HX_STACK_LINE(69)
		Dynamic _g2 = this->animationLengths->get(name);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(69)
		this->currentAnimationLength = _g2;
		HX_STACK_LINE(70)
		Dynamic _g3 = this->animationHeights->get(name);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(70)
		this->currentAnimationHeight = _g3;
		HX_STACK_LINE(71)
		Dynamic _g4 = this->animationWidths->get(name);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(71)
		this->currentAnimationWidth = _g4;
		HX_STACK_LINE(72)
		Dynamic _g5 = this->animationSpeeds->get(name);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(72)
		this->currentAnimationSpeed = _g5;
		HX_STACK_LINE(73)
		Dynamic _g6 = this->animationLooping->get(name);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(73)
		this->currentAnimationLoop = _g6;
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::core::AnimatedObject_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/core/AnimatedObject.hx",75,0x9b0cbd30)
				{
					HX_STACK_LINE(75)
					int a = __this->currentAnimationLength;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(75)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(75)
					bool bNeg = ((int)1 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(75)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a > (int)1)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(75)
		if ((_Function_1_1::Block(this))){
			HX_STACK_LINE(78)
			::openfl::_v2::utils::Timer _g7 = ::openfl::_v2::utils::Timer_obj::__new(this->currentAnimationSpeed,null());		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(78)
			this->animationTimer = _g7;
			HX_STACK_LINE(79)
			this->animationTimer->addEventListener(::openfl::events::TimerEvent_obj::TIMER,this->animationLoop_dyn(),null(),null(),null());
			HX_STACK_LINE(80)
			this->animationTimer->start();
		}
		HX_STACK_LINE(84)
		this->animationLoop(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimatedObject_obj,setAnimation,(void))

Void AnimatedObject_obj::createAnimation( ::String name,int startX,int startY,int length,int height,int width,hx::Null< Float >  __o_speed,hx::Null< bool >  __o_looping){
Float speed = __o_speed.Default(1);
bool looping = __o_looping.Default(true);
	HX_STACK_FRAME("com.ukuleledog.games.core.AnimatedObject","createAnimation",0x60100f88,"com.ukuleledog.games.core.AnimatedObject.createAnimation","com/ukuleledog/games/core/AnimatedObject.hx",88,0x9b0cbd30)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(startX,"startX")
	HX_STACK_ARG(startY,"startY")
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(speed,"speed")
	HX_STACK_ARG(looping,"looping")
{
		HX_STACK_LINE(89)
		this->animationLengths->set(name,length);
		HX_STACK_LINE(90)
		this->animationHeights->set(name,height);
		HX_STACK_LINE(91)
		this->animationWidths->set(name,width);
		HX_STACK_LINE(92)
		this->animationPositionsX->set(name,startX);
		HX_STACK_LINE(93)
		this->animationPositionsY->set(name,startY);
		HX_STACK_LINE(94)
		this->animationSpeeds->set(name,(speed * (int)1000));
		HX_STACK_LINE(95)
		this->animationLooping->set(name,looping);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(AnimatedObject_obj,createAnimation,(void))

Void AnimatedObject_obj::animate( ::String __o_name){
::String name = __o_name.Default(HX_CSTRING("idle"));
	HX_STACK_FRAME("com.ukuleledog.games.core.AnimatedObject","animate",0x71e721c1,"com.ukuleledog.games.core.AnimatedObject.animate","com/ukuleledog/games/core/AnimatedObject.hx",100,0x9b0cbd30)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
{
		HX_STACK_LINE(100)
		this->setAnimation(name);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimatedObject_obj,animate,(void))

Void AnimatedObject_obj::animationLoop( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.ukuleledog.games.core.AnimatedObject","animationLoop",0x87bbf2a8,"com.ukuleledog.games.core.AnimatedObject.animationLoop","com/ukuleledog/games/core/AnimatedObject.hx",104,0x9b0cbd30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(105)
		this->get_graphics()->clear();
		HX_STACK_LINE(107)
		::openfl::_v2::display::BitmapData tempBmd = ::openfl::_v2::display::BitmapData_obj::__new(this->currentAnimationWidth,this->currentAnimationHeight,true,null(),null());		HX_STACK_VAR(tempBmd,"tempBmd");
		struct _Function_1_1{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::core::AnimatedObject_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/core/AnimatedObject.hx",108,0x9b0cbd30)
				{
					HX_STACK_LINE(108)
					int _int = (__this->currentAnimationX + (__this->currentFrame * __this->currentAnimationWidth));		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(108)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::core::AnimatedObject_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/core/AnimatedObject.hx",108,0x9b0cbd30)
				{
					HX_STACK_LINE(108)
					int _int = __this->currentAnimationY;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(108)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		struct _Function_1_3{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::core::AnimatedObject_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/core/AnimatedObject.hx",108,0x9b0cbd30)
				{
					HX_STACK_LINE(108)
					int _int = __this->currentAnimationWidth;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(108)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		struct _Function_1_4{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::core::AnimatedObject_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/core/AnimatedObject.hx",108,0x9b0cbd30)
				{
					HX_STACK_LINE(108)
					int _int = __this->currentAnimationHeight;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(108)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(108)
		::openfl::_v2::geom::Rectangle _g = ::openfl::_v2::geom::Rectangle_obj::__new(_Function_1_1::Block(this),_Function_1_2::Block(this),_Function_1_3::Block(this),_Function_1_4::Block(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(108)
		::openfl::_v2::geom::Point _g1 = ::openfl::_v2::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(108)
		tempBmd->copyPixels(this->bmd,_g,_g1,null(),null(),null());
		HX_STACK_LINE(112)
		this->get_graphics()->beginBitmapFill(tempBmd,null(),null(),null());
		struct _Function_1_5{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::core::AnimatedObject_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/core/AnimatedObject.hx",113,0x9b0cbd30)
				{
					HX_STACK_LINE(113)
					int _int = __this->currentAnimationWidth;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(113)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		struct _Function_1_6{
			inline static Float Block( hx::ObjectPtr< ::com::ukuleledog::games::core::AnimatedObject_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/core/AnimatedObject.hx",113,0x9b0cbd30)
				{
					HX_STACK_LINE(113)
					int _int = __this->currentAnimationHeight;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(113)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(113)
		this->get_graphics()->drawRect((int)0,(int)0,_Function_1_5::Block(this),_Function_1_6::Block(this));
		HX_STACK_LINE(114)
		this->get_graphics()->endFill();
		struct _Function_1_7{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::core::AnimatedObject_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/core/AnimatedObject.hx",116,0x9b0cbd30)
				{
					HX_STACK_LINE(116)
					int a = (__this->currentFrame + (int)1);		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(116)
					int b = __this->currentAnimationLength;		HX_STACK_VAR(b,"b");
					struct _Function_2_1{
						inline static bool Block( int &b,int &a){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/core/AnimatedObject.hx",116,0x9b0cbd30)
							{
								HX_STACK_LINE(116)
								bool aNeg = (b < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
								HX_STACK_LINE(116)
								bool bNeg = (a < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
								HX_STACK_LINE(116)
								return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((b > a)) );
							}
							return null();
						}
					};
					HX_STACK_LINE(116)
					return _Function_2_1::Block(b,a);
				}
				return null();
			}
		};
		HX_STACK_LINE(116)
		if ((_Function_1_7::Block(this))){
			HX_STACK_LINE(117)
			(this->currentFrame)++;
		}
		else{
			HX_STACK_LINE(118)
			if ((this->currentAnimationLoop)){
				HX_STACK_LINE(119)
				this->currentFrame = (int)0;
			}
			else{
				HX_STACK_LINE(122)
				this->animationTimer->removeEventListener(::openfl::events::TimerEvent_obj::TIMER,this->animationLoop_dyn(),null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimatedObject_obj,animationLoop,(void))

Void AnimatedObject_obj::kill( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.ukuleledog.games.core.AnimatedObject","kill",0x7a59e47e,"com.ukuleledog.games.core.AnimatedObject.kill","com/ukuleledog/games/core/AnimatedObject.hx",127,0x9b0cbd30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(128)
		this->removeEventListener(::openfl::_v2::events::Event_obj::REMOVED_FROM_STAGE,this->kill_dyn(),null());
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::ukuleledog::games::core::AnimatedObject_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/ukuleledog/games/core/AnimatedObject.hx",130,0x9b0cbd30)
				{
					HX_STACK_LINE(130)
					int a = __this->currentAnimationLength;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(130)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(130)
					bool bNeg = ((int)1 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(130)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a >= (int)1)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(130)
		if (((bool(_Function_1_1::Block(this)) && bool((this->animationTimer != null()))))){
			HX_STACK_LINE(132)
			this->animationTimer->removeEventListener(::openfl::events::TimerEvent_obj::TIMER,this->animationLoop_dyn(),null());
			HX_STACK_LINE(133)
			this->animationTimer->stop();
			HX_STACK_LINE(134)
			this->animationTimer = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimatedObject_obj,kill,(void))


AnimatedObject_obj::AnimatedObject_obj()
{
}

void AnimatedObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimatedObject);
	HX_MARK_MEMBER_NAME(animationTimer,"animationTimer");
	HX_MARK_MEMBER_NAME(currentAnimation,"currentAnimation");
	HX_MARK_MEMBER_NAME(currentFrame,"currentFrame");
	HX_MARK_MEMBER_NAME(animationPositionsX,"animationPositionsX");
	HX_MARK_MEMBER_NAME(animationPositionsY,"animationPositionsY");
	HX_MARK_MEMBER_NAME(animationLengths,"animationLengths");
	HX_MARK_MEMBER_NAME(animationHeights,"animationHeights");
	HX_MARK_MEMBER_NAME(animationWidths,"animationWidths");
	HX_MARK_MEMBER_NAME(animationSpeeds,"animationSpeeds");
	HX_MARK_MEMBER_NAME(animationLooping,"animationLooping");
	HX_MARK_MEMBER_NAME(currentAnimationX,"currentAnimationX");
	HX_MARK_MEMBER_NAME(currentAnimationY,"currentAnimationY");
	HX_MARK_MEMBER_NAME(currentAnimationLength,"currentAnimationLength");
	HX_MARK_MEMBER_NAME(currentAnimationHeight,"currentAnimationHeight");
	HX_MARK_MEMBER_NAME(currentAnimationWidth,"currentAnimationWidth");
	HX_MARK_MEMBER_NAME(currentAnimationSpeed,"currentAnimationSpeed");
	HX_MARK_MEMBER_NAME(currentAnimationLoop,"currentAnimationLoop");
	::com::ukuleledog::games::core::GameObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AnimatedObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(animationTimer,"animationTimer");
	HX_VISIT_MEMBER_NAME(currentAnimation,"currentAnimation");
	HX_VISIT_MEMBER_NAME(currentFrame,"currentFrame");
	HX_VISIT_MEMBER_NAME(animationPositionsX,"animationPositionsX");
	HX_VISIT_MEMBER_NAME(animationPositionsY,"animationPositionsY");
	HX_VISIT_MEMBER_NAME(animationLengths,"animationLengths");
	HX_VISIT_MEMBER_NAME(animationHeights,"animationHeights");
	HX_VISIT_MEMBER_NAME(animationWidths,"animationWidths");
	HX_VISIT_MEMBER_NAME(animationSpeeds,"animationSpeeds");
	HX_VISIT_MEMBER_NAME(animationLooping,"animationLooping");
	HX_VISIT_MEMBER_NAME(currentAnimationX,"currentAnimationX");
	HX_VISIT_MEMBER_NAME(currentAnimationY,"currentAnimationY");
	HX_VISIT_MEMBER_NAME(currentAnimationLength,"currentAnimationLength");
	HX_VISIT_MEMBER_NAME(currentAnimationHeight,"currentAnimationHeight");
	HX_VISIT_MEMBER_NAME(currentAnimationWidth,"currentAnimationWidth");
	HX_VISIT_MEMBER_NAME(currentAnimationSpeed,"currentAnimationSpeed");
	HX_VISIT_MEMBER_NAME(currentAnimationLoop,"currentAnimationLoop");
	::com::ukuleledog::games::core::GameObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AnimatedObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"animate") ) { return animate_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentFrame") ) { return currentFrame; }
		if (HX_FIELD_EQ(inName,"setAnimation") ) { return setAnimation_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"animationLoop") ) { return animationLoop_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"animationTimer") ) { return animationTimer; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"animationWidths") ) { return animationWidths; }
		if (HX_FIELD_EQ(inName,"animationSpeeds") ) { return animationSpeeds; }
		if (HX_FIELD_EQ(inName,"createAnimation") ) { return createAnimation_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentAnimation") ) { return currentAnimation; }
		if (HX_FIELD_EQ(inName,"animationLengths") ) { return animationLengths; }
		if (HX_FIELD_EQ(inName,"animationHeights") ) { return animationHeights; }
		if (HX_FIELD_EQ(inName,"animationLooping") ) { return animationLooping; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentAnimationX") ) { return currentAnimationX; }
		if (HX_FIELD_EQ(inName,"currentAnimationY") ) { return currentAnimationY; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"animationPositionsX") ) { return animationPositionsX; }
		if (HX_FIELD_EQ(inName,"animationPositionsY") ) { return animationPositionsY; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"currentAnimationLoop") ) { return currentAnimationLoop; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"currentAnimationWidth") ) { return currentAnimationWidth; }
		if (HX_FIELD_EQ(inName,"currentAnimationSpeed") ) { return currentAnimationSpeed; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"currentAnimationLength") ) { return currentAnimationLength; }
		if (HX_FIELD_EQ(inName,"currentAnimationHeight") ) { return currentAnimationHeight; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AnimatedObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"currentFrame") ) { currentFrame=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"animationTimer") ) { animationTimer=inValue.Cast< ::openfl::_v2::utils::Timer >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"animationWidths") ) { animationWidths=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animationSpeeds") ) { animationSpeeds=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentAnimation") ) { currentAnimation=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animationLengths") ) { animationLengths=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animationHeights") ) { animationHeights=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animationLooping") ) { animationLooping=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentAnimationX") ) { currentAnimationX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentAnimationY") ) { currentAnimationY=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"animationPositionsX") ) { animationPositionsX=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animationPositionsY") ) { animationPositionsY=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"currentAnimationLoop") ) { currentAnimationLoop=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"currentAnimationWidth") ) { currentAnimationWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentAnimationSpeed") ) { currentAnimationSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"currentAnimationLength") ) { currentAnimationLength=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentAnimationHeight") ) { currentAnimationHeight=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimatedObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("animationTimer"));
	outFields->push(HX_CSTRING("currentAnimation"));
	outFields->push(HX_CSTRING("currentFrame"));
	outFields->push(HX_CSTRING("animationPositionsX"));
	outFields->push(HX_CSTRING("animationPositionsY"));
	outFields->push(HX_CSTRING("animationLengths"));
	outFields->push(HX_CSTRING("animationHeights"));
	outFields->push(HX_CSTRING("animationWidths"));
	outFields->push(HX_CSTRING("animationSpeeds"));
	outFields->push(HX_CSTRING("animationLooping"));
	outFields->push(HX_CSTRING("currentAnimationX"));
	outFields->push(HX_CSTRING("currentAnimationY"));
	outFields->push(HX_CSTRING("currentAnimationLength"));
	outFields->push(HX_CSTRING("currentAnimationHeight"));
	outFields->push(HX_CSTRING("currentAnimationWidth"));
	outFields->push(HX_CSTRING("currentAnimationSpeed"));
	outFields->push(HX_CSTRING("currentAnimationLoop"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::utils::Timer*/ ,(int)offsetof(AnimatedObject_obj,animationTimer),HX_CSTRING("animationTimer")},
	{hx::fsString,(int)offsetof(AnimatedObject_obj,currentAnimation),HX_CSTRING("currentAnimation")},
	{hx::fsInt,(int)offsetof(AnimatedObject_obj,currentFrame),HX_CSTRING("currentFrame")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AnimatedObject_obj,animationPositionsX),HX_CSTRING("animationPositionsX")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AnimatedObject_obj,animationPositionsY),HX_CSTRING("animationPositionsY")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AnimatedObject_obj,animationLengths),HX_CSTRING("animationLengths")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AnimatedObject_obj,animationHeights),HX_CSTRING("animationHeights")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AnimatedObject_obj,animationWidths),HX_CSTRING("animationWidths")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AnimatedObject_obj,animationSpeeds),HX_CSTRING("animationSpeeds")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AnimatedObject_obj,animationLooping),HX_CSTRING("animationLooping")},
	{hx::fsInt,(int)offsetof(AnimatedObject_obj,currentAnimationX),HX_CSTRING("currentAnimationX")},
	{hx::fsInt,(int)offsetof(AnimatedObject_obj,currentAnimationY),HX_CSTRING("currentAnimationY")},
	{hx::fsInt,(int)offsetof(AnimatedObject_obj,currentAnimationLength),HX_CSTRING("currentAnimationLength")},
	{hx::fsInt,(int)offsetof(AnimatedObject_obj,currentAnimationHeight),HX_CSTRING("currentAnimationHeight")},
	{hx::fsInt,(int)offsetof(AnimatedObject_obj,currentAnimationWidth),HX_CSTRING("currentAnimationWidth")},
	{hx::fsFloat,(int)offsetof(AnimatedObject_obj,currentAnimationSpeed),HX_CSTRING("currentAnimationSpeed")},
	{hx::fsBool,(int)offsetof(AnimatedObject_obj,currentAnimationLoop),HX_CSTRING("currentAnimationLoop")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("animationTimer"),
	HX_CSTRING("currentAnimation"),
	HX_CSTRING("currentFrame"),
	HX_CSTRING("animationPositionsX"),
	HX_CSTRING("animationPositionsY"),
	HX_CSTRING("animationLengths"),
	HX_CSTRING("animationHeights"),
	HX_CSTRING("animationWidths"),
	HX_CSTRING("animationSpeeds"),
	HX_CSTRING("animationLooping"),
	HX_CSTRING("currentAnimationX"),
	HX_CSTRING("currentAnimationY"),
	HX_CSTRING("currentAnimationLength"),
	HX_CSTRING("currentAnimationHeight"),
	HX_CSTRING("currentAnimationWidth"),
	HX_CSTRING("currentAnimationSpeed"),
	HX_CSTRING("currentAnimationLoop"),
	HX_CSTRING("setAnimation"),
	HX_CSTRING("createAnimation"),
	HX_CSTRING("animate"),
	HX_CSTRING("animationLoop"),
	HX_CSTRING("kill"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AnimatedObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AnimatedObject_obj::__mClass,"__mClass");
};

#endif

Class AnimatedObject_obj::__mClass;

void AnimatedObject_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ukuleledog.games.core.AnimatedObject"), hx::TCanCast< AnimatedObject_obj> ,sStaticFields,sMemberFields,
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

void AnimatedObject_obj::__boot()
{
}

} // end namespace com
} // end namespace ukuleledog
} // end namespace games
} // end namespace core
