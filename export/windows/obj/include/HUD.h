#ifndef INCLUDED_HUD
#define INCLUDED_HUD

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
HX_DECLARE_CLASS0(HUD)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES HUD_obj : public  ::flixel::group::FlxTypedGroup_obj
{
	public:
		typedef  ::flixel::group::FlxTypedGroup_obj super;
		typedef HUD_obj OBJ_;
		HUD_obj();

	public:
		enum { _hx_ClassId = 0x7edb312b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="HUD")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"HUD"); }
		static ::hx::ObjectPtr< HUD_obj > __new();
		static ::hx::ObjectPtr< HUD_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HUD_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HUD",97,ec,36,00); }

		 ::flixel::FlxSprite background;
		 ::flixel::text::FlxText scoreDisplay;
		 ::flixel::text::FlxText highscoreDisplay;
		 ::flixel::text::FlxText textDisplay;
		 ::flixel::text::FlxText gameOverText;
		void updateHUD(int score);
		::Dynamic updateHUD_dyn();

		void updateHighscore(int highscore);
		::Dynamic updateHighscore_dyn();

		void endGame();
		::Dynamic endGame_dyn();

};


#endif /* INCLUDED_HUD */ 
