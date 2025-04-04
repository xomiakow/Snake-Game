#ifndef INCLUDED_SettingsScreen
#define INCLUDED_SettingsScreen

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(SettingsScreen)
HX_DECLARE_CLASS0(Theme)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton_flixel_text_FlxText)
HX_DECLARE_CLASS2(flixel,util,FlxSave)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES SettingsScreen_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef SettingsScreen_obj OBJ_;
		SettingsScreen_obj();

	public:
		enum { _hx_ClassId = 0x643d8f8f };

		void __construct( ::Dynamic MaxSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="SettingsScreen")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"SettingsScreen"); }
		static ::hx::ObjectPtr< SettingsScreen_obj > __new( ::Dynamic MaxSize);
		static ::hx::ObjectPtr< SettingsScreen_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SettingsScreen_obj();

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
		::String __ToString() const { return HX_("SettingsScreen",cf,0c,52,82); }

		static void __boot();
		static  ::Theme theme;
		 ::flixel::text::FlxText title;
		 ::flixel::group::FlxTypedGroup buttons;
		 ::flixel::ui::FlxButton fullscreenButton;
		 ::flixel::ui::FlxButton colorButton;
		 ::flixel::ui::FlxButton backButton;
		int backColor;
		int n3310;
		int n6610;
		int reverse;
		int bw;
		int ibm;
		 ::flixel::util::FlxSave save;
		void create();

		void setFullscreen();
		::Dynamic setFullscreen_dyn();

		void buttonSprite(::String name);
		::Dynamic buttonSprite_dyn();

		void buttonColor(int color);
		::Dynamic buttonColor_dyn();

		void back();
		::Dynamic back_dyn();

		void changeColor();
		::Dynamic changeColor_dyn();

		void setTheme();
		::Dynamic setTheme_dyn();

};


#endif /* INCLUDED_SettingsScreen */ 
