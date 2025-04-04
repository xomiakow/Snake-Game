#ifndef INCLUDED_SelectionScreen
#define INCLUDED_SelectionScreen

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(SelectionScreen)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton_flixel_text_FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES SelectionScreen_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef SelectionScreen_obj OBJ_;
		SelectionScreen_obj();

	public:
		enum { _hx_ClassId = 0x18b22514 };

		void __construct( ::Dynamic MaxSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="SelectionScreen")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"SelectionScreen"); }
		static ::hx::ObjectPtr< SelectionScreen_obj > __new( ::Dynamic MaxSize);
		static ::hx::ObjectPtr< SelectionScreen_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SelectionScreen_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SelectionScreen",b8,f0,81,1d); }

		static bool bordered;
		 ::flixel::text::FlxText titleSS;
		 ::flixel::ui::FlxButton borderButton;
		 ::flixel::ui::FlxButton unborderButton;
		 ::flixel::ui::FlxButton backButton;
		 ::flixel::group::FlxTypedGroup buttons;
		int backColorSS;
		int n3310SS;
		int n6610SS;
		int reverseSS;
		int bwSS;
		int ibmSS;
		void create();

		void back();
		::Dynamic back_dyn();

		void borderedMode();
		::Dynamic borderedMode_dyn();

		void unborderedMode();
		::Dynamic unborderedMode_dyn();

		void buttonColor(int color);
		::Dynamic buttonColor_dyn();

		void setTheme();
		::Dynamic setTheme_dyn();

};


#endif /* INCLUDED_SelectionScreen */ 
