#include <hxcpp.h>

#ifndef INCLUDED_Apple
#include <Apple.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d55c1e605f08d795_10_new,"Apple","new",0x3b80bb2c,"Apple.new","Apple.hx",10,0xf157cdc4)

void Apple_obj::__construct(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_d55c1e605f08d795_10_new)
HXLINE(  11)		super::__construct(x,y,null());
HXLINE(  12)		this->loadGraphic(HX_("assets/images/apple.png",8a,52,81,41),false,4,4,null(),null());
HXLINE(  13)		this->offset->set(1,1);
HXLINE(  14)		this->centerOffsets(null());
            	}

Dynamic Apple_obj::__CreateEmpty() { return new Apple_obj; }

void *Apple_obj::_hx_vtable = 0;

Dynamic Apple_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Apple_obj > _hx_result = new Apple_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Apple_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x53f8ca7a) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x53f8ca7a;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}


::hx::ObjectPtr< Apple_obj > Apple_obj::__new(Float x,Float y) {
	::hx::ObjectPtr< Apple_obj > __this = new Apple_obj();
	__this->__construct(x,y);
	return __this;
}

::hx::ObjectPtr< Apple_obj > Apple_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y) {
	Apple_obj *__this = (Apple_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Apple_obj), true, "Apple"));
	*(void **)__this = Apple_obj::_hx_vtable;
	__this->__construct(x,y);
	return __this;
}

Apple_obj::Apple_obj()
{
}

::hx::Val Apple_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"scorePoints") ) { return ::hx::Val( scorePoints ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Apple_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"scorePoints") ) { scorePoints=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Apple_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("scorePoints",15,43,94,c3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Apple_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Apple_obj,scorePoints),HX_("scorePoints",15,43,94,c3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Apple_obj_sStaticStorageInfo = 0;
#endif

static ::String Apple_obj_sMemberFields[] = {
	HX_("scorePoints",15,43,94,c3),
	::String(null()) };

::hx::Class Apple_obj::__mClass;

void Apple_obj::__register()
{
	Apple_obj _hx_dummy;
	Apple_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Apple",3a,f5,68,b7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Apple_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Apple_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Apple_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Apple_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

