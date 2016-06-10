#ifndef INCLUDED___ASSET__font_mtf_epic_ttf
#define INCLUDED___ASSET__font_mtf_epic_ttf

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/text/Font.h>
HX_DECLARE_CLASS0(__ASSET__font_mtf_epic_ttf)
HX_DECLARE_CLASS3(openfl,_v2,text,Font)


class HXCPP_CLASS_ATTRIBUTES  __ASSET__font_mtf_epic_ttf_obj : public ::openfl::_v2::text::Font_obj{
	public:
		typedef ::openfl::_v2::text::Font_obj super;
		typedef __ASSET__font_mtf_epic_ttf_obj OBJ_;
		__ASSET__font_mtf_epic_ttf_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< __ASSET__font_mtf_epic_ttf_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~__ASSET__font_mtf_epic_ttf_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("__ASSET__font_mtf_epic_ttf"); }

};


#endif /* INCLUDED___ASSET__font_mtf_epic_ttf */ 
