#include <hxcpp.h>

#ifndef INCLUDED_ApplicationMain
#include <ApplicationMain.h>
#endif
#ifndef INCLUDED_DocumentClass
#include <DocumentClass.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_ManifestResources
#include <ManifestResources.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_system_FlxBasePreloader
#include <flixel/system/FlxBasePreloader.h>
#endif
#ifndef INCLUDED_flixel_system_FlxPreloader
#include <flixel/system/FlxPreloader.h>
#endif
#ifndef INCLUDED_flixel_system__FlxBasePreloader_DefaultPreloader
#include <flixel/system/_FlxBasePreloader/DefaultPreloader.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Int_Void
#include <lime/app/_Event_Int_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_Preloader
#include <lime/utils/Preloader.h>
#endif
#ifndef INCLUDED_openfl_display_Application
#include <openfl/display/Application.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Preloader
#include <openfl/display/Preloader.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Window
#include <openfl/display/Window.h>
#endif
#ifndef INCLUDED_openfl_events_ActivityEvent
#include <openfl/events/ActivityEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_FullScreenEvent
#include <openfl/events/FullScreenEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_b3b993f62d801895_256___init__,"::ApplicationMain_obj","__init__",0x253d991d,"::ApplicationMain_obj.__init__","ApplicationMain.hx",256,0x0780ded5)
HX_LOCAL_STACK_FRAME(_hx_pos_6fcf922b66429816_17_main,"ApplicationMain","main",0x93d2f73e,"ApplicationMain.main","ApplicationMain.hx",17,0x0780ded5)
HX_LOCAL_STACK_FRAME(_hx_pos_6fcf922b66429816_109_create,"ApplicationMain","create",0x2f7db141,"ApplicationMain.create","ApplicationMain.hx",109,0x0780ded5)
HX_LOCAL_STACK_FRAME(_hx_pos_6fcf922b66429816_113_create,"ApplicationMain","create",0x2f7db141,"ApplicationMain.create","ApplicationMain.hx",113,0x0780ded5)
HX_LOCAL_STACK_FRAME(_hx_pos_6fcf922b66429816_116_create,"ApplicationMain","create",0x2f7db141,"ApplicationMain.create","ApplicationMain.hx",116,0x0780ded5)
HX_LOCAL_STACK_FRAME(_hx_pos_6fcf922b66429816_30_create,"ApplicationMain","create",0x2f7db141,"ApplicationMain.create","ApplicationMain.hx",30,0x0780ded5)
HX_LOCAL_STACK_FRAME(_hx_pos_6fcf922b66429816_142_start,"ApplicationMain","start",0x45b5d9bd,"ApplicationMain.start","ApplicationMain.hx",142,0x0780ded5)

void ApplicationMain_obj::__construct() { }

Dynamic ApplicationMain_obj::__CreateEmpty() { return new ApplicationMain_obj; }

void *ApplicationMain_obj::_hx_vtable = 0;

Dynamic ApplicationMain_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ApplicationMain_obj > _hx_result = new ApplicationMain_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ApplicationMain_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1660e4c9;
}

void ApplicationMain_obj::__init__(){
            	HX_STACKFRAME(&_hx_pos_b3b993f62d801895_256___init__)
HXDLIN( 256)		 ::Dynamic init = ::hx::ClassOf< ::lime::app::Application >();
            	}


void ApplicationMain_obj::main(){
            	HX_STACKFRAME(&_hx_pos_6fcf922b66429816_17_main)
HXLINE(  18)		::lime::_hx_system::System_obj::_hx___registerEntryPoint(HX_("Snake",60,96,41,13),::ApplicationMain_obj::create_dyn());
HXLINE(  25)		::ApplicationMain_obj::create(null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ApplicationMain_obj,main,(void))

void ApplicationMain_obj::create( ::Dynamic config){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::openfl::display::Preloader,preloader) HXARGC(2)
            		void _hx_run(int loaded,int total){
            			HX_GC_STACKFRAME(&_hx_pos_6fcf922b66429816_109_create)
HXLINE( 109)			preloader->update(loaded,total);
            		}
            		HX_END_LOCAL_FUNC2((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::openfl::display::Preloader,preloader) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_6fcf922b66429816_113_create)
HXLINE( 113)			preloader->start();
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::openfl::display::Stage,stage) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_6fcf922b66429816_116_create)
HXLINE( 116)			::ApplicationMain_obj::start(stage);
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_6fcf922b66429816_30_create)
HXLINE(  31)		 ::openfl::display::Application app =  ::openfl::display::Application_obj::__alloc( HX_CTX );
HXLINE(  33)		::ManifestResources_obj::init(config);
HXLINE(  35)		app->meta->set(HX_("build",2e,db,ea,ba),HX_("683",b1,2a,29,00));
HXLINE(  36)		app->meta->set(HX_("company",3d,15,69,83),HX_("HaxeFlixel",42,8f,0c,ac));
HXLINE(  37)		app->meta->set(HX_("file",7c,ce,bb,43),HX_("Snake",60,96,41,13));
HXLINE(  38)		app->meta->set(HX_("name",4b,72,ff,48),HX_("Snake",60,96,41,13));
HXLINE(  39)		app->meta->set(HX_("packageName",f1,04,ad,04),HX_("com.example.myapp",84,30,57,c1));
HXLINE(  40)		app->meta->set(HX_("version",18,e7,f1,7c),HX_("0.9.0",7d,11,cf,c1));
HXLINE(  46)		 ::Dynamic attributes =  ::Dynamic(::hx::Anon_obj::Create(16)
            			->setFixed(0,HX_("resizable",6b,37,50,a9),true)
            			->setFixed(1,HX_("allowHighDPI",92,07,a2,b4),false)
            			->setFixed(2,HX_("width",06,b6,62,ca),160)
            			->setFixed(3,HX_("fullscreen",3b,3a,b4,f9),false)
            			->setFixed(4,HX_("maximized",18,0e,e1,fe),false)
            			->setFixed(5,HX_("x",78,00,00,00),null())
            			->setFixed(6,HX_("y",79,00,00,00),null())
            			->setFixed(7,HX_("height",e7,07,4c,02),120)
            			->setFixed(8,HX_("element",bc,ae,54,06),null())
            			->setFixed(9,HX_("title",98,15,3b,10),HX_("Snake",60,96,41,13))
            			->setFixed(10,HX_("alwaysOnTop",67,4d,53,16),false)
            			->setFixed(11,HX_("borderless",45,46,71,17),false)
            			->setFixed(12,HX_("minimized",86,fb,9d,28),false)
            			->setFixed(13,HX_("frameRate",ad,11,25,39),60)
            			->setFixed(14,HX_("hidden",6a,ff,95,4c),false)
            			->setFixed(15,HX_("parameters",aa,be,7e,51), ::Dynamic(::hx::Anon_obj::Create(0))));
HXLINE(  66)		attributes->__SetField(HX_("context",ef,95,77,19), ::Dynamic(::hx::Anon_obj::Create(8)
            			->setFixed(0,HX_("stencil",fc,bd,03,80),true)
            			->setFixed(1,HX_("depth",03,f1,29,d7),true)
            			->setFixed(2,HX_("colorDepth",a0,08,96,fb),32)
            			->setFixed(3,HX_("background",ee,93,1d,26),0)
            			->setFixed(4,HX_("vsync",d1,2d,a8,3d),false)
            			->setFixed(5,HX_("antialiasing",f4,16,b3,48),0)
            			->setFixed(6,HX_("type",ba,f2,08,4d),null())
            			->setFixed(7,HX_("hardware",a8,e2,d3,75),true)),::hx::paccDynamic);
HXLINE(  77)		if (::hx::IsNull( app->_hx___window )) {
HXLINE(  79)			if (::hx::IsNotNull( config )) {
HXLINE(  81)				int _g = 0;
HXDLIN(  81)				::Array< ::String > _g1 = ::Reflect_obj::fields(config);
HXDLIN(  81)				while((_g < _g1->length)){
HXLINE(  81)					::String field = _g1->__get(_g);
HXDLIN(  81)					_g = (_g + 1);
HXLINE(  83)					if (::Reflect_obj::hasField(attributes,field)) {
HXLINE(  85)						::Reflect_obj::setField(attributes,field,::Reflect_obj::field(config,field));
            					}
            					else {
HXLINE(  87)						if (::Reflect_obj::hasField( ::Dynamic(attributes->__Field(HX_("context",ef,95,77,19),::hx::paccDynamic)),field)) {
HXLINE(  89)							 ::Dynamic attributes1 = attributes->__Field(HX_("context",ef,95,77,19),::hx::paccDynamic);
HXDLIN(  89)							::Reflect_obj::setField(attributes1,field,::Reflect_obj::field(config,field));
            						}
            					}
            				}
            			}
HXLINE(  95)			::lime::_hx_system::System_obj::_hx___parseArguments(attributes);
            		}
HXLINE(  99)		Dynamic( app->createWindow(attributes)).StaticCast<  ::openfl::display::Window >();
HXLINE( 106)		 ::openfl::display::Preloader preloader =  ::openfl::display::Preloader_obj::__alloc( HX_CTX , ::flixel::_hx_system::FlxPreloader_obj::__alloc( HX_CTX ,null(),null()));
HXLINE( 107)		app->_hx___preloader->onProgress->add( ::Dynamic(new _hx_Closure_0(preloader)),null(),null());
HXLINE( 111)		app->_hx___preloader->onComplete->add( ::Dynamic(new _hx_Closure_1(preloader)),null(),null());
HXLINE( 116)		 ::openfl::display::Stage stage = ( ( ::openfl::display::Window)(app->_hx___window) )->stage;
HXDLIN( 116)		 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_2(stage));
HXDLIN( 116)		preloader->onComplete->add(_hx_tmp,null(),null());
HXLINE( 118)		{
HXLINE( 118)			int _g = 0;
HXDLIN( 118)			::Array< ::Dynamic> _g1 = ::ManifestResources_obj::preloadLibraries;
HXDLIN( 118)			while((_g < _g1->length)){
HXLINE( 118)				 ::lime::utils::AssetLibrary library = _g1->__get(_g).StaticCast<  ::lime::utils::AssetLibrary >();
HXDLIN( 118)				_g = (_g + 1);
HXLINE( 120)				app->_hx___preloader->addLibrary(library);
            			}
            		}
HXLINE( 123)		{
HXLINE( 123)			int _g2 = 0;
HXDLIN( 123)			::Array< ::String > _g3 = ::ManifestResources_obj::preloadLibraryNames;
HXDLIN( 123)			while((_g2 < _g3->length)){
HXLINE( 123)				::String name = _g3->__get(_g2);
HXDLIN( 123)				_g2 = (_g2 + 1);
HXLINE( 125)				app->_hx___preloader->addLibraryName(name);
            			}
            		}
HXLINE( 128)		app->_hx___preloader->load();
HXLINE( 130)		int result = app->exec();
HXLINE( 133)		::lime::_hx_system::System_obj::exit(result);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ApplicationMain_obj,create,(void))

void ApplicationMain_obj::start( ::openfl::display::Stage stage){
            	HX_GC_STACKFRAME(&_hx_pos_6fcf922b66429816_142_start)
HXDLIN( 142)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 187)			{
HXLINE( 188)				 ::openfl::display::DisplayObject current = stage->getChildAt(0);
HXLINE( 190)				bool _hx_tmp;
HXDLIN( 190)				if (::hx::IsNotNull( current )) {
HXLINE( 190)					_hx_tmp = !(::Std_obj::isOfType(current,::hx::ClassOf< ::openfl::display::DisplayObjectContainer >()));
            				}
            				else {
HXLINE( 190)					_hx_tmp = true;
            				}
HXDLIN( 190)				if (_hx_tmp) {
HXLINE( 192)					current =  ::openfl::display::MovieClip_obj::__alloc( HX_CTX );
HXLINE( 193)					stage->addChild(current);
            				}
HXLINE( 196)				 ::DocumentClass_obj::__alloc( HX_CTX ,( ( ::openfl::display::DisplayObjectContainer)(current) ));
            			}
HXLINE( 145)			stage->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("resize",f4,59,7b,08),false,false));
HXLINE( 147)			if (stage->window->_hx___fullscreen) {
HXLINE( 149)				stage->dispatchEvent( ::openfl::events::FullScreenEvent_obj::__alloc( HX_CTX ,HX_("fullScreen",5b,ae,48,2e),false,false,true,true));
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 152)				{
HXLINE( 152)					null();
            				}
HXDLIN( 152)				 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 155)				stage->_hx___handleError(e);
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ApplicationMain_obj,start,(void))


ApplicationMain_obj::ApplicationMain_obj()
{
}

bool ApplicationMain_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { outValue = start_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ApplicationMain_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ApplicationMain_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ApplicationMain_obj::__mClass;

static ::String ApplicationMain_obj_sStaticFields[] = {
	HX_("main",39,38,56,48),
	HX_("create",fc,66,0f,7c),
	HX_("start",62,74,0b,84),
	::String(null())
};

void ApplicationMain_obj::__register()
{
	ApplicationMain_obj _hx_dummy;
	ApplicationMain_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ApplicationMain",89,ff,39,4a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ApplicationMain_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ApplicationMain_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ApplicationMain_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ApplicationMain_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ApplicationMain_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ApplicationMain_obj::__boot()
{
}

