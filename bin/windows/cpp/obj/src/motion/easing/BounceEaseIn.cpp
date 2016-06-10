#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_BounceEaseIn
#include <motion/easing/BounceEaseIn.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void BounceEaseIn_obj::__construct()
{
HX_STACK_FRAME("motion.easing.BounceEaseIn","new",0x66965698,"motion.easing.BounceEaseIn.new","motion/easing/Bounce.hx",50,0xc6b45fab)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//BounceEaseIn_obj::~BounceEaseIn_obj() { }

Dynamic BounceEaseIn_obj::__CreateEmpty() { return  new BounceEaseIn_obj; }
hx::ObjectPtr< BounceEaseIn_obj > BounceEaseIn_obj::__new()
{  hx::ObjectPtr< BounceEaseIn_obj > result = new BounceEaseIn_obj();
	result->__construct();
	return result;}

Dynamic BounceEaseIn_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BounceEaseIn_obj > result = new BounceEaseIn_obj();
	result->__construct();
	return result;}

hx::Object *BounceEaseIn_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

Float BounceEaseIn_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.BounceEaseIn","calculate",0xde07959e,"motion.easing.BounceEaseIn.calculate","motion/easing/Bounce.hx",56,0xc6b45fab)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(57)
	Float _g16;		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(57)
	{
		HX_STACK_LINE(57)
		Float t = ((int)1 - k);		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(57)
		Float _g = hx::DivEq(t,(int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(57)
		if (((_g < 0.36363636363636365))){
			HX_STACK_LINE(57)
			_g16 = ((7.5625 * t) * t);
		}
		else{
			HX_STACK_LINE(57)
			if (((t < 0.72727272727272729))){
				HX_STACK_LINE(57)
				Float _g1 = hx::SubEq(t,0.54545454545454541);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(57)
				Float _g2 = (7.5625 * _g1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(57)
				Float _g3 = (_g2 * t);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(57)
				Float _g4 = (_g3 + .75);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(57)
				Float _g5 = _g4;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(57)
				_g16 = _g5;
			}
			else{
				HX_STACK_LINE(57)
				if (((t < 0.90909090909090906))){
					HX_STACK_LINE(57)
					Float _g6 = hx::SubEq(t,0.81818181818181823);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(57)
					Float _g7 = (7.5625 * _g6);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(57)
					Float _g8 = (_g7 * t);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(57)
					Float _g9 = (_g8 + .9375);		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(57)
					Float _g10 = _g9;		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(57)
					_g16 = _g10;
				}
				else{
					HX_STACK_LINE(57)
					Float _g11 = hx::SubEq(t,0.95454545454545459);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(57)
					Float _g12 = (7.5625 * _g11);		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(57)
					Float _g13 = (_g12 * t);		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(57)
					Float _g14 = (_g13 + .984375);		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(57)
					Float _g15 = _g14;		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(57)
					_g16 = _g15;
				}
			}
		}
	}
	HX_STACK_LINE(57)
	Float _g17 = ((int)1 - _g16);		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(57)
	return _g17;
}


HX_DEFINE_DYNAMIC_FUNC1(BounceEaseIn_obj,calculate,return )

Float BounceEaseIn_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.BounceEaseIn","ease",0x56ff76b6,"motion.easing.BounceEaseIn.ease","motion/easing/Bounce.hx",61,0xc6b45fab)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(62)
	Float _g16;		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(62)
	{
		HX_STACK_LINE(62)
		Float t1 = (d - t);		HX_STACK_VAR(t1,"t1");
		HX_STACK_LINE(62)
		Float _g = hx::DivEq(t1,d);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(62)
		if (((_g < 0.36363636363636365))){
			HX_STACK_LINE(62)
			_g16 = (c * (((7.5625 * t1) * t1)));
		}
		else{
			HX_STACK_LINE(62)
			if (((t1 < 0.72727272727272729))){
				HX_STACK_LINE(62)
				Float _g1 = hx::SubEq(t1,0.54545454545454541);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(62)
				Float _g2 = (7.5625 * _g1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(62)
				Float _g3 = (_g2 * t1);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(62)
				Float _g4 = (_g3 + .75);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(62)
				Float _g5 = (c * _g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(62)
				_g16 = _g5;
			}
			else{
				HX_STACK_LINE(62)
				if (((t1 < 0.90909090909090906))){
					HX_STACK_LINE(62)
					Float _g6 = hx::SubEq(t1,0.81818181818181823);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(62)
					Float _g7 = (7.5625 * _g6);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(62)
					Float _g8 = (_g7 * t1);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(62)
					Float _g9 = (_g8 + .9375);		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(62)
					Float _g10 = (c * _g9);		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(62)
					_g16 = _g10;
				}
				else{
					HX_STACK_LINE(62)
					Float _g11 = hx::SubEq(t1,0.95454545454545459);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(62)
					Float _g12 = (7.5625 * _g11);		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(62)
					Float _g13 = (_g12 * t1);		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(62)
					Float _g14 = (_g13 + .984375);		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(62)
					Float _g15 = (c * _g14);		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(62)
					_g16 = _g15;
				}
			}
		}
	}
	HX_STACK_LINE(62)
	Float _g17 = (c - _g16);		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(62)
	return (_g17 + b);
}


HX_DEFINE_DYNAMIC_FUNC4(BounceEaseIn_obj,ease,return )

Float BounceEaseIn_obj::_ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.BounceEaseIn","_ease",0x56b82c05,"motion.easing.BounceEaseIn._ease","motion/easing/Bounce.hx",65,0xc6b45fab)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(66)
	Float _g16;		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(66)
	{
		HX_STACK_LINE(66)
		Float t1 = (d - t);		HX_STACK_VAR(t1,"t1");
		HX_STACK_LINE(66)
		Float _g = hx::DivEq(t1,d);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(66)
		if (((_g < 0.36363636363636365))){
			HX_STACK_LINE(66)
			_g16 = (c * (((7.5625 * t1) * t1)));
		}
		else{
			HX_STACK_LINE(66)
			if (((t1 < 0.72727272727272729))){
				HX_STACK_LINE(66)
				Float _g1 = hx::SubEq(t1,0.54545454545454541);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(66)
				Float _g2 = (7.5625 * _g1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(66)
				Float _g3 = (_g2 * t1);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(66)
				Float _g4 = (_g3 + .75);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(66)
				Float _g5 = (c * _g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(66)
				_g16 = _g5;
			}
			else{
				HX_STACK_LINE(66)
				if (((t1 < 0.90909090909090906))){
					HX_STACK_LINE(66)
					Float _g6 = hx::SubEq(t1,0.81818181818181823);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(66)
					Float _g7 = (7.5625 * _g6);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(66)
					Float _g8 = (_g7 * t1);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(66)
					Float _g9 = (_g8 + .9375);		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(66)
					Float _g10 = (c * _g9);		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(66)
					_g16 = _g10;
				}
				else{
					HX_STACK_LINE(66)
					Float _g11 = hx::SubEq(t1,0.95454545454545459);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(66)
					Float _g12 = (7.5625 * _g11);		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(66)
					Float _g13 = (_g12 * t1);		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(66)
					Float _g14 = (_g13 + .984375);		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(66)
					Float _g15 = (c * _g14);		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(66)
					_g16 = _g15;
				}
			}
		}
	}
	HX_STACK_LINE(66)
	Float _g17 = (c - _g16);		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(66)
	return (_g17 + b);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(BounceEaseIn_obj,_ease,return )


BounceEaseIn_obj::BounceEaseIn_obj()
{
}

Dynamic BounceEaseIn_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic BounceEaseIn_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void BounceEaseIn_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(BounceEaseIn_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BounceEaseIn_obj::__mClass,"__mClass");
};

#endif

Class BounceEaseIn_obj::__mClass;

void BounceEaseIn_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.BounceEaseIn"), hx::TCanCast< BounceEaseIn_obj> ,sStaticFields,sMemberFields,
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

void BounceEaseIn_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
