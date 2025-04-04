#ifndef INCLUDED_StartScreen
#define INCLUDED_StartScreen

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(StartScreen)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS5(flixel,_hx_system,debug,interaction,tools,GraphicCursorCross)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton_flixel_text_FlxText)
HX_DECLARE_CLASS2(flixel,util,FlxSave)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)



class HXCPP_CLASS_ATTRIBUTES StartScreen_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef StartScreen_obj OBJ_;
		StartScreen_obj();

	public:
		enum { _hx_ClassId = 0x5671768e };

		void __construct( ::Dynamic MaxSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="StartScreen")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"StartScreen"); }
		static ::hx::ObjectPtr< StartScreen_obj > __new( ::Dynamic MaxSize);
		static ::hx::ObjectPtr< StartScreen_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StartScreen_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StartScreen",4e,31,76,a3); }

		 ::flixel::text::FlxText titleText;
		 ::flixel::FlxSprite title;
		 ::flixel::ui::FlxButton playButton;
		 ::flixel::ui::FlxButton settingsButton;
		 ::flixel::ui::FlxButton exitButton;
		 ::flixel::group::FlxTypedGroup buttons;
		int backColor;
		int n3310;
		int n6610;
		int reverse;
		int bw;
		int ibm;
		 ::flixel::_hx_system::debug::interaction::tools::GraphicCursorCross cursor;
		 ::flixel::util::FlxSave save;
		void create();

		void clickPlay();
		::Dynamic clickPlay_dyn();

		void clickSettings();
		::Dynamic clickSettings_dyn();

		void buttonColor(int color);
		::Dynamic buttonColor_dyn();

		void setTheme();
		::Dynamic setTheme_dyn();

		void clickExit();
		::Dynamic clickExit_dyn();

};


#endif /* INCLUDED_StartScreen */ 
