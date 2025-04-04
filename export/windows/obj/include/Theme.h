#ifndef INCLUDED_Theme
#define INCLUDED_Theme

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Theme)


class Theme_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Theme_obj OBJ_;

	public:
		Theme_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("Theme",e9,ed,b3,a2); }
		::String __ToString() const { return HX_("Theme.",25,3e,bc,ba) + _hx_tag; }

		static ::Theme BW;
		static inline ::Theme BW_dyn() { return BW; }
		static ::Theme IBM;
		static inline ::Theme IBM_dyn() { return IBM; }
		static ::Theme N3310;
		static inline ::Theme N3310_dyn() { return N3310; }
		static ::Theme N6610;
		static inline ::Theme N6610_dyn() { return N6610; }
		static ::Theme REVERSE;
		static inline ::Theme REVERSE_dyn() { return REVERSE; }
};


#endif /* INCLUDED_Theme */ 
