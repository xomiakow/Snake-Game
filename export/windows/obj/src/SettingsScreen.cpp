#include <hxcpp.h>

#ifndef INCLUDED_SettingsScreen
#include <SettingsScreen.h>
#endif
#ifndef INCLUDED_StartScreen
#include <StartScreen.h>
#endif
#ifndef INCLUDED_Theme
#include <Theme.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_text_FlxText
#include <flixel/ui/FlxTypedButton_flixel_text_FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxButton_FlxButtonEvent
#include <flixel/ui/_FlxButton/FlxButtonEvent.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f39bbf04c005c768_20_new,"SettingsScreen","new",0x30f5c141,"SettingsScreen.new","SettingsScreen.hx",20,0xb473e14f)
HX_LOCAL_STACK_FRAME(_hx_pos_f39bbf04c005c768_42_create,"SettingsScreen","create",0xddfc78bb,"SettingsScreen.create","SettingsScreen.hx",42,0xb473e14f)
HX_LOCAL_STACK_FRAME(_hx_pos_f39bbf04c005c768_91_setFullscreen,"SettingsScreen","setFullscreen",0x0716ac9e,"SettingsScreen.setFullscreen","SettingsScreen.hx",91,0xb473e14f)
HX_LOCAL_STACK_FRAME(_hx_pos_f39bbf04c005c768_99_buttonSprite,"SettingsScreen","buttonSprite",0x70671e96,"SettingsScreen.buttonSprite","SettingsScreen.hx",99,0xb473e14f)
HX_LOCAL_STACK_FRAME(_hx_pos_f39bbf04c005c768_111_buttonColor,"SettingsScreen","buttonColor",0x8a466bf2,"SettingsScreen.buttonColor","SettingsScreen.hx",111,0xb473e14f)
HX_LOCAL_STACK_FRAME(_hx_pos_f39bbf04c005c768_118_back,"SettingsScreen","back",0x9e21ae26,"SettingsScreen.back","SettingsScreen.hx",118,0xb473e14f)
HX_LOCAL_STACK_FRAME(_hx_pos_f39bbf04c005c768_125_changeColor,"SettingsScreen","changeColor",0x626153b4,"SettingsScreen.changeColor","SettingsScreen.hx",125,0xb473e14f)
HX_LOCAL_STACK_FRAME(_hx_pos_f39bbf04c005c768_162_setTheme,"SettingsScreen","setTheme",0xa25f2686,"SettingsScreen.setTheme","SettingsScreen.hx",162,0xb473e14f)
HX_LOCAL_STACK_FRAME(_hx_pos_f39bbf04c005c768_37_boot,"SettingsScreen","boot",0x9e2c5831,"SettingsScreen.boot","SettingsScreen.hx",37,0xb473e14f)

void SettingsScreen_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_f39bbf04c005c768_20_new)
HXLINE(  35)		this->ibm = ( (int)(::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(HX_("0x000300",0b,55,c3,2b))) );
HXLINE(  34)		this->bw = -16777216;
HXLINE(  33)		this->reverse = -1;
HXLINE(  32)		this->n6610 = ( (int)(::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(HX_("0x4756de",6d,5b,4f,d0))) );
HXLINE(  31)		this->n3310 = ( (int)(::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(HX_("0x80c215",53,58,53,80))) );
HXLINE(  20)		super::__construct(MaxSize);
            	}

Dynamic SettingsScreen_obj::__CreateEmpty() { return new SettingsScreen_obj; }

void *SettingsScreen_obj::_hx_vtable = 0;

Dynamic SettingsScreen_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SettingsScreen_obj > _hx_result = new SettingsScreen_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SettingsScreen_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x643d8f8f) {
		if (inClassId<=(int)0x62817b24) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x62817b24;
		} else {
			return inClassId==(int)0x643d8f8f;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void SettingsScreen_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_f39bbf04c005c768_42_create)
HXLINE(  43)		::flixel::FlxG_obj::camera->fade(-16777216,((Float)0.33),true,null(),null());
HXLINE(  45)		this->title =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,0,0,HX_("Settings",03,39,ef,64),16,null());
HXLINE(  46)		this->title->set_alignment(HX_("center",d5,25,db,05));
HXLINE(  47)		{
HXLINE(  47)			 ::flixel::text::FlxText _this = this->title;
HXDLIN(  47)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::X_dyn();
HXDLIN(  47)			if (::hx::IsNull( axes )) {
HXLINE(  47)				axes = ::flixel::util::FlxAxes_obj::XY_dyn();
            			}
HXDLIN(  47)			bool _hx_tmp;
HXDLIN(  47)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  47)					_hx_tmp = true;
            				}
            				break;
            				default:{
HXLINE(  47)					_hx_tmp = false;
            				}
            			}
HXDLIN(  47)			if (_hx_tmp) {
HXLINE(  47)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  47)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  47)			bool _hx_tmp1;
HXDLIN(  47)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  47)					_hx_tmp1 = true;
            				}
            				break;
            				default:{
HXLINE(  47)					_hx_tmp1 = false;
            				}
            			}
HXDLIN(  47)			if (_hx_tmp1) {
HXLINE(  47)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  47)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  48)		this->add(this->title);
HXLINE(  50)		this->buttons =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  52)		this->fullscreenButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,0,0,null(),this->setFullscreen_dyn());
HXLINE(  53)		this->buttonSprite(HX_("FS",4d,3d,00,00));
HXLINE(  54)		 ::flixel::ui::FlxButton _hx_tmp2 = this->fullscreenButton;
HXDLIN(  54)		int _hx_tmp3 = ::flixel::FlxG_obj::width;
HXDLIN(  54)		_hx_tmp2->set_x(((( (Float)(_hx_tmp3) ) - this->fullscreenButton->get_width()) / ( (Float)(2) )));
HXLINE(  55)		 ::flixel::ui::FlxButton _hx_tmp4 = this->fullscreenButton;
HXDLIN(  55)		int _hx_tmp5 = ::flixel::FlxG_obj::height;
HXDLIN(  55)		_hx_tmp4->set_y(((( (Float)(_hx_tmp5) ) - (this->fullscreenButton->get_height() * ( (Float)(3) ))) - ( (Float)(15) )));
HXLINE(  56)		this->add(this->fullscreenButton);
HXLINE(  57)		this->buttons->add(this->fullscreenButton).StaticCast<  ::flixel::ui::FlxButton >();
HXLINE(  59)		this->colorButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,0,0,null(),this->changeColor_dyn());
HXLINE(  60)		this->colorButton->loadGraphic(HX_("assets/images/colorButton.png",25,b0,6a,32),true,74,18,null(),null());
HXLINE(  61)		 ::flixel::ui::FlxButton _hx_tmp6 = this->colorButton;
HXDLIN(  61)		int _hx_tmp7 = ::flixel::FlxG_obj::width;
HXDLIN(  61)		_hx_tmp6->set_x(((( (Float)(_hx_tmp7) ) - this->colorButton->get_width()) / ( (Float)(2) )));
HXLINE(  62)		 ::flixel::ui::FlxButton _hx_tmp8 = this->colorButton;
HXDLIN(  62)		int _hx_tmp9 = ::flixel::FlxG_obj::height;
HXDLIN(  62)		_hx_tmp8->set_y(((( (Float)(_hx_tmp9) ) - (this->fullscreenButton->get_height() * ( (Float)(2) ))) - ( (Float)(10) )));
HXLINE(  63)		this->add(this->colorButton);
HXLINE(  64)		this->buttons->add(this->colorButton).StaticCast<  ::flixel::ui::FlxButton >();
HXLINE(  66)		this->backButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,0,0,null(),this->back_dyn());
HXLINE(  67)		this->backButton->loadGraphic(HX_("assets/images/backButton.png",1f,62,40,ad),true,74,18,null(),null());
HXLINE(  68)		 ::flixel::ui::FlxButton _hx_tmp10 = this->backButton;
HXDLIN(  68)		int _hx_tmp11 = ::flixel::FlxG_obj::width;
HXDLIN(  68)		_hx_tmp10->set_x(((( (Float)(_hx_tmp11) ) - this->backButton->get_width()) / ( (Float)(2) )));
HXLINE(  69)		 ::flixel::ui::FlxButton _hx_tmp12 = this->backButton;
HXDLIN(  69)		int _hx_tmp13 = ::flixel::FlxG_obj::height;
HXDLIN(  69)		_hx_tmp12->set_y(((( (Float)(_hx_tmp13) ) - this->fullscreenButton->get_height()) - ( (Float)(5) )));
HXLINE(  70)		this->add(this->backButton);
HXLINE(  71)		this->buttons->add(this->backButton).StaticCast<  ::flixel::ui::FlxButton >();
HXLINE(  73)		this->fullscreenButton->onOver->sound = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/button2.wav",ff,4f,69,f1),((Float)0.2),null(),null(),null(),null(),null(),null(),null());
HXLINE(  74)		this->colorButton->onOver->sound = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/button.wav",8f,2b,47,2a),((Float)0.2),null(),null(),null(),null(),null(),null(),null());
HXLINE(  75)		this->backButton->onOver->sound = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/button3.wav",80,e4,cf,84),((Float)0.2),null(),null(),null(),null(),null(),null(),null());
HXLINE(  77)		this->save =  ::flixel::util::FlxSave_obj::__alloc( HX_CTX );
HXLINE(  78)		this->save->bind(HX_("Settings",03,39,ef,64),null());
HXLINE(  80)		if (::hx::IsNotNull( this->save->data->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic) )) {
HXLINE(  81)			this->set_bgColor(( (int)(this->save->data->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic)) ));
            		}
HXLINE(  83)		this->backColor = this->get_bgColor();
HXLINE(  85)		this->setTheme();
HXLINE(  87)		this->super::create();
            	}


void SettingsScreen_obj::setFullscreen(){
            	HX_STACKFRAME(&_hx_pos_f39bbf04c005c768_91_setFullscreen)
HXLINE(  92)		::flixel::FlxG_obj::set_fullscreen(!(::flixel::FlxG_obj::get_fullscreen()));
HXLINE(  93)		this->buttonSprite(HX_("FS",4d,3d,00,00));
HXLINE(  94)		this->save->data->__SetField(HX_("fullscreen",3b,3a,b4,f9),::flixel::FlxG_obj::get_fullscreen(),::hx::paccDynamic);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SettingsScreen_obj,setFullscreen,(void))

void SettingsScreen_obj::buttonSprite(::String name){
            	HX_STACKFRAME(&_hx_pos_f39bbf04c005c768_99_buttonSprite)
HXDLIN(  99)		if ((name == HX_("FS",4d,3d,00,00))) {
HXLINE( 102)			if (::flixel::FlxG_obj::get_fullscreen()) {
HXLINE( 103)				this->fullscreenButton->loadGraphic(HX_("assets/images/windowedButton.png",c7,e3,eb,2b),true,74,18,null(),null());
            			}
            			else {
HXLINE( 105)				this->fullscreenButton->loadGraphic(HX_("assets/images/fullscreenButton.png",73,25,05,6d),true,74,18,null(),null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SettingsScreen_obj,buttonSprite,(void))

void SettingsScreen_obj::buttonColor(int color){
            	HX_STACKFRAME(&_hx_pos_f39bbf04c005c768_111_buttonColor)
HXDLIN( 111)		int _g = 0;
HXDLIN( 111)		int _g1 = this->buttons->members->get_length();
HXDLIN( 111)		while((_g < _g1)){
HXDLIN( 111)			_g = (_g + 1);
HXDLIN( 111)			int i = (_g - 1);
HXLINE( 113)			Dynamic( this->buttons->members->__get(i)).StaticCast<  ::flixel::ui::FlxButton >()->set_color(color);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SettingsScreen_obj,buttonColor,(void))

void SettingsScreen_obj::back(){
            	HX_GC_STACKFRAME(&_hx_pos_f39bbf04c005c768_118_back)
HXLINE( 119)		{
HXLINE( 119)			 ::flixel::FlxState nextState =  ::StartScreen_obj::__alloc( HX_CTX ,null());
HXDLIN( 119)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 119)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
HXLINE( 120)		this->save->close(null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(SettingsScreen_obj,back,(void))

void SettingsScreen_obj::changeColor(){
            	HX_STACKFRAME(&_hx_pos_f39bbf04c005c768_125_changeColor)
HXDLIN( 125)		switch((int)(::SettingsScreen_obj::theme->_hx_getIndex())){
            			case (int)0: {
HXLINE( 128)				::SettingsScreen_obj::theme = ::Theme_obj::IBM_dyn();
HXLINE( 129)				this->set_bgColor(( (int)(::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(HX_("0x000300",0b,55,c3,2b))) ));
HXLINE( 130)				this->title->set_color(65306);
HXLINE( 131)				this->buttonColor(65306);
HXLINE( 132)				this->save->data->__SetField(HX_("color",63,71,5c,4a),::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(HX_("0x000300",0b,55,c3,2b)),::hx::paccDynamic);
            			}
            			break;
            			case (int)1: {
HXLINE( 140)				::SettingsScreen_obj::theme = ::Theme_obj::N6610_dyn();
HXLINE( 141)				this->set_bgColor(( (int)(::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(HX_("0x4756de",6d,5b,4f,d0))) ));
HXLINE( 142)				this->title->set_color(66847);
HXLINE( 143)				this->buttonColor(66847);
HXLINE( 144)				this->save->data->__SetField(HX_("color",63,71,5c,4a),::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(HX_("0x4756de",6d,5b,4f,d0)),::hx::paccDynamic);
            			}
            			break;
            			case (int)2: {
HXLINE( 146)				::SettingsScreen_obj::theme = ::Theme_obj::REVERSE_dyn();
HXLINE( 147)				this->set_bgColor(-1);
HXLINE( 148)				this->title->set_color(-16777216);
HXLINE( 149)				this->buttonColor(-16777216);
HXLINE( 150)				this->save->data->__SetField(HX_("color",63,71,5c,4a),-1,::hx::paccDynamic);
            			}
            			break;
            			case (int)3: {
HXLINE( 134)				::SettingsScreen_obj::theme = ::Theme_obj::N3310_dyn();
HXLINE( 135)				this->set_bgColor(( (int)(::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(HX_("0x80c215",53,58,53,80))) ));
HXLINE( 136)				this->title->set_color(2242562);
HXLINE( 137)				this->buttonColor(2242562);
HXLINE( 138)				this->save->data->__SetField(HX_("color",63,71,5c,4a),::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(HX_("0x80c215",53,58,53,80)),::hx::paccDynamic);
            			}
            			break;
            			case (int)4: {
HXLINE( 152)				::SettingsScreen_obj::theme = ::Theme_obj::BW_dyn();
HXLINE( 153)				this->set_bgColor(-16777216);
HXLINE( 154)				this->title->set_color(-1);
HXLINE( 155)				this->buttonColor(-1);
HXLINE( 156)				this->save->data->__SetField(HX_("color",63,71,5c,4a),-16777216,::hx::paccDynamic);
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SettingsScreen_obj,changeColor,(void))

void SettingsScreen_obj::setTheme(){
            	HX_STACKFRAME(&_hx_pos_f39bbf04c005c768_162_setTheme)
HXDLIN( 162)		if ((this->backColor == this->n3310)) {
HXLINE( 164)			this->title->set_color(2242562);
HXLINE( 165)			this->buttonColor(2242562);
HXLINE( 166)			::SettingsScreen_obj::theme = ::Theme_obj::N3310_dyn();
            		}
            		else {
HXLINE( 168)			if ((this->backColor == this->n6610)) {
HXLINE( 170)				this->title->set_color(66847);
HXLINE( 171)				this->buttonColor(66847);
HXLINE( 172)				::SettingsScreen_obj::theme = ::Theme_obj::N6610_dyn();
            			}
            			else {
HXLINE( 174)				if ((this->backColor == this->reverse)) {
HXLINE( 176)					this->title->set_color(-16777216);
HXLINE( 177)					this->buttonColor(-16777216);
HXLINE( 178)					::SettingsScreen_obj::theme = ::Theme_obj::REVERSE_dyn();
            				}
            				else {
HXLINE( 180)					if ((this->backColor == this->bw)) {
HXLINE( 182)						this->title->set_color(-1);
HXLINE( 183)						this->buttonColor(-1);
HXLINE( 184)						::SettingsScreen_obj::theme = ::Theme_obj::BW_dyn();
            					}
            					else {
HXLINE( 186)						if ((this->backColor == this->ibm)) {
HXLINE( 188)							this->title->set_color(65306);
HXLINE( 189)							this->buttonColor(65306);
HXLINE( 190)							::SettingsScreen_obj::theme = ::Theme_obj::IBM_dyn();
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SettingsScreen_obj,setTheme,(void))

 ::Theme SettingsScreen_obj::theme;


::hx::ObjectPtr< SettingsScreen_obj > SettingsScreen_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< SettingsScreen_obj > __this = new SettingsScreen_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< SettingsScreen_obj > SettingsScreen_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	SettingsScreen_obj *__this = (SettingsScreen_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SettingsScreen_obj), true, "SettingsScreen"));
	*(void **)__this = SettingsScreen_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

SettingsScreen_obj::SettingsScreen_obj()
{
}

void SettingsScreen_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SettingsScreen);
	HX_MARK_MEMBER_NAME(title,"title");
	HX_MARK_MEMBER_NAME(buttons,"buttons");
	HX_MARK_MEMBER_NAME(fullscreenButton,"fullscreenButton");
	HX_MARK_MEMBER_NAME(colorButton,"colorButton");
	HX_MARK_MEMBER_NAME(backButton,"backButton");
	HX_MARK_MEMBER_NAME(backColor,"backColor");
	HX_MARK_MEMBER_NAME(n3310,"n3310");
	HX_MARK_MEMBER_NAME(n6610,"n6610");
	HX_MARK_MEMBER_NAME(reverse,"reverse");
	HX_MARK_MEMBER_NAME(bw,"bw");
	HX_MARK_MEMBER_NAME(ibm,"ibm");
	HX_MARK_MEMBER_NAME(save,"save");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SettingsScreen_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(title,"title");
	HX_VISIT_MEMBER_NAME(buttons,"buttons");
	HX_VISIT_MEMBER_NAME(fullscreenButton,"fullscreenButton");
	HX_VISIT_MEMBER_NAME(colorButton,"colorButton");
	HX_VISIT_MEMBER_NAME(backButton,"backButton");
	HX_VISIT_MEMBER_NAME(backColor,"backColor");
	HX_VISIT_MEMBER_NAME(n3310,"n3310");
	HX_VISIT_MEMBER_NAME(n6610,"n6610");
	HX_VISIT_MEMBER_NAME(reverse,"reverse");
	HX_VISIT_MEMBER_NAME(bw,"bw");
	HX_VISIT_MEMBER_NAME(ibm,"ibm");
	HX_VISIT_MEMBER_NAME(save,"save");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SettingsScreen_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bw") ) { return ::hx::Val( bw ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ibm") ) { return ::hx::Val( ibm ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"save") ) { return ::hx::Val( save ); }
		if (HX_FIELD_EQ(inName,"back") ) { return ::hx::Val( back_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { return ::hx::Val( title ); }
		if (HX_FIELD_EQ(inName,"n3310") ) { return ::hx::Val( n3310 ); }
		if (HX_FIELD_EQ(inName,"n6610") ) { return ::hx::Val( n6610 ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buttons") ) { return ::hx::Val( buttons ); }
		if (HX_FIELD_EQ(inName,"reverse") ) { return ::hx::Val( reverse ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setTheme") ) { return ::hx::Val( setTheme_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"backColor") ) { return ::hx::Val( backColor ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"backButton") ) { return ::hx::Val( backButton ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"colorButton") ) { return ::hx::Val( colorButton ); }
		if (HX_FIELD_EQ(inName,"buttonColor") ) { return ::hx::Val( buttonColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"changeColor") ) { return ::hx::Val( changeColor_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"buttonSprite") ) { return ::hx::Val( buttonSprite_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setFullscreen") ) { return ::hx::Val( setFullscreen_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fullscreenButton") ) { return ::hx::Val( fullscreenButton ); }
	}
	return super::__Field(inName,inCallProp);
}

bool SettingsScreen_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"theme") ) { outValue = ( theme ); return true; }
	}
	return false;
}

::hx::Val SettingsScreen_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bw") ) { bw=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ibm") ) { ibm=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"save") ) { save=inValue.Cast<  ::flixel::util::FlxSave >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { title=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"n3310") ) { n3310=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"n6610") ) { n6610=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buttons") ) { buttons=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"reverse") ) { reverse=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"backColor") ) { backColor=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"backButton") ) { backButton=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"colorButton") ) { colorButton=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fullscreenButton") ) { fullscreenButton=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SettingsScreen_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"theme") ) { theme=ioValue.Cast<  ::Theme >(); return true; }
	}
	return false;
}

void SettingsScreen_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("title",98,15,3b,10));
	outFields->push(HX_("buttons",41,52,75,ca));
	outFields->push(HX_("fullscreenButton",8d,ee,82,b9));
	outFields->push(HX_("colorButton",b5,f3,08,94));
	outFields->push(HX_("backButton",79,47,6a,18));
	outFields->push(HX_("backColor",bc,d9,0d,27));
	outFields->push(HX_("n3310",ed,8e,f0,77));
	outFields->push(HX_("n6610",8d,79,ee,79));
	outFields->push(HX_("reverse",22,39,fc,1a));
	outFields->push(HX_("bw",d5,55,00,00));
	outFields->push(HX_("ibm",74,02,50,00));
	outFields->push(HX_("save",3d,8b,4d,4c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SettingsScreen_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(SettingsScreen_obj,title),HX_("title",98,15,3b,10)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(SettingsScreen_obj,buttons),HX_("buttons",41,52,75,ca)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(SettingsScreen_obj,fullscreenButton),HX_("fullscreenButton",8d,ee,82,b9)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(SettingsScreen_obj,colorButton),HX_("colorButton",b5,f3,08,94)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(SettingsScreen_obj,backButton),HX_("backButton",79,47,6a,18)},
	{::hx::fsInt,(int)offsetof(SettingsScreen_obj,backColor),HX_("backColor",bc,d9,0d,27)},
	{::hx::fsInt,(int)offsetof(SettingsScreen_obj,n3310),HX_("n3310",ed,8e,f0,77)},
	{::hx::fsInt,(int)offsetof(SettingsScreen_obj,n6610),HX_("n6610",8d,79,ee,79)},
	{::hx::fsInt,(int)offsetof(SettingsScreen_obj,reverse),HX_("reverse",22,39,fc,1a)},
	{::hx::fsInt,(int)offsetof(SettingsScreen_obj,bw),HX_("bw",d5,55,00,00)},
	{::hx::fsInt,(int)offsetof(SettingsScreen_obj,ibm),HX_("ibm",74,02,50,00)},
	{::hx::fsObject /*  ::flixel::util::FlxSave */ ,(int)offsetof(SettingsScreen_obj,save),HX_("save",3d,8b,4d,4c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo SettingsScreen_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Theme */ ,(void *) &SettingsScreen_obj::theme,HX_("theme",09,7e,86,0f)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String SettingsScreen_obj_sMemberFields[] = {
	HX_("title",98,15,3b,10),
	HX_("buttons",41,52,75,ca),
	HX_("fullscreenButton",8d,ee,82,b9),
	HX_("colorButton",b5,f3,08,94),
	HX_("backButton",79,47,6a,18),
	HX_("backColor",bc,d9,0d,27),
	HX_("n3310",ed,8e,f0,77),
	HX_("n6610",8d,79,ee,79),
	HX_("reverse",22,39,fc,1a),
	HX_("bw",d5,55,00,00),
	HX_("ibm",74,02,50,00),
	HX_("save",3d,8b,4d,4c),
	HX_("create",fc,66,0f,7c),
	HX_("setFullscreen",7d,78,2c,9b),
	HX_("buttonSprite",97,b3,53,6b),
	HX_("buttonColor",11,32,07,98),
	HX_("back",27,da,10,41),
	HX_("changeColor",d3,19,22,70),
	HX_("setTheme",07,e7,ba,1d),
	::String(null()) };

static void SettingsScreen_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SettingsScreen_obj::theme,"theme");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SettingsScreen_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SettingsScreen_obj::theme,"theme");
};

#endif

::hx::Class SettingsScreen_obj::__mClass;

static ::String SettingsScreen_obj_sStaticFields[] = {
	HX_("theme",09,7e,86,0f),
	::String(null())
};

void SettingsScreen_obj::__register()
{
	SettingsScreen_obj _hx_dummy;
	SettingsScreen_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("SettingsScreen",cf,0c,52,82);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SettingsScreen_obj::__GetStatic;
	__mClass->mSetStaticField = &SettingsScreen_obj::__SetStatic;
	__mClass->mMarkFunc = SettingsScreen_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SettingsScreen_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SettingsScreen_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SettingsScreen_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SettingsScreen_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SettingsScreen_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SettingsScreen_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SettingsScreen_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f39bbf04c005c768_37_boot)
HXDLIN(  37)		theme = ::Theme_obj::BW_dyn();
            	}
}

