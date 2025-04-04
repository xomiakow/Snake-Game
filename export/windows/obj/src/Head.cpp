#include <hxcpp.h>

#ifndef INCLUDED_Head
#include <Head.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
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
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6d1d0acf1b2dee94_8_new,"Head","new",0xf9939632,"Head.new","Head.hx",8,0x302fb57e)
static const int _hx_array_data_2fe45540_1[] = {
	(int)1,
};
static const int _hx_array_data_2fe45540_2[] = {
	(int)0,
};
static const int _hx_array_data_2fe45540_3[] = {
	(int)2,(int)0,(int)2,
};
static const int _hx_array_data_2fe45540_4[] = {
	(int)3,(int)1,(int)3,
};

void Head_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_6d1d0acf1b2dee94_8_new)
HXLINE(   9)		super::__construct(x,y,null());
HXLINE(  10)		this->loadGraphic(HX_("assets/images/head.png",06,d1,0e,de),true,4,4,null(),null());
HXLINE(  11)		this->offset->set(1,1);
HXLINE(  12)		this->centerOffsets(null());
HXLINE(  13)		this->_facingFlip->set(1, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),false)
            			->setFixed(1,HX_("y",79,00,00,00),false)));
HXLINE(  14)		this->_facingFlip->set(16, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),true)
            			->setFixed(1,HX_("y",79,00,00,00),false)));
HXLINE(  15)		this->_facingFlip->set(256, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),true)
            			->setFixed(1,HX_("y",79,00,00,00),false)));
HXLINE(  16)		this->_facingFlip->set(4096, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),true)
            			->setFixed(1,HX_("y",79,00,00,00),true)));
HXLINE(  18)		this->animation->add(HX_("ud",4f,66,00,00),::Array_obj< int >::fromData( _hx_array_data_2fe45540_1,1),10,false,null(),null());
HXLINE(  19)		this->animation->add(HX_("lr",86,5e,00,00),::Array_obj< int >::fromData( _hx_array_data_2fe45540_2,1),10,false,null(),null());
HXLINE(  21)		this->animation->add(HX_("openLR",d0,4c,94,21),::Array_obj< int >::fromData( _hx_array_data_2fe45540_3,3),10,false,null(),null());
HXLINE(  22)		this->animation->add(HX_("openUD",99,54,94,21),::Array_obj< int >::fromData( _hx_array_data_2fe45540_4,3),10,false,null(),null());
            	}

Dynamic Head_obj::__CreateEmpty() { return new Head_obj; }

void *Head_obj::_hx_vtable = 0;

Dynamic Head_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Head_obj > _hx_result = new Head_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Head_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x04374b64) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04374b64;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}


::hx::ObjectPtr< Head_obj > Head_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
	::hx::ObjectPtr< Head_obj > __this = new Head_obj();
	__this->__construct(__o_x,__o_y);
	return __this;
}

::hx::ObjectPtr< Head_obj > Head_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
	Head_obj *__this = (Head_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Head_obj), true, "Head"));
	*(void **)__this = Head_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y);
	return __this;
}

Head_obj::Head_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Head_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Head_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Head_obj::__mClass;

void Head_obj::__register()
{
	Head_obj _hx_dummy;
	Head_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Head",40,55,e4,2f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Head_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Head_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Head_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

