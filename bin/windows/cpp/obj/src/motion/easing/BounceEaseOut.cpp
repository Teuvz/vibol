#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_BounceEaseOut
#include <motion/easing/BounceEaseOut.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void BounceEaseOut_obj::__construct()
{
HX_STACK_FRAME("motion.easing.BounceEaseOut","new",0x46bb761f,"motion.easing.BounceEaseOut.new","motion/easing/Bounce.hx",109,0xc6b45fab)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//BounceEaseOut_obj::~BounceEaseOut_obj() { }

Dynamic BounceEaseOut_obj::__CreateEmpty() { return  new BounceEaseOut_obj; }
hx::ObjectPtr< BounceEaseOut_obj > BounceEaseOut_obj::__new()
{  hx::ObjectPtr< BounceEaseOut_obj > result = new BounceEaseOut_obj();
	result->__construct();
	return result;}

Dynamic BounceEaseOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BounceEaseOut_obj > result = new BounceEaseOut_obj();
	result->__construct();
	return result;}

hx::Object *BounceEaseOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

Float BounceEaseOut_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.BounceEaseOut","calculate",0xef1f9465,"motion.easing.BounceEaseOut.calculate","motion/easing/Bounce.hx",117,0xc6b45fab)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(117)
	Float t = k;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(117)
	Float _g = hx::DivEq(t,(int)1);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(117)
	if (((_g < 0.36363636363636365))){
		HX_STACK_LINE(117)
		return ((7.5625 * t) * t);
	}
	else{
		HX_STACK_LINE(117)
		if (((t < 0.72727272727272729))){
			HX_STACK_LINE(117)
			Float _g1 = hx::SubEq(t,0.54545454545454541);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(117)
			Float _g2 = (7.5625 * _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(117)
			Float _g3 = (_g2 * t);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(117)
			Float _g4 = (_g3 + .75);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(117)
			Float _g5 = _g4;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(117)
			return _g5;
		}
		else{
			HX_STACK_LINE(117)
			if (((t < 0.90909090909090906))){
				HX_STACK_LINE(117)
				Float _g6 = hx::SubEq(t,0.81818181818181823);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(117)
				Float _g7 = (7.5625 * _g6);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(117)
				Float _g8 = (_g7 * t);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(117)
				Float _g9 = (_g8 + .9375);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(117)
				Float _g10 = _g9;		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(117)
				return _g10;
			}
			else{
				HX_STACK_LINE(117)
				Float _g11 = hx::SubEq(t,0.95454545454545459);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(117)
				Float _g12 = (7.5625 * _g11);		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(117)
				Float _g13 = (_g12 * t);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(117)
				Float _g14 = (_g13 + .984375);		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(117)
				Float _g15 = _g14;		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(117)
				return _g15;
			}
		}
	}
	HX_STACK_LINE(117)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC1(BounceEaseOut_obj,calculate,return )

Float BounceEaseOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.BounceEaseOut","ease",0x9755ed4f,"motion.easing.BounceEaseOut.ease","motion/easing/Bounce.hx",124,0xc6b45fab)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(124)
	Float t1 = t;		HX_STACK_VAR(t1,"t1");
	HX_STACK_LINE(124)
	Float _g = hx::DivEq(t1,d);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(124)
	if (((_g < 0.36363636363636365))){
		HX_STACK_LINE(124)
		return ((c * (((7.5625 * t1) * t1))) + b);
	}
	else{
		HX_STACK_LINE(124)
		if (((t1 < 0.72727272727272729))){
			HX_STACK_LINE(124)
			Float _g1 = hx::SubEq(t1,0.54545454545454541);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(124)
			Float _g2 = (7.5625 * _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(124)
			Float _g3 = (_g2 * t1);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(124)
			Float _g4 = (_g3 + .75);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(124)
			Float _g5 = (c * _g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(124)
			return (_g5 + b);
		}
		else{
			HX_STACK_LINE(124)
			if (((t1 < 0.90909090909090906))){
				HX_STACK_LINE(124)
				Float _g6 = hx::SubEq(t1,0.81818181818181823);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(124)
				Float _g7 = (7.5625 * _g6);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(124)
				Float _g8 = (_g7 * t1);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(124)
				Float _g9 = (_g8 + .9375);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(124)
				Float _g10 = (c * _g9);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(124)
				return (_g10 + b);
			}
			else{
				HX_STACK_LINE(124)
				Float _g11 = hx::SubEq(t1,0.95454545454545459);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(124)
				Float _g12 = (7.5625 * _g11);		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(124)
				Float _g13 = (_g12 * t1);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(124)
				Float _g14 = (_g13 + .984375);		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(124)
				Float _g15 = (c * _g14);		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(124)
				return (_g15 + b);
			}
		}
	}
	HX_STACK_LINE(124)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC4(BounceEaseOut_obj,ease,return )

Float BounceEaseOut_obj::_ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.BounceEaseOut","_ease",0x62097b4c,"motion.easing.BounceEaseOut._ease","motion/easing/Bounce.hx",128,0xc6b45fab)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(129)
	Float _g = hx::DivEq(t,d);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(129)
	if (((_g < 0.36363636363636365))){
		HX_STACK_LINE(130)
		return ((c * (((7.5625 * t) * t))) + b);
	}
	else{
		HX_STACK_LINE(131)
		if (((t < 0.72727272727272729))){
			HX_STACK_LINE(132)
			Float _g1 = hx::SubEq(t,0.54545454545454541);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(132)
			Float _g2 = (7.5625 * _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(132)
			Float _g3 = (_g2 * t);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(132)
			Float _g4 = (_g3 + .75);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(132)
			Float _g5 = (c * _g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(132)
			return (_g5 + b);
		}
		else{
			HX_STACK_LINE(133)
			if (((t < 0.90909090909090906))){
				HX_STACK_LINE(134)
				Float _g6 = hx::SubEq(t,0.81818181818181823);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(134)
				Float _g7 = (7.5625 * _g6);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(134)
				Float _g8 = (_g7 * t);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(134)
				Float _g9 = (_g8 + .9375);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(134)
				Float _g10 = (c * _g9);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(134)
				return (_g10 + b);
			}
			else{
				HX_STACK_LINE(136)
				Float _g11 = hx::SubEq(t,0.95454545454545459);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(136)
				Float _g12 = (7.5625 * _g11);		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(136)
				Float _g13 = (_g12 * t);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(136)
				Float _g14 = (_g13 + .984375);		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(136)
				Float _g15 = (c * _g14);		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(136)
				return (_g15 + b);
			}
		}
	}
	HX_STACK_LINE(129)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(BounceEaseOut_obj,_ease,return )


BounceEaseOut_obj::BounceEaseOut_obj()
{
}

Dynamic BounceEaseOut_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return ease_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_ease") ) { return _ease_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"calculate") ) { return calculate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BounceEaseOut_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void BounceEaseOut_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_ease"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("calculate"),
	HX_CSTRING("ease"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BounceEaseOut_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BounceEaseOut_obj::__mClass,"__mClass");
};

#endif

Class BounceEaseOut_obj::__mClass;

void BounceEaseOut_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.BounceEaseOut"), hx::TCanCast< BounceEaseOut_obj> ,sStaticFields,sMemberFields,
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

void BounceEaseOut_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
