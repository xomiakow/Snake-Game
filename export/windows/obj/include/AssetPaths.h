#ifndef INCLUDED_AssetPaths
#define INCLUDED_AssetPaths

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(AssetPaths)



class HXCPP_CLASS_ATTRIBUTES AssetPaths_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AssetPaths_obj OBJ_;
		AssetPaths_obj();

	public:
		enum { _hx_ClassId = 0x78a931fe };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="AssetPaths")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"AssetPaths"); }

		inline static ::hx::ObjectPtr< AssetPaths_obj > __new() {
			::hx::ObjectPtr< AssetPaths_obj > __this = new AssetPaths_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< AssetPaths_obj > __alloc(::hx::Ctx *_hx_ctx) {
			AssetPaths_obj *__this = (AssetPaths_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AssetPaths_obj), false, "AssetPaths"));
			*(void **)__this = AssetPaths_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AssetPaths_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AssetPaths",3e,0f,e6,60); }

		static void __boot();
		static ::String data_goes_here__txt;
		static ::String apple__png;
		static ::String backButton__png;
		static ::String borderButton__png;
		static ::String colorButton__png;
		static ::String cursorOffButton__png;
		static ::String cursorOnButton__png;
		static ::String exitButton__png;
		static ::String fullscreenButton__png;
		static ::String head__png;
		static ::String icon__ico;
		static ::String icon__svg;
		static ::String images_go_here__txt;
		static ::String playButton__png;
		static ::String segment__png;
		static ::String settingsButton__png;
		static ::String title__png;
		static ::String unborderButton__png;
		static ::String windowedButton__png;
		static ::String music_goes_here__txt;
		static ::String aplle__wav;
		static ::String button__wav;
		static ::String button2__wav;
		static ::String button3__wav;
		static ::String end__wav;
		static ::String sounds_go_here__txt;
};


#endif /* INCLUDED_AssetPaths */ 
