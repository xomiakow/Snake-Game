#include <hxcpp.h>

#ifndef INCLUDED_Theme
#include <Theme.h>
#endif

::Theme Theme_obj::BW;

::Theme Theme_obj::IBM;

::Theme Theme_obj::N3310;

::Theme Theme_obj::N6610;

::Theme Theme_obj::REVERSE;

bool Theme_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BW",d5,39,00,00)) { outValue = Theme_obj::BW; return true; }
	if (inName==HX_("IBM",54,9e,37,00)) { outValue = Theme_obj::IBM; return true; }
	if (inName==HX_("N3310",cd,fe,1d,0b)) { outValue = Theme_obj::N3310; return true; }
	if (inName==HX_("N6610",6d,e9,1b,0d)) { outValue = Theme_obj::N6610; return true; }
	if (inName==HX_("REVERSE",02,0d,d0,9a)) { outValue = Theme_obj::REVERSE; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Theme_obj)

int Theme_obj::__FindIndex(::String inName)
{
	if (inName==HX_("BW",d5,39,00,00)) return 0;
	if (inName==HX_("IBM",54,9e,37,00)) return 3;
	if (inName==HX_("N3310",cd,fe,1d,0b)) return 1;
	if (inName==HX_("N6610",6d,e9,1b,0d)) return 2;
	if (inName==HX_("REVERSE",02,0d,d0,9a)) return 4;
	return super::__FindIndex(inName);
}

int Theme_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("BW",d5,39,00,00)) return 0;
	if (inName==HX_("IBM",54,9e,37,00)) return 0;
	if (inName==HX_("N3310",cd,fe,1d,0b)) return 0;
	if (inName==HX_("N6610",6d,e9,1b,0d)) return 0;
	if (inName==HX_("REVERSE",02,0d,d0,9a)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Theme_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BW",d5,39,00,00)) return BW;
	if (inName==HX_("IBM",54,9e,37,00)) return IBM;
	if (inName==HX_("N3310",cd,fe,1d,0b)) return N3310;
	if (inName==HX_("N6610",6d,e9,1b,0d)) return N6610;
	if (inName==HX_("REVERSE",02,0d,d0,9a)) return REVERSE;
	return super::__Field(inName,inCallProp);
}

static ::String Theme_obj_sStaticFields[] = {
	HX_("BW",d5,39,00,00),
	HX_("N3310",cd,fe,1d,0b),
	HX_("N6610",6d,e9,1b,0d),
	HX_("IBM",54,9e,37,00),
	HX_("REVERSE",02,0d,d0,9a),
	::String(null())
};

::hx::Class Theme_obj::__mClass;

Dynamic __Create_Theme_obj() { return new Theme_obj; }

void Theme_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("Theme",e9,ed,b3,a2), ::hx::TCanCast< Theme_obj >,Theme_obj_sStaticFields,0,
	&__Create_Theme_obj, &__Create,
	&super::__SGetClass(), &CreateTheme_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Theme_obj::__GetStatic;
}

void Theme_obj::__boot()
{
BW = ::hx::CreateConstEnum< Theme_obj >(HX_("BW",d5,39,00,00),0);
IBM = ::hx::CreateConstEnum< Theme_obj >(HX_("IBM",54,9e,37,00),3);
N3310 = ::hx::CreateConstEnum< Theme_obj >(HX_("N3310",cd,fe,1d,0b),1);
N6610 = ::hx::CreateConstEnum< Theme_obj >(HX_("N6610",6d,e9,1b,0d),2);
REVERSE = ::hx::CreateConstEnum< Theme_obj >(HX_("REVERSE",02,0d,d0,9a),4);
}


