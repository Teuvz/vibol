#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_Bounce
#include <motion/easing/Bounce.h>
#endif
#ifndef INCLUDED_motion_easing_BounceEaseIn
#include <motion/easing/BounceEaseIn.h>
#endif
#ifndef INCLUDED_motion_easing_BounceEaseInOut
#include <motion/easing/BounceEaseInOut.h>
#endif
#ifndef INCLUDED_motion_easing_BounceEaseOut
#include <motion/easing/BounceEaseOut.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void Bounce_obj::__construct()
{
	return null();
}

//Bounce_obj::~Bounce_obj() { }

Dynamic Bounce_obj::__CreateEmpty() { return  new Bounce_obj; }
hx::ObjectPtr< Bounce_obj > Bounce_obj::__new()
{  hx::ObjectPtr< Bounce_obj > result = new Bounce_obj();
	result->__construct();
	return result;}

Dynamic Bounce_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bounce_obj > result = new Bounce_obj();
	result->__construct();
	return result;}

::motion::easing::IEasing Bounce_obj::get_easeIn( ){
	HX_STACK_FRAME("motion.easing.Bounce","get_easeIn",0x75d900f7,"motion.easing.Bounce.get_easeIn","motion/easing/Bounce.hx",20,0xc6b45fab)
	HX_STACK_LINE(20)
	return ::motion::easing::BounceEaseIn_obj::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Bounce_obj,get_easeIn,return )

::motion::easing::IEasing Bounce_obj::get_easeInOut( ){
	HX_STACK_FRAME("motion.easing.Bounce","get_easeInOut",0x9b470bd7,"motion.easing.Bounce.get_easeInOut","motion/easing/Bounce.hx",27,0xc6b45fab)
	HX_STACK_LINE(27)
	return ::motion::easing::BounceEaseInOut_obj::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Bounce_obj,get_easeInOut,return )

::motion::easing::IEasing Bounce_obj::get_easeOut( ){
	HX_STACK_FRAME("motion.easing.Bounce","get_easeOut",0xa80c6b3c,"motion.easing.Bounce.get_easeOut","motion/easing/Bounce.hx",34,0xc6b45fab)
	HX_STACK_LINE(34)
	return ::motion::easing::BounceEaseOut_obj::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Bounce_obj,get_easeOut,return )


Bounce_obj::Bounce_obj()
{
}

Dynamic Bounce_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"easeIn") ) { return get_easeIn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"easeOut") ) { return get_easeOut(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"easeInOut") ) { return get_easeInOut(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_easeIn") ) { return get_easeIn_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_easeOut") ) { return get_easeOut_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_easeInOut") ) { return get_easeInOut_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Bounce_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Bounce_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("get_easeIn"),
	HX_CSTRING("get_easeInOut"),
	HX_CSTRING("get_easeOut"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bounce_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bounce_obj::__mClass,"__mClass");
};

#endif

Class Bounce_obj::__mClass;

void Bounce_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.Bounce"), hx::TCanCast< Bounce_obj> ,sStaticFields,sMemberFields,
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

void Bounce_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
