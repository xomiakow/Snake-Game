#include <hxcpp.h>

#ifndef INCLUDED_HUD
#include <HUD.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f77237052cf31132_35_new,"HUD","new",0xf45a2509,"HUD.new","HUD.hx",35,0xe7d70e87)
HX_DEFINE_STACK_FRAME(_hx_pos_f77237052cf31132_20_new,"HUD","new",0xf45a2509,"HUD.new","HUD.hx",20,0xe7d70e87)
HX_LOCAL_STACK_FRAME(_hx_pos_f77237052cf31132_40_updateHUD,"HUD","updateHUD",0xbe04cb97,"HUD.updateHUD","HUD.hx",40,0xe7d70e87)
HX_LOCAL_STACK_FRAME(_hx_pos_f77237052cf31132_52_updateHighscore,"HUD","updateHighscore",0x5aaf3790,"HUD.updateHighscore","HUD.hx",52,0xe7d70e87)
HX_LOCAL_STACK_FRAME(_hx_pos_f77237052cf31132_63_endGame,"HUD","endGame",0x8cfc0a96,"HUD.endGame","HUD.hx",63,0xe7d70e87)

void HUD_obj::__construct(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite sprite){
            			HX_GC_STACKFRAME(&_hx_pos_f77237052cf31132_35_new)
HXLINE(  35)			sprite->scrollFactor->set(0,0);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_f77237052cf31132_20_new)
HXLINE(  21)		super::__construct(null());
HXLINE(  22)		this->background =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  23)		this->scoreDisplay =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,1,0,HX_("0000",00,d4,de,1f),8,null());
HXLINE(  24)		int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  24)		this->highscoreDisplay =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(( (Float)(_hx_tmp) ) - this->scoreDisplay->get_width()),1,0,HX_("0000",00,d4,de,1f),8,null());
HXLINE(  25)		Float _hx_tmp1 = this->highscoreDisplay->x;
HXDLIN(  25)		this->textDisplay =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,((_hx_tmp1 - (this->highscoreDisplay->get_width() * ( (Float)(2) ))) + 2),1,0,HX_("Highscore:",aa,65,65,c7),8,null());
HXLINE(  26)		this->gameOverText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,((( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) )) - ( (Float)(45) )),((( (Float)(::flixel::FlxG_obj::height) ) / ( (Float)(2) )) - ( (Float)(16) )),0,HX_("     Game Over\nPress R to restart\n Press ESC to exit",68,fd,aa,bd),8,null());
HXLINE(  27)		this->gameOverText->set_visible(false);
HXLINE(  28)		this->gameOverText->set_alpha(( (Float)(0) ));
HXLINE(  30)		this->add(this->background);
HXLINE(  31)		this->add(this->highscoreDisplay);
HXLINE(  32)		this->add(this->textDisplay);
HXLINE(  33)		this->add(this->scoreDisplay);
HXLINE(  34)		this->add(this->gameOverText);
HXLINE(  35)		this->forEach( ::Dynamic(new _hx_Closure_0()),null());
            	}

Dynamic HUD_obj::__CreateEmpty() { return new HUD_obj; }

void *HUD_obj::_hx_vtable = 0;

Dynamic HUD_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HUD_obj > _hx_result = new HUD_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HUD_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7ccf8994) {
		if (inClassId<=(int)0x62817b24) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x62817b24;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	} else {
		return inClassId==(int)0x7edb312b;
	}
}

void HUD_obj::updateHUD(int score){
            	HX_STACKFRAME(&_hx_pos_f77237052cf31132_40_updateHUD)
HXDLIN(  40)		if ((score <= 9)) {
HXLINE(  41)			 ::flixel::text::FlxText _hx_tmp = this->scoreDisplay;
HXDLIN(  41)			_hx_tmp->set_text((HX_("000",30,96,24,00) + ::Std_obj::string(score)));
            		}
            		else {
HXLINE(  42)			if ((score <= 99)) {
HXLINE(  43)				 ::flixel::text::FlxText _hx_tmp = this->scoreDisplay;
HXDLIN(  43)				_hx_tmp->set_text((HX_("00",00,2a,00,00) + ::Std_obj::string(score)));
            			}
            			else {
HXLINE(  44)				if ((score <= 999)) {
HXLINE(  45)					 ::flixel::text::FlxText _hx_tmp = this->scoreDisplay;
HXDLIN(  45)					_hx_tmp->set_text((HX_("0",30,00,00,00) + ::Std_obj::string(score)));
            				}
            				else {
HXLINE(  47)					 ::flixel::text::FlxText _hx_tmp = this->scoreDisplay;
HXDLIN(  47)					_hx_tmp->set_text(::Std_obj::string(score));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(HUD_obj,updateHUD,(void))

void HUD_obj::updateHighscore(int highscore){
            	HX_STACKFRAME(&_hx_pos_f77237052cf31132_52_updateHighscore)
HXDLIN(  52)		if ((highscore <= 9)) {
HXLINE(  53)			 ::flixel::text::FlxText _hx_tmp = this->highscoreDisplay;
HXDLIN(  53)			_hx_tmp->set_text((HX_("000",30,96,24,00) + ::Std_obj::string(highscore)));
            		}
            		else {
HXLINE(  54)			if ((highscore <= 99)) {
HXLINE(  55)				 ::flixel::text::FlxText _hx_tmp = this->highscoreDisplay;
HXDLIN(  55)				_hx_tmp->set_text((HX_("00",00,2a,00,00) + ::Std_obj::string(highscore)));
            			}
            			else {
HXLINE(  56)				if ((highscore <= 999)) {
HXLINE(  57)					 ::flixel::text::FlxText _hx_tmp = this->highscoreDisplay;
HXDLIN(  57)					_hx_tmp->set_text((HX_("0",30,00,00,00) + ::Std_obj::string(highscore)));
            				}
            				else {
HXLINE(  59)					 ::flixel::text::FlxText _hx_tmp = this->highscoreDisplay;
HXDLIN(  59)					_hx_tmp->set_text(::Std_obj::string(highscore));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(HUD_obj,updateHighscore,(void))

void HUD_obj::endGame(){
            	HX_STACKFRAME(&_hx_pos_f77237052cf31132_63_endGame)
HXLINE(  64)		this->gameOverText->set_visible(true);
HXLINE(  65)		::flixel::tweens::FlxTween_obj::tween(this->gameOverText, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)1.6),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(HUD_obj,endGame,(void))


::hx::ObjectPtr< HUD_obj > HUD_obj::__new() {
	::hx::ObjectPtr< HUD_obj > __this = new HUD_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< HUD_obj > HUD_obj::__alloc(::hx::Ctx *_hx_ctx) {
	HUD_obj *__this = (HUD_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HUD_obj), true, "HUD"));
	*(void **)__this = HUD_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HUD_obj::HUD_obj()
{
}

void HUD_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HUD);
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(scoreDisplay,"scoreDisplay");
	HX_MARK_MEMBER_NAME(highscoreDisplay,"highscoreDisplay");
	HX_MARK_MEMBER_NAME(textDisplay,"textDisplay");
	HX_MARK_MEMBER_NAME(gameOverText,"gameOverText");
	 ::flixel::group::FlxTypedGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HUD_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(scoreDisplay,"scoreDisplay");
	HX_VISIT_MEMBER_NAME(highscoreDisplay,"highscoreDisplay");
	HX_VISIT_MEMBER_NAME(textDisplay,"textDisplay");
	HX_VISIT_MEMBER_NAME(gameOverText,"gameOverText");
	 ::flixel::group::FlxTypedGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val HUD_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"endGame") ) { return ::hx::Val( endGame_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"updateHUD") ) { return ::hx::Val( updateHUD_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return ::hx::Val( background ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"textDisplay") ) { return ::hx::Val( textDisplay ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scoreDisplay") ) { return ::hx::Val( scoreDisplay ); }
		if (HX_FIELD_EQ(inName,"gameOverText") ) { return ::hx::Val( gameOverText ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateHighscore") ) { return ::hx::Val( updateHighscore_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"highscoreDisplay") ) { return ::hx::Val( highscoreDisplay ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HUD_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"textDisplay") ) { textDisplay=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scoreDisplay") ) { scoreDisplay=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gameOverText") ) { gameOverText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"highscoreDisplay") ) { highscoreDisplay=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HUD_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("background",ee,93,1d,26));
	outFields->push(HX_("scoreDisplay",10,cd,4e,c8));
	outFields->push(HX_("highscoreDisplay",72,8f,03,79));
	outFields->push(HX_("textDisplay",15,25,ca,96));
	outFields->push(HX_("gameOverText",33,b6,41,70));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HUD_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(HUD_obj,background),HX_("background",ee,93,1d,26)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(HUD_obj,scoreDisplay),HX_("scoreDisplay",10,cd,4e,c8)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(HUD_obj,highscoreDisplay),HX_("highscoreDisplay",72,8f,03,79)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(HUD_obj,textDisplay),HX_("textDisplay",15,25,ca,96)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(HUD_obj,gameOverText),HX_("gameOverText",33,b6,41,70)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HUD_obj_sStaticStorageInfo = 0;
#endif

static ::String HUD_obj_sMemberFields[] = {
	HX_("background",ee,93,1d,26),
	HX_("scoreDisplay",10,cd,4e,c8),
	HX_("highscoreDisplay",72,8f,03,79),
	HX_("textDisplay",15,25,ca,96),
	HX_("gameOverText",33,b6,41,70),
	HX_("updateHUD",2e,12,dc,82),
	HX_("updateHighscore",67,09,68,40),
	HX_("endGame",6d,ad,83,26),
	::String(null()) };

::hx::Class HUD_obj::__mClass;

void HUD_obj::__register()
{
	HUD_obj _hx_dummy;
	HUD_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("HUD",97,ec,36,00);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HUD_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HUD_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HUD_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HUD_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

