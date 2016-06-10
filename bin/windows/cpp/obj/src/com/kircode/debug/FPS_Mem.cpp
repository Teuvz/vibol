#include <hxcpp.h>

#ifndef INCLUDED_com_kircode_debug_FPS_Mem
#include <com/kircode/debug/FPS_Mem.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
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
#ifndef INCLUDED_openfl__v2_system_System
#include <openfl/_v2/system/System.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextField
#include <openfl/_v2/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextFormat
#include <openfl/_v2/text/TextFormat.h>
#endif
namespace com{
namespace kircode{
namespace debug{

Void FPS_Mem_obj::__construct(hx::Null< Float >  __o_inX,hx::Null< Float >  __o_inY,hx::Null< int >  __o_inCol)
{
HX_STACK_FRAME("com.kircode.debug.FPS_Mem","new",0xd4e12d3c,"com.kircode.debug.FPS_Mem.new","com/kircode/debug/FPS_Mem.hx",13,0x8e60c5f7)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_inX,"inX")
HX_STACK_ARG(__o_inY,"inY")
HX_STACK_ARG(__o_inCol,"inCol")
Float inX = __o_inX.Default(10.0);
Float inY = __o_inY.Default(10.0);
int inCol = __o_inCol.Default(0);
{
	HX_STACK_LINE(16)
	this->memPeak = (int)0;
	HX_STACK_LINE(20)
	super::__construct();
	HX_STACK_LINE(22)
	this->set_x(inX);
	HX_STACK_LINE(23)
	this->set_y(inY);
	HX_STACK_LINE(24)
	this->set_selectable(false);
	HX_STACK_LINE(26)
	::openfl::_v2::text::TextFormat _g = ::openfl::_v2::text::TextFormat_obj::__new(HX_CSTRING("_sans"),(int)12,inCol,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(26)
	this->set_defaultTextFormat(_g);
	HX_STACK_LINE(28)
	this->set_text(HX_CSTRING("FPS: "));
	HX_STACK_LINE(30)
	this->times = Array_obj< Float >::__new();
	HX_STACK_LINE(31)
	this->addEventListener(::openfl::_v2::events::Event_obj::ENTER_FRAME,this->onEnter_dyn(),null(),null(),null());
	HX_STACK_LINE(32)
	this->set_width((int)150);
	HX_STACK_LINE(33)
	this->set_height((int)70);
}
;
	return null();
}

//FPS_Mem_obj::~FPS_Mem_obj() { }

Dynamic FPS_Mem_obj::__CreateEmpty() { return  new FPS_Mem_obj; }
hx::ObjectPtr< FPS_Mem_obj > FPS_Mem_obj::__new(hx::Null< Float >  __o_inX,hx::Null< Float >  __o_inY,hx::Null< int >  __o_inCol)
{  hx::ObjectPtr< FPS_Mem_obj > result = new FPS_Mem_obj();
	result->__construct(__o_inX,__o_inY,__o_inCol);
	return result;}

Dynamic FPS_Mem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FPS_Mem_obj > result = new FPS_Mem_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void FPS_Mem_obj::onEnter( Dynamic _){
{
		HX_STACK_FRAME("com.kircode.debug.FPS_Mem","onEnter",0x2f570655,"com.kircode.debug.FPS_Mem.onEnter","com/kircode/debug/FPS_Mem.hx",37,0x8e60c5f7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(38)
		Float now = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(now,"now");
		HX_STACK_LINE(39)
		this->times->push(now);
		HX_STACK_LINE(41)
		while((true)){
			HX_STACK_LINE(41)
			if ((!(((this->times->__get((int)0) < (now - (int)1)))))){
				HX_STACK_LINE(41)
				break;
			}
			HX_STACK_LINE(42)
			this->times->shift();
		}
		HX_STACK_LINE(44)
		int _g = ::openfl::_v2::system::System_obj::get_totalMemory();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(44)
		Float _g1 = (Float(_g) / Float((int)1024));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(44)
		Float _g2 = (Float(_g1) / Float((int)1024));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(44)
		Float _g3 = (_g2 * (int)100);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(44)
		int _g4 = ::Math_obj::round(_g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(44)
		Float mem = (Float(_g4) / Float((int)100));		HX_STACK_VAR(mem,"mem");
		HX_STACK_LINE(45)
		if (((mem > this->memPeak))){
			HX_STACK_LINE(45)
			this->memPeak = mem;
		}
		HX_STACK_LINE(47)
		if ((this->get_visible())){
			HX_STACK_LINE(49)
			this->set_text(((((((HX_CSTRING("FPS: ") + this->times->length) + HX_CSTRING("\nMEM: ")) + mem) + HX_CSTRING(" MB\nMEM peak: ")) + this->memPeak) + HX_CSTRING(" MB")));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FPS_Mem_obj,onEnter,(void))


FPS_Mem_obj::FPS_Mem_obj()
{
}

void FPS_Mem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FPS_Mem);
	HX_MARK_MEMBER_NAME(times,"times");
	HX_MARK_MEMBER_NAME(memPeak,"memPeak");
	::openfl::_v2::text::TextField_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FPS_Mem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(times,"times");
	HX_VISIT_MEMBER_NAME(memPeak,"memPeak");
	::openfl::_v2::text::TextField_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FPS_Mem_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"times") ) { return times; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"memPeak") ) { return memPeak; }
		if (HX_FIELD_EQ(inName,"onEnter") ) { return onEnter_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FPS_Mem_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"times") ) { times=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"memPeak") ) { memPeak=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FPS_Mem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("times"));
	outFields->push(HX_CSTRING("memPeak"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FPS_Mem_obj,times),HX_CSTRING("times")},
	{hx::fsFloat,(int)offsetof(FPS_Mem_obj,memPeak),HX_CSTRING("memPeak")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("times"),
	HX_CSTRING("memPeak"),
	HX_CSTRING("onEnter"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FPS_Mem_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FPS_Mem_obj::__mClass,"__mClass");
};

#endif

Class FPS_Mem_obj::__mClass;

void FPS_Mem_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.kircode.debug.FPS_Mem"), hx::TCanCast< FPS_Mem_obj> ,sStaticFields,sMemberFields,
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

void FPS_Mem_obj::__boot()
{
}

} // end namespace com
} // end namespace kircode
} // end namespace debug
