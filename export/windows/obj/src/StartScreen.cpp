#include <hxcpp.h>

#ifndef INCLUDED_SelectionScreen
#include <SelectionScreen.h>
#endif
#ifndef INCLUDED_SettingsScreen
#include <SettingsScreen.h>
#endif
#ifndef INCLUDED_StartScreen
#include <StartScreen.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
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
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools_GraphicCursorCross
#include <flixel/system/debug/interaction/tools/GraphicCursorCross.h>
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
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_ae4239bd2e271784_13_new,"StartScreen","new",0x40df9140,"StartScreen.new","StartScreen.hx",13,0x01705630)
HX_LOCAL_STACK_FRAME(_hx_pos_ae4239bd2e271784_37_create,"StartScreen","create",0x616b721c,"StartScreen.create","StartScreen.hx",37,0x01705630)
HX_LOCAL_STACK_FRAME(_hx_pos_ae4239bd2e271784_88_clickPlay,"StartScreen","clickPlay",0x5ffd433c,"StartScreen.clickPlay","StartScreen.hx",88,0x01705630)
HX_LOCAL_STACK_FRAME(_hx_pos_ae4239bd2e271784_94_clickSettings,"StartScreen","clickSettings",0x8d68d62b,"StartScreen.clickSettings","StartScreen.hx",94,0x01705630)
HX_LOCAL_STACK_FRAME(_hx_pos_ae4239bd2e271784_101_buttonColor,"StartScreen","buttonColor",0x7d8ed2f1,"StartScreen.buttonColor","StartScreen.hx",101,0x01705630)
HX_LOCAL_STACK_FRAME(_hx_pos_ae4239bd2e271784_109_setTheme,"StartScreen","setTheme",0x1a87fa27,"StartScreen.setTheme","StartScreen.hx",109,0x01705630)
HX_LOCAL_STACK_FRAME(_hx_pos_ae4239bd2e271784_137_clickExit,"StartScreen","clickExit",0x58c10c66,"StartScreen.clickExit","StartScreen.hx",137,0x01705630)

void StartScreen_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_ae4239bd2e271784_13_new)
HXLINE(  30)		this->ibm = ( (int)(::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(HX_("0x000300",0b,55,c3,2b))) );
HXLINE(  29)		this->bw = -16777216;
HXLINE(  28)		this->reverse = -1;
HXLINE(  27)		this->n6610 = ( (int)(::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(HX_("0x4756de",6d,5b,4f,d0))) );
HXLINE(  26)		this->n3310 = ( (int)(::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(HX_("0x80c215",53,58,53,80))) );
HXLINE(  13)		super::__construct(MaxSize);
            	}

Dynamic StartScreen_obj::__CreateEmpty() { return new StartScreen_obj; }

void *StartScreen_obj::_hx_vtable = 0;

Dynamic StartScreen_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StartScreen_obj > _hx_result = new StartScreen_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool StartScreen_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5671768e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x5671768e;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void StartScreen_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_ae4239bd2e271784_37_create)
HXLINE(  38)		::flixel::FlxG_obj::camera->fade(-16777216,((Float)0.33),true,null(),null());
HXLINE(  41)		::flixel::FlxG_obj::mouse->set_visible(true);
HXLINE(  44)		this->save =  ::flixel::util::FlxSave_obj::__alloc( HX_CTX );
HXLINE(  45)		this->save->bind(HX_("Settings",03,39,ef,64),null());
HXLINE(  47)		if (::hx::IsNotNull( this->save->data->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic) )) {
HXLINE(  48)			this->set_bgColor(( (int)(this->save->data->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic)) ));
            		}
HXLINE(  50)		this->backColor = this->get_bgColor();
HXLINE(  52)		this->title =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,20,5,null());
HXLINE(  53)		this->title->loadGraphic(HX_("assets/images/title.png",c8,d9,60,ff),false,58,22,null(),null());
HXLINE(  54)		{
HXLINE(  54)			 ::flixel::FlxSprite _this = this->title;
HXDLIN(  54)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::X_dyn();
HXDLIN(  54)			if (::hx::IsNull( axes )) {
HXLINE(  54)				axes = ::flixel::util::FlxAxes_obj::XY_dyn();
            			}
HXDLIN(  54)			bool _hx_tmp;
HXDLIN(  54)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  54)					_hx_tmp = true;
            				}
            				break;
            				default:{
HXLINE(  54)					_hx_tmp = false;
            				}
            			}
HXDLIN(  54)			if (_hx_tmp) {
HXLINE(  54)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  54)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  54)			bool _hx_tmp1;
HXDLIN(  54)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  54)					_hx_tmp1 = true;
            				}
            				break;
            				default:{
HXLINE(  54)					_hx_tmp1 = false;
            				}
            			}
HXDLIN(  54)			if (_hx_tmp1) {
HXLINE(  54)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  54)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  55)		this->add(this->title);
HXLINE(  57)		this->buttons =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  59)		this->playButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,0,0,null(),this->clickPlay_dyn());
HXLINE(  60)		this->playButton->loadGraphic(HX_("assets/images/playButton.png",2c,58,ab,da),true,74,18,null(),null());
HXLINE(  61)		 ::flixel::ui::FlxButton _hx_tmp2 = this->playButton;
HXDLIN(  61)		int _hx_tmp3 = ::flixel::FlxG_obj::width;
HXDLIN(  61)		_hx_tmp2->set_x(((( (Float)(_hx_tmp3) ) - this->playButton->get_width()) / ( (Float)(2) )));
HXLINE(  62)		 ::flixel::ui::FlxButton _hx_tmp4 = this->playButton;
HXDLIN(  62)		int _hx_tmp5 = ::flixel::FlxG_obj::height;
HXDLIN(  62)		_hx_tmp4->set_y(((( (Float)(_hx_tmp5) ) - (this->playButton->get_height() * ( (Float)(3) ))) - ( (Float)(15) )));
HXLINE(  63)		this->add(this->playButton);
HXLINE(  64)		this->buttons->add(this->playButton).StaticCast<  ::flixel::ui::FlxButton >();
HXLINE(  66)		this->settingsButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,0,0,null(),this->clickSettings_dyn());
HXLINE(  67)		this->settingsButton->loadGraphic(HX_("assets/images/settingsButton.png",5b,99,1a,de),true,74,18,null(),null());
HXLINE(  68)		 ::flixel::ui::FlxButton _hx_tmp6 = this->settingsButton;
HXDLIN(  68)		int _hx_tmp7 = ::flixel::FlxG_obj::width;
HXDLIN(  68)		_hx_tmp6->set_x(((( (Float)(_hx_tmp7) ) - this->settingsButton->get_width()) / ( (Float)(2) )));
HXLINE(  69)		 ::flixel::ui::FlxButton _hx_tmp8 = this->settingsButton;
HXDLIN(  69)		int _hx_tmp9 = ::flixel::FlxG_obj::height;
HXDLIN(  69)		_hx_tmp8->set_y(((( (Float)(_hx_tmp9) ) - (this->playButton->get_height() * ( (Float)(2) ))) - ( (Float)(10) )));
HXLINE(  70)		this->add(this->settingsButton);
HXLINE(  71)		this->buttons->add(this->settingsButton).StaticCast<  ::flixel::ui::FlxButton >();
HXLINE(  73)		this->exitButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,0,0,null(),this->clickExit_dyn());
HXLINE(  74)		this->exitButton->loadGraphic(HX_("assets/images/exitButton.png",d6,f9,e1,4b),true,74,18,null(),null());
HXLINE(  75)		 ::flixel::ui::FlxButton _hx_tmp10 = this->exitButton;
HXDLIN(  75)		int _hx_tmp11 = ::flixel::FlxG_obj::width;
HXDLIN(  75)		_hx_tmp10->set_x(((( (Float)(_hx_tmp11) ) - this->exitButton->get_width()) / ( (Float)(2) )));
HXLINE(  76)		 ::flixel::ui::FlxButton _hx_tmp12 = this->exitButton;
HXDLIN(  76)		int _hx_tmp13 = ::flixel::FlxG_obj::height;
HXDLIN(  76)		_hx_tmp12->set_y(((( (Float)(_hx_tmp13) ) - this->playButton->get_height()) - ( (Float)(5) )));
HXLINE(  77)		this->add(this->exitButton);
HXLINE(  78)		this->buttons->add(this->exitButton).StaticCast<  ::flixel::ui::FlxButton >();
HXLINE(  80)		this->playButton->onOver->sound = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/button2.wav",ff,4f,69,f1),((Float)0.2),null(),null(),null(),null(),null(),null(),null());
HXLINE(  81)		this->settingsButton->onOver->sound = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/button2.wav",ff,4f,69,f1),((Float)0.2),null(),null(),null(),null(),null(),null(),null());
HXLINE(  82)		this->exitButton->onOver->sound = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/button3.wav",80,e4,cf,84),((Float)0.2),null(),null(),null(),null(),null(),null(),null());
HXLINE(  84)		this->setTheme();
            	}


void StartScreen_obj::clickPlay(){
            	HX_GC_STACKFRAME(&_hx_pos_ae4239bd2e271784_88_clickPlay)
HXLINE(  89)		this->save->close(null(),null());
HXLINE(  90)		{
HXLINE(  90)			 ::flixel::FlxState nextState =  ::SelectionScreen_obj::__alloc( HX_CTX ,null());
HXDLIN(  90)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  90)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(StartScreen_obj,clickPlay,(void))

void StartScreen_obj::clickSettings(){
            	HX_GC_STACKFRAME(&_hx_pos_ae4239bd2e271784_94_clickSettings)
HXLINE(  95)		this->save->close(null(),null());
HXLINE(  96)		{
HXLINE(  96)			 ::flixel::FlxState nextState =  ::SettingsScreen_obj::__alloc( HX_CTX ,null());
HXDLIN(  96)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  96)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(StartScreen_obj,clickSettings,(void))

void StartScreen_obj::buttonColor(int color){
            	HX_STACKFRAME(&_hx_pos_ae4239bd2e271784_101_buttonColor)
HXDLIN( 101)		int _g = 0;
HXDLIN( 101)		int _g1 = this->buttons->members->get_length();
HXDLIN( 101)		while((_g < _g1)){
HXDLIN( 101)			_g = (_g + 1);
HXDLIN( 101)			int i = (_g - 1);
HXLINE( 103)			Dynamic( this->buttons->members->__get(i)).StaticCast<  ::flixel::ui::FlxButton >()->set_color(color);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(StartScreen_obj,buttonColor,(void))

void StartScreen_obj::setTheme(){
            	HX_STACKFRAME(&_hx_pos_ae4239bd2e271784_109_setTheme)
HXDLIN( 109)		if ((this->backColor == this->n3310)) {
HXLINE( 111)			this->title->set_color(2242562);
HXLINE( 112)			this->buttonColor(2242562);
            		}
            		else {
HXLINE( 114)			if ((this->backColor == this->n6610)) {
HXLINE( 116)				this->title->set_color(66847);
HXLINE( 117)				this->buttonColor(66847);
            			}
            			else {
HXLINE( 119)				if ((this->backColor == this->reverse)) {
HXLINE( 121)					this->title->set_color(-16777216);
HXLINE( 122)					this->buttonColor(-16777216);
            				}
            				else {
HXLINE( 124)					if ((this->backColor == this->bw)) {
HXLINE( 126)						this->title->set_color(-1);
HXLINE( 127)						this->buttonColor(-1);
            					}
            					else {
HXLINE( 129)						if ((this->backColor == this->ibm)) {
HXLINE( 131)							this->title->set_color(65306);
HXLINE( 132)							this->buttonColor(65306);
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(StartScreen_obj,setTheme,(void))

void StartScreen_obj::clickExit(){
            	HX_STACKFRAME(&_hx_pos_ae4239bd2e271784_137_clickExit)
HXLINE( 138)		this->save->close(null(),null());
HXLINE( 139)		::Sys_obj::exit(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(StartScreen_obj,clickExit,(void))


::hx::ObjectPtr< StartScreen_obj > StartScreen_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< StartScreen_obj > __this = new StartScreen_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< StartScreen_obj > StartScreen_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	StartScreen_obj *__this = (StartScreen_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StartScreen_obj), true, "StartScreen"));
	*(void **)__this = StartScreen_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

StartScreen_obj::StartScreen_obj()
{
}

void StartScreen_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StartScreen);
	HX_MARK_MEMBER_NAME(titleText,"titleText");
	HX_MARK_MEMBER_NAME(title,"title");
	HX_MARK_MEMBER_NAME(playButton,"playButton");
	HX_MARK_MEMBER_NAME(settingsButton,"settingsButton");
	HX_MARK_MEMBER_NAME(exitButton,"exitButton");
	HX_MARK_MEMBER_NAME(buttons,"buttons");
	HX_MARK_MEMBER_NAME(backColor,"backColor");
	HX_MARK_MEMBER_NAME(n3310,"n3310");
	HX_MARK_MEMBER_NAME(n6610,"n6610");
	HX_MARK_MEMBER_NAME(reverse,"reverse");
	HX_MARK_MEMBER_NAME(bw,"bw");
	HX_MARK_MEMBER_NAME(ibm,"ibm");
	HX_MARK_MEMBER_NAME(cursor,"cursor");
	HX_MARK_MEMBER_NAME(save,"save");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StartScreen_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(titleText,"titleText");
	HX_VISIT_MEMBER_NAME(title,"title");
	HX_VISIT_MEMBER_NAME(playButton,"playButton");
	HX_VISIT_MEMBER_NAME(settingsButton,"settingsButton");
	HX_VISIT_MEMBER_NAME(exitButton,"exitButton");
	HX_VISIT_MEMBER_NAME(buttons,"buttons");
	HX_VISIT_MEMBER_NAME(backColor,"backColor");
	HX_VISIT_MEMBER_NAME(n3310,"n3310");
	HX_VISIT_MEMBER_NAME(n6610,"n6610");
	HX_VISIT_MEMBER_NAME(reverse,"reverse");
	HX_VISIT_MEMBER_NAME(bw,"bw");
	HX_VISIT_MEMBER_NAME(ibm,"ibm");
	HX_VISIT_MEMBER_NAME(cursor,"cursor");
	HX_VISIT_MEMBER_NAME(save,"save");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val StartScreen_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { return ::hx::Val( title ); }
		if (HX_FIELD_EQ(inName,"n3310") ) { return ::hx::Val( n3310 ); }
		if (HX_FIELD_EQ(inName,"n6610") ) { return ::hx::Val( n6610 ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cursor") ) { return ::hx::Val( cursor ); }
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
		if (HX_FIELD_EQ(inName,"titleText") ) { return ::hx::Val( titleText ); }
		if (HX_FIELD_EQ(inName,"backColor") ) { return ::hx::Val( backColor ); }
		if (HX_FIELD_EQ(inName,"clickPlay") ) { return ::hx::Val( clickPlay_dyn() ); }
		if (HX_FIELD_EQ(inName,"clickExit") ) { return ::hx::Val( clickExit_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"playButton") ) { return ::hx::Val( playButton ); }
		if (HX_FIELD_EQ(inName,"exitButton") ) { return ::hx::Val( exitButton ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"buttonColor") ) { return ::hx::Val( buttonColor_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"clickSettings") ) { return ::hx::Val( clickSettings_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"settingsButton") ) { return ::hx::Val( settingsButton ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StartScreen_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"title") ) { title=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"n3310") ) { n3310=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"n6610") ) { n6610=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cursor") ) { cursor=inValue.Cast<  ::flixel::_hx_system::debug::interaction::tools::GraphicCursorCross >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buttons") ) { buttons=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"reverse") ) { reverse=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"titleText") ) { titleText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backColor") ) { backColor=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"playButton") ) { playButton=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"exitButton") ) { exitButton=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"settingsButton") ) { settingsButton=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StartScreen_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("titleText",65,ba,a4,70));
	outFields->push(HX_("title",98,15,3b,10));
	outFields->push(HX_("playButton",06,f3,a3,80));
	outFields->push(HX_("settingsButton",35,9f,7f,6a));
	outFields->push(HX_("exitButton",b0,f7,69,1a));
	outFields->push(HX_("buttons",41,52,75,ca));
	outFields->push(HX_("backColor",bc,d9,0d,27));
	outFields->push(HX_("n3310",ed,8e,f0,77));
	outFields->push(HX_("n6610",8d,79,ee,79));
	outFields->push(HX_("reverse",22,39,fc,1a));
	outFields->push(HX_("bw",d5,55,00,00));
	outFields->push(HX_("ibm",74,02,50,00));
	outFields->push(HX_("cursor",d6,8e,e8,3e));
	outFields->push(HX_("save",3d,8b,4d,4c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StartScreen_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(StartScreen_obj,titleText),HX_("titleText",65,ba,a4,70)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(StartScreen_obj,title),HX_("title",98,15,3b,10)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(StartScreen_obj,playButton),HX_("playButton",06,f3,a3,80)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(StartScreen_obj,settingsButton),HX_("settingsButton",35,9f,7f,6a)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(StartScreen_obj,exitButton),HX_("exitButton",b0,f7,69,1a)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(StartScreen_obj,buttons),HX_("buttons",41,52,75,ca)},
	{::hx::fsInt,(int)offsetof(StartScreen_obj,backColor),HX_("backColor",bc,d9,0d,27)},
	{::hx::fsInt,(int)offsetof(StartScreen_obj,n3310),HX_("n3310",ed,8e,f0,77)},
	{::hx::fsInt,(int)offsetof(StartScreen_obj,n6610),HX_("n6610",8d,79,ee,79)},
	{::hx::fsInt,(int)offsetof(StartScreen_obj,reverse),HX_("reverse",22,39,fc,1a)},
	{::hx::fsInt,(int)offsetof(StartScreen_obj,bw),HX_("bw",d5,55,00,00)},
	{::hx::fsInt,(int)offsetof(StartScreen_obj,ibm),HX_("ibm",74,02,50,00)},
	{::hx::fsObject /*  ::flixel::_hx_system::debug::interaction::tools::GraphicCursorCross */ ,(int)offsetof(StartScreen_obj,cursor),HX_("cursor",d6,8e,e8,3e)},
	{::hx::fsObject /*  ::flixel::util::FlxSave */ ,(int)offsetof(StartScreen_obj,save),HX_("save",3d,8b,4d,4c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StartScreen_obj_sStaticStorageInfo = 0;
#endif

static ::String StartScreen_obj_sMemberFields[] = {
	HX_("titleText",65,ba,a4,70),
	HX_("title",98,15,3b,10),
	HX_("playButton",06,f3,a3,80),
	HX_("settingsButton",35,9f,7f,6a),
	HX_("exitButton",b0,f7,69,1a),
	HX_("buttons",41,52,75,ca),
	HX_("backColor",bc,d9,0d,27),
	HX_("n3310",ed,8e,f0,77),
	HX_("n6610",8d,79,ee,79),
	HX_("reverse",22,39,fc,1a),
	HX_("bw",d5,55,00,00),
	HX_("ibm",74,02,50,00),
	HX_("cursor",d6,8e,e8,3e),
	HX_("save",3d,8b,4d,4c),
	HX_("create",fc,66,0f,7c),
	HX_("clickPlay",5c,9a,59,29),
	HX_("clickSettings",4b,3d,0f,7e),
	HX_("buttonColor",11,32,07,98),
	HX_("setTheme",07,e7,ba,1d),
	HX_("clickExit",86,63,1d,22),
	::String(null()) };

::hx::Class StartScreen_obj::__mClass;

void StartScreen_obj::__register()
{
	StartScreen_obj _hx_dummy;
	StartScreen_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("StartScreen",4e,31,76,a3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StartScreen_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StartScreen_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StartScreen_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StartScreen_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

