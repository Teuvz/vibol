#include <hxcpp.h>

#ifndef INCLUDED_openfl_filters_BitmapFilterType
#include <openfl/filters/BitmapFilterType.h>
#endif
namespace openfl{
namespace filters{

Void BitmapFilterType_obj::__construct()
{
	return null();
}

//BitmapFilterType_obj::~BitmapFilterType_obj() { }

Dynamic BitmapFilterType_obj::__CreateEmpty() { return  new BitmapFilterType_obj; }
hx::ObjectPtr< BitmapFilterType_obj > BitmapFilterType_obj::__new()
{  hx::ObjectPtr< BitmapFilterType_obj > result = new BitmapFilterType_obj();
	result->__construct();
	return result;}

Dynamic BitmapFilterType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapFilterType_obj > result = new BitmapFilterType_obj();
	result->__construct();
	return result;}

::String BitmapFilterType_obj::FULL;

::String BitmapFilterType_obj::INNER;

::String BitmapFilterType_obj::OUTER;


BitmapFilterType_obj::BitmapFilterType_obj()
{
}

Dynamic BitmapFilterType_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"FULL") ) { return FULL; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"INNER") ) { return INNER; }
		if (HX_FIELD_EQ(inName,"OUTER") ) { return OUTER; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitmapFilterType_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"FULL") ) { FULL=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"INNER") ) { INNER=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OUTER") ) { OUTER=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapFilterType_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("FULL"),
	HX_CSTRING("INNER"),
	HX_CSTRING("OUTER"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapFilterType_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BitmapFilterType_obj::FULL,"FULL");
	HX_MARK_MEMBER_NAME(BitmapFilterType_obj::INNER,"INNER");
	HX_MARK_MEMBER_NAME(BitmapFilterType_obj::OUTER,"OUTER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapFilterType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BitmapFilterType_obj::FULL,"FULL");
	HX_VISIT_MEMBER_NAME(BitmapFilterType_obj::INNER,"INNER");
	HX_VISIT_MEMBER_NAME(BitmapFilterType_obj::OUTER,"OUTER");
};

#endif

Class BitmapFilterType_obj::__mClass;

void BitmapFilterType_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.filters.BitmapFilterType"), hx::TCanCast< BitmapFilterType_obj> ,sStaticFields,sMemberFields,
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

void BitmapFilterType_obj::__boot()
{
	FULL= HX_CSTRING("full");
	INNER= HX_CSTRING("inner");
	OUTER= HX_CSTRING("outer");
}

} // end namespace openfl
} // end namespace filters
