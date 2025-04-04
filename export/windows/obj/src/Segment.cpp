#include <hxcpp.h>

#ifndef INCLUDED_Segment
#include <Segment.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_505742848153f1b8_8_new,"Segment","new",0x2b8a5e05,"Segment.new","Segment.hx",8,0x4e42090b)
static const int _hx_array_data_741ff793_1[] = {
	(int)2,
};

void Segment_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_505742848153f1b8_8_new)
HXLINE(   9)		super::__construct(x,y,null());
HXLINE(  11)		this->loadGraphic(HX_("assets/images/segment.png",a3,a4,b3,f7),true,4,4,null(),null());
HXLINE(  13)		this->_facingFlip->set(1, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),false)
            			->setFixed(1,HX_("y",79,00,00,00),false)));
HXLINE(  14)		this->_facingFlip->set(16, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),true)
            			->setFixed(1,HX_("y",79,00,00,00),false)));
HXLINE(  15)		this->_facingFlip->set(256, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),false)
            			->setFixed(1,HX_("y",79,00,00,00),false)));
HXLINE(  16)		this->_facingFlip->set(4096, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),true)
            			->setFixed(1,HX_("y",79,00,00,00),true)));
HXLINE(  18)		this->animation->add(HX_("dead",a4,4e,66,42),::Array_obj< int >::fromData( _hx_array_data_741ff793_1,1),1,false,null(),null());
            	}

Dynamic Segment_obj::__CreateEmpty() { return new Segment_obj; }

void *Segment_obj::_hx_vtable = 0;

Dynamic Segment_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Segment_obj > _hx_result = new Segment_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Segment_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x343f9cd3) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x343f9cd3;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}


::hx::ObjectPtr< Segment_obj > Segment_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
	::hx::ObjectPtr< Segment_obj > __this = new Segment_obj();
	__this->__construct(__o_x,__o_y);
	return __this;
}

::hx::ObjectPtr< Segment_obj > Segment_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
	Segment_obj *__this = (Segment_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Segment_obj), true, "Segment"));
	*(void **)__this = Segment_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y);
	return __this;
}

Segment_obj::Segment_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Segment_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Segment_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Segment_obj::__mClass;

void Segment_obj::__register()
{
	Segment_obj _hx_dummy;
	Segment_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Segment",93,f7,1f,74);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Segment_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Segment_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Segment_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

