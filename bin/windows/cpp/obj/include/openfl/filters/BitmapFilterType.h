#ifndef INCLUDED_openfl_filters_BitmapFilterType
#define INCLUDED_openfl_filters_BitmapFilterType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,filters,BitmapFilterType)
namespace openfl{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES  BitmapFilterType_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BitmapFilterType_obj OBJ_;
		BitmapFilterType_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BitmapFilterType_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BitmapFilterType_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("BitmapFilterType"); }

		static ::String FULL;
		static ::String INNER;
		static ::String OUTER;
};

} // end namespace openfl
} // end namespace filters

#endif /* INCLUDED_openfl_filters_BitmapFilterType */ 
