#ifndef INCLUDED_com_kircode_debug_FPS_Mem
#define INCLUDED_com_kircode_debug_FPS_Mem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/text/TextField.h>
HX_DECLARE_CLASS3(com,kircode,debug,FPS_Mem)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,text,TextField)
namespace com{
namespace kircode{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  FPS_Mem_obj : public ::openfl::_v2::text::TextField_obj{
	public:
		typedef ::openfl::_v2::text::TextField_obj super;
		typedef FPS_Mem_obj OBJ_;
		FPS_Mem_obj();
		Void __construct(hx::Null< Float >  __o_inX,hx::Null< Float >  __o_inY,hx::Null< int >  __o_inCol);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FPS_Mem_obj > __new(hx::Null< Float >  __o_inX,hx::Null< Float >  __o_inY,hx::Null< int >  __o_inCol);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FPS_Mem_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FPS_Mem"); }

		Array< Float > times;
		Float memPeak;
		virtual Void onEnter( Dynamic _);
		Dynamic onEnter_dyn();

};

} // end namespace com
} // end namespace kircode
} // end namespace debug

#endif /* INCLUDED_com_kircode_debug_FPS_Mem */ 
