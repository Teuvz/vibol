#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_BounceEaseInOut
#include <motion/easing/BounceEaseInOut.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void BounceEaseInOut_obj::__construct()
{
HX_STACK_FRAME("motion.easing.BounceEaseInOut","new",0x33d59e7a,"motion.easing.BounceEaseInOut.new","motion/easing/Bounce.hx",75,0xc6b45fab)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//BounceEaseInOut_obj::~BounceEaseInOut_obj() { }

Dynamic BounceEaseInOut_obj::__CreateEmpty() { return  new BounceEaseInOut_obj; }
hx::ObjectPtr< BounceEaseInOut_obj > BounceEaseInOut_obj::__new()
{  hx::ObjectPtr< BounceEaseInOut_obj > result = new BounceEaseInOut_obj();
	result->__construct();
	return result;}

Dynamic BounceEaseInOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BounceEaseInOut_obj > result = new BounceEaseInOut_obj();
	result->__construct();
	return result;}

hx::Object *BounceEaseInOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

Float BounceEaseInOut_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.BounceEaseInOut","calculate",0xce68f300,"motion.easing.BounceEaseInOut.calculate","motion/easing/Bounce.hx",83,0xc6b45fab)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(83)
	if (((k < .5))){
		HX_STACK_LINE(84)
		Float _g16;		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(84)
		{
			HX_STACK_LINE(84)
			Float t = ((int)1 - (k * (int)2));		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(84)
			Float _g = hx::DivEq(t,(int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(84)
			if (((_g < 0.36363636363636365))){
				HX_STACK_LINE(84)
				_g16 = ((7.5625 * t) * t);
			}
			else{
				HX_STACK_LINE(84)
				if (((t < 0.72727272727272729))){
					HX_STACK_LINE(84)
					Float _g1 = hx::SubEq(t,0.54545454545454541);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(84)
					Float _g2 = (7.5625 * _g1);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(84)
					Float _g3 = (_g2 * t);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(84)
					Float _g4 = (_g3 + .75);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(84)
					Float _g5 = _g4;		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(84)
					_g16 = _g5;
				}
				else{
					HX_STACK_LINE(84)
					if (((t < 0.90909090909090906))){
						HX_STACK_LINE(84)
						Float _g6 = hx::SubEq(t,0.81818181818181823);		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(84)
						Float _g7 = (7.5625 * _g6);		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(84)
						Float _g8 = (_g7 * t);		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(84)
						Float _g9 = (_g8 + .9375);		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(84)
						Float _g10 = _g9;		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(84)
						_g16 = _g10;
					}
					else{
						HX_STACK_LINE(84)
						Float _g11 = hx::SubEq(t,0.95454545454545459);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(84)
						Float _g12 = (7.5625 * _g11);		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(84)
						Float _g13 = (_g12 * t);		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(84)
						Float _g14 = (_g13 + .984375);		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(84)
						Float _g15 = _g14;		HX_STACK_VAR(_g15,"_g15");
						HX_STACK_LINE(84)
						_g16 = _g15;
					}
				}
			}
		}
		HX_STACK_LINE(84)
		Float _g17 = ((int)1 - _g16);		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(84)
		Float _g18 = _g17;		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(84)
		return (_g18 * .5);
	}
	else{
		HX_STACK_LINE(86)
		Float _g35;		HX_STACK_VAR(_g35,"_g35");
		HX_STACK_LINE(86)
		{
			HX_STACK_LINE(86)
			Float t = ((k * (int)2) - (int)1);		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(86)
			Float _g19 = hx::DivEq(t,(int)1);		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(86)
			if (((_g19 < 0.36363636363636365))){
				HX_STACK_LINE(86)
				_g35 = ((7.5625 * t) * t);
			}
			else{
				HX_STACK_LINE(86)
				if (((t < 0.72727272727272729))){
					HX_STACK_LINE(86)
					Float _g20 = hx::SubEq(t,0.54545454545454541);		HX_STACK_VAR(_g20,"_g20");
					HX_STACK_LINE(86)
					Float _g21 = (7.5625 * _g20);		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(86)
					Float _g22 = (_g21 * t);		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(86)
					Float _g23 = (_g22 + .75);		HX_STACK_VAR(_g23,"_g23");
					HX_STACK_LINE(86)
					Float _g24 = _g23;		HX_STACK_VAR(_g24,"_g24");
					HX_STACK_LINE(86)
					_g35 = _g24;
				}
				else{
					HX_STACK_LINE(86)
					if (((t < 0.90909090909090906))){
						HX_STACK_LINE(86)
						Float _g25 = hx::SubEq(t,0.81818181818181823);		HX_STACK_VAR(_g25,"_g25");
						HX_STACK_LINE(86)
						Float _g26 = (7.5625 * _g25);		HX_STACK_VAR(_g26,"_g26");
						HX_STACK_LINE(86)
						Float _g27 = (_g26 * t);		HX_STACK_VAR(_g27,"_g27");
						HX_STACK_LINE(86)
						Float _g28 = (_g27 + .9375);		HX_STACK_VAR(_g28,"_g28");
						HX_STACK_LINE(86)
						Float _g29 = _g28;		HX_STACK_VAR(_g29,"_g29");
						HX_STACK_LINE(86)
						_g35 = _g29;
					}
					else{
						HX_STACK_LINE(86)
						Float _g30 = hx::SubEq(t,0.95454545454545459);		HX_STACK_VAR(_g30,"_g30");
						HX_STACK_LINE(86)
						Float _g31 = (7.5625 * _g30);		HX_STACK_VAR(_g31,"_g31");
						HX_STACK_LINE(86)
						Float _g32 = (_g31 * t);		HX_STACK_VAR(_g32,"_g32");
						HX_STACK_LINE(86)
						Float _g33 = (_g32 + .984375);		HX_STACK_VAR(_g33,"_g33");
						HX_STACK_LINE(86)
						Float _g34 = _g33;		HX_STACK_VAR(_g34,"_g34");
						HX_STACK_LINE(86)
						_g35 = _g34;
					}
				}
			}
		}
		HX_STACK_LINE(86)
		Float _g36 = (_g35 * .5);		HX_STACK_VAR(_g36,"_g36");
		HX_STACK_LINE(86)
		return (_g36 + .5);
	}
	HX_STACK_LINE(83)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC1(BounceEaseInOut_obj,calculate,return )

Float BounceEaseInOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.BounceEaseInOut","ease",0x211f1494,"motion.easing.BounceEaseInOut.ease","motion/easing/Bounce.hx",93,0xc6b45fab)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(93)
	if (((t < (Float(d) / Float((int)2))))){
		HX_STACK_LINE(94)
		Float _g16;		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(94)
		{
			HX_STACK_LINE(94)
			Float t1 = (d - (t * (int)2));		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(94)
			Float _g = hx::DivEq(t1,d);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(94)
			if (((_g < 0.36363636363636365))){
				HX_STACK_LINE(94)
				_g16 = (c * (((7.5625 * t1) * t1)));
			}
			else{
				HX_STACK_LINE(94)
				if (((t1 < 0.72727272727272729))){
					HX_STACK_LINE(94)
					Float _g1 = hx::SubEq(t1,0.54545454545454541);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(94)
					Float _g2 = (7.5625 * _g1);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(94)
					Float _g3 = (_g2 * t1);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(94)
					Float _g4 = (_g3 + .75);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(94)
					Float _g5 = (c * _g4);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(94)
					_g16 = _g5;
				}
				else{
					HX_STACK_LINE(94)
					if (((t1 < 0.90909090909090906))){
						HX_STACK_LINE(94)
						Float _g6 = hx::SubEq(t1,0.81818181818181823);		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(94)
						Float _g7 = (7.5625 * _g6);		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(94)
						Float _g8 = (_g7 * t1);		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(94)
						Float _g9 = (_g8 + .9375);		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(94)
						Float _g10 = (c * _g9);		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(94)
						_g16 = _g10;
					}
					else{
						HX_STACK_LINE(94)
						Float _g11 = hx::SubEq(t1,0.95454545454545459);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(94)
						Float _g12 = (7.5625 * _g11);		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(94)
						Float _g13 = (_g12 * t1);		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(94)
						Float _g14 = (_g13 + .984375);		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(94)
						Float _g15 = (c * _g14);		HX_STACK_VAR(_g15,"_g15");
						HX_STACK_LINE(94)
						_g16 = _g15;
					}
				}
			}
		}
		HX_STACK_LINE(94)
		Float _g17 = (c - _g16);		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(94)
		Float _g18 = _g17;		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(94)
		Float _g19 = (_g18 * .5);		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(94)
		return (_g19 + b);
	}
	else{
		HX_STACK_LINE(96)
		Float _g36;		HX_STACK_VAR(_g36,"_g36");
		HX_STACK_LINE(96)
		{
			HX_STACK_LINE(96)
			Float t1 = ((t * (int)2) - d);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(96)
			Float _g20 = hx::DivEq(t1,d);		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(96)
			if (((_g20 < 0.36363636363636365))){
				HX_STACK_LINE(96)
				_g36 = (c * (((7.5625 * t1) * t1)));
			}
			else{
				HX_STACK_LINE(96)
				if (((t1 < 0.72727272727272729))){
					HX_STACK_LINE(96)
					Float _g21 = hx::SubEq(t1,0.54545454545454541);		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(96)
					Float _g22 = (7.5625 * _g21);		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(96)
					Float _g23 = (_g22 * t1);		HX_STACK_VAR(_g23,"_g23");
					HX_STACK_LINE(96)
					Float _g24 = (_g23 + .75);		HX_STACK_VAR(_g24,"_g24");
					HX_STACK_LINE(96)
					Float _g25 = (c * _g24);		HX_STACK_VAR(_g25,"_g25");
					HX_STACK_LINE(96)
					_g36 = _g25;
				}
				else{
					HX_STACK_LINE(96)
					if (((t1 < 0.90909090909090906))){
						HX_STACK_LINE(96)
						Float _g26 = hx::SubEq(t1,0.81818181818181823);		HX_STACK_VAR(_g26,"_g26");
						HX_STACK_LINE(96)
						Float _g27 = (7.5625 * _g26);		HX_STACK_VAR(_g27,"_g27");
						HX_STACK_LINE(96)
						Float _g28 = (_g27 * t1);		HX_STACK_VAR(_g28,"_g28");
						HX_STACK_LINE(96)
						Float _g29 = (_g28 + .9375);		HX_STACK_VAR(_g29,"_g29");
						HX_STACK_LINE(96)
						Float _g30 = (c * _g29);		HX_STACK_VAR(_g30,"_g30");
						HX_STACK_LINE(96)
						_g36 = _g30;
					}
					else{
						HX_STACK_LINE(96)
						Float _g31 = hx::SubEq(t1,0.95454545454545459);		HX_STACK_VAR(_g31,"_g31");
						HX_STACK_LINE(96)
						Float _g32 = (7.5625 * _g31);		HX_STACK_VAR(_g32,"_g32");
						HX_STACK_LINE(96)
						Float _g33 = (_g32 * t1);		HX_STACK_VAR(_g33,"_g33");
						HX_STACK_LINE(96)
						Float _g34 = (_g33 + .984375);		HX_STACK_VAR(_g34,"_g34");
						HX_STACK_LINE(96)
						Float _g35 = (c * _g34);		HX_STACK_VAR(_g35,"_g35");
						HX_STACK_LINE(96)
						_g36 = _g35;
					}
				}
			}
		}
		HX_STACK_LINE(96)
		Float _g37 = (_g36 * .5);		HX_STACK_VAR(_g37,"_g37");
		HX_STACK_LINE(96)
		Float _g38 = (_g37 + (c * .5));		HX_STACK_VAR(_g38,"_g38");
		HX_STACK_LINE(96)
		return (_g38 + b);
	}
	HX_STACK_LINE(93)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC4(BounceEaseInOut_obj,ease,return )


BounceEaseInOut_obj::BounceEaseInOut_obj()
{
}

Dynamic BounceEaseInOut_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return ease_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"calculate") ) { return calculate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BounceEaseInOut_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void BounceEaseInOut_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("calculate"),
	HX_CSTRING("ease"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BounceEaseInOut_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BounceEaseInOut_obj::__mClass,"__mClass");
};

#endif

Class BounceEaseInOut_obj::__mClass;

void BounceEaseInOut_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.BounceEaseInOut"), hx::TCanCast< BounceEaseInOut_obj> ,sStaticFields,sMemberFields,
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

void BounceEaseInOut_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
