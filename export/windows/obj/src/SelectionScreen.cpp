#include <hxcpp.h>

#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_SelectionScreen
#include <SelectionScreen.h>
#endif
#ifndef INCLUDED_StartScreen
#include <StartScreen.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_7b18e0c5e70cba55_10_new,"SelectionScreen","new",0xadb04daa,"SelectionScreen.new","SelectionScreen.hx",10,0xa6169506)
HX_LOCAL_STACK_FRAME(_hx_pos_7b18e0c5e70cba55_30_create,"SelectionScreen","create",0x60c8d3f2,"SelectionScreen.create","SelectionScreen.hx",30,0xa6169506)
HX_LOCAL_STACK_FRAME(_hx_pos_7b18e0c5e70cba55_72_back,"SelectionScreen","back",0x44a1fd9d,"SelectionScreen.back","SelectionScreen.hx",72,0xa6169506)
HX_LOCAL_STACK_FRAME(_hx_pos_7b18e0c5e70cba55_76_borderedMode,"SelectionScreen","borderedMode",0x0b2ec2c4,"SelectionScreen.borderedMode","SelectionScreen.hx",76,0xa6169506)
HX_LOCAL_STACK_FRAME(_hx_pos_7b18e0c5e70cba55_82_unborderedMode,"SelectionScreen","unborderedMode",0x95e9941d,"SelectionScreen.unborderedMode","SelectionScreen.hx",82,0xa6169506)
HX_LOCAL_STACK_FRAME(_hx_pos_7b18e0c5e70cba55_89_buttonColor,"SelectionScreen","buttonColor",0xdb71095b,"SelectionScreen.buttonColor","SelectionScreen.hx",89,0xa6169506)
HX_LOCAL_STACK_FRAME(_hx_pos_7b18e0c5e70cba55_97_setTheme,"SelectionScreen","setTheme",0xb561fd7d,"SelectionScreen.setTheme","SelectionScreen.hx",97,0xa6169506)

void SelectionScreen_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_7b18e0c5e70cba55_10_new)
HXLINE(  25)		this->ibmSS = ( (int)(::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(HX_("0x000300",0b,55,c3,2b))) );
HXLINE(  24)		this->bwSS = -16777216;
HXLINE(  23)		this->reverseSS = -1;
HXLINE(  22)		this->n6610SS = ( (int)(::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(HX_("0x4756de",6d,5b,4f,d0))) );
HXLINE(  21)		this->n3310SS = ( (int)(::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(HX_("0x80c215",53,58,53,80))) );
HXLINE(  10)		super::__construct(MaxSize);
            	}

Dynamic SelectionScreen_obj::__CreateEmpty() { return new SelectionScreen_obj; }

void *SelectionScreen_obj::_hx_vtable = 0;

Dynamic SelectionScreen_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SelectionScreen_obj > _hx_result = new SelectionScreen_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SelectionScreen_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x18b22514) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x18b22514;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void SelectionScreen_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_7b18e0c5e70cba55_30_create)
HXLINE(  31)		::flixel::FlxG_obj::camera->fade(-16777216,((Float)0.33),true,null(),null());
HXLINE(  33)		this->backColorSS = this->get_bgColor();
HXLINE(  35)		this->titleSS =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,0,0,HX_("Choose\ngame mode",be,5a,39,8a),16,null());
HXLINE(  36)		this->titleSS->set_alignment(HX_("center",d5,25,db,05));
HXLINE(  37)		{
HXLINE(  37)			 ::flixel::text::FlxText _this = this->titleSS;
HXDLIN(  37)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::X_dyn();
HXDLIN(  37)			if (::hx::IsNull( axes )) {
HXLINE(  37)				axes = ::flixel::util::FlxAxes_obj::XY_dyn();
            			}
HXDLIN(  37)			bool _hx_tmp;
HXDLIN(  37)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  37)					_hx_tmp = true;
            				}
            				break;
            				default:{
HXLINE(  37)					_hx_tmp = false;
            				}
            			}
HXDLIN(  37)			if (_hx_tmp) {
HXLINE(  37)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  37)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  37)			bool _hx_tmp1;
HXDLIN(  37)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  37)					_hx_tmp1 = true;
            				}
            				break;
            				default:{
HXLINE(  37)					_hx_tmp1 = false;
            				}
            			}
HXDLIN(  37)			if (_hx_tmp1) {
HXLINE(  37)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  37)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  38)		this->add(this->titleSS);
HXLINE(  40)		this->buttons =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  42)		this->borderButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,0,0,null(),this->borderedMode_dyn());
HXLINE(  43)		this->borderButton->loadGraphic(HX_("assets/images/borderButton.png",e4,2d,ee,ef),true,74,18,null(),null());
HXLINE(  44)		 ::flixel::ui::FlxButton _hx_tmp2 = this->borderButton;
HXDLIN(  44)		Float _hx_tmp3 = (( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) ));
HXDLIN(  44)		_hx_tmp2->set_x((_hx_tmp3 - this->borderButton->get_width()));
HXLINE(  45)		this->borderButton->set_y(((( (Float)(::flixel::FlxG_obj::height) ) / ( (Float)(2) )) + 10));
HXLINE(  46)		this->add(this->borderButton);
HXLINE(  47)		this->buttons->add(this->borderButton).StaticCast<  ::flixel::ui::FlxButton >();
HXLINE(  49)		this->unborderButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,0,0,null(),this->unborderedMode_dyn());
HXLINE(  50)		this->unborderButton->loadGraphic(HX_("assets/images/unborderButton.png",fd,96,5d,cd),true,74,18,null(),null());
HXLINE(  51)		this->unborderButton->set_x((( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) )));
HXLINE(  52)		this->unborderButton->set_y(((( (Float)(::flixel::FlxG_obj::height) ) / ( (Float)(2) )) + 10));
HXLINE(  53)		this->add(this->unborderButton);
HXLINE(  54)		this->buttons->add(this->unborderButton).StaticCast<  ::flixel::ui::FlxButton >();
HXLINE(  56)		this->backButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,0,0,null(),this->back_dyn());
HXLINE(  57)		this->backButton->loadGraphic(HX_("assets/images/backButton.png",1f,62,40,ad),true,74,18,null(),null());
HXLINE(  58)		 ::flixel::ui::FlxButton _hx_tmp4 = this->backButton;
HXDLIN(  58)		int _hx_tmp5 = ::flixel::FlxG_obj::width;
HXDLIN(  58)		_hx_tmp4->set_x(((( (Float)(_hx_tmp5) ) - this->backButton->get_width()) / ( (Float)(2) )));
HXLINE(  59)		 ::flixel::ui::FlxButton _hx_tmp6 = this->backButton;
HXDLIN(  59)		Float _hx_tmp7 = this->unborderButton->y;
HXDLIN(  59)		_hx_tmp6->set_y(((_hx_tmp7 + this->unborderButton->get_height()) + 4));
HXLINE(  60)		this->add(this->backButton);
HXLINE(  61)		this->buttons->add(this->backButton).StaticCast<  ::flixel::ui::FlxButton >();
HXLINE(  63)		this->borderButton->onOver->sound = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/button2.wav",ff,4f,69,f1),((Float)0.2),null(),null(),null(),null(),null(),null(),null());
HXLINE(  64)		this->unborderButton->onOver->sound = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/button2.wav",ff,4f,69,f1),((Float)0.2),null(),null(),null(),null(),null(),null(),null());
HXLINE(  65)		this->backButton->onOver->sound = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/button3.wav",80,e4,cf,84),((Float)0.2),null(),null(),null(),null(),null(),null(),null());
HXLINE(  67)		this->setTheme();
            	}


void SelectionScreen_obj::back(){
            	HX_GC_STACKFRAME(&_hx_pos_7b18e0c5e70cba55_72_back)
HXDLIN(  72)		 ::flixel::FlxState nextState =  ::StartScreen_obj::__alloc( HX_CTX ,null());
HXDLIN(  72)		if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXDLIN(  72)			::flixel::FlxG_obj::game->_requestedState = nextState;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SelectionScreen_obj,back,(void))

void SelectionScreen_obj::borderedMode(){
            	HX_GC_STACKFRAME(&_hx_pos_7b18e0c5e70cba55_76_borderedMode)
HXLINE(  77)		::SelectionScreen_obj::bordered = true;
HXLINE(  78)		{
HXLINE(  78)			 ::flixel::FlxState nextState =  ::PlayState_obj::__alloc( HX_CTX ,null());
HXDLIN(  78)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  78)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SelectionScreen_obj,borderedMode,(void))

void SelectionScreen_obj::unborderedMode(){
            	HX_GC_STACKFRAME(&_hx_pos_7b18e0c5e70cba55_82_unborderedMode)
HXLINE(  83)		::SelectionScreen_obj::bordered = false;
HXLINE(  84)		{
HXLINE(  84)			 ::flixel::FlxState nextState =  ::PlayState_obj::__alloc( HX_CTX ,null());
HXDLIN(  84)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  84)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SelectionScreen_obj,unborderedMode,(void))

void SelectionScreen_obj::buttonColor(int color){
            	HX_STACKFRAME(&_hx_pos_7b18e0c5e70cba55_89_buttonColor)
HXDLIN(  89)		int _g = 0;
HXDLIN(  89)		int _g1 = this->buttons->members->get_length();
HXDLIN(  89)		while((_g < _g1)){
HXDLIN(  89)			_g = (_g + 1);
HXDLIN(  89)			int i = (_g - 1);
HXLINE(  91)			Dynamic( this->buttons->members->__get(i)).StaticCast<  ::flixel::ui::FlxButton >()->set_color(color);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SelectionScreen_obj,buttonColor,(void))

void SelectionScreen_obj::setTheme(){
            	HX_STACKFRAME(&_hx_pos_7b18e0c5e70cba55_97_setTheme)
HXDLIN(  97)		if ((this->backColorSS == this->n3310SS)) {
HXLINE(  99)			this->titleSS->set_color(2242562);
HXLINE( 100)			this->buttonColor(2242562);
            		}
            		else {
HXLINE( 102)			if ((this->backColorSS == this->n6610SS)) {
HXLINE( 104)				this->titleSS->set_color(66847);
HXLINE( 105)				this->buttonColor(66847);
            			}
            			else {
HXLINE( 107)				if ((this->backColorSS == this->reverseSS)) {
HXLINE( 109)					this->titleSS->set_color(-16777216);
HXLINE( 110)					this->buttonColor(-16777216);
            				}
            				else {
HXLINE( 112)					if ((this->backColorSS == this->bwSS)) {
HXLINE( 114)						this->titleSS->set_color(-1);
HXLINE( 115)						this->buttonColor(-1);
            					}
            					else {
HXLINE( 117)						if ((this->backColorSS == this->ibmSS)) {
HXLINE( 119)							this->titleSS->set_color(65306);
HXLINE( 120)							this->buttonColor(65306);
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SelectionScreen_obj,setTheme,(void))

bool SelectionScreen_obj::bordered;


::hx::ObjectPtr< SelectionScreen_obj > SelectionScreen_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< SelectionScreen_obj > __this = new SelectionScreen_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< SelectionScreen_obj > SelectionScreen_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	SelectionScreen_obj *__this = (SelectionScreen_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SelectionScreen_obj), true, "SelectionScreen"));
	*(void **)__this = SelectionScreen_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

SelectionScreen_obj::SelectionScreen_obj()
{
}

void SelectionScreen_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SelectionScreen);
	HX_MARK_MEMBER_NAME(titleSS,"titleSS");
	HX_MARK_MEMBER_NAME(borderButton,"borderButton");
	HX_MARK_MEMBER_NAME(unborderButton,"unborderButton");
	HX_MARK_MEMBER_NAME(backButton,"backButton");
	HX_MARK_MEMBER_NAME(buttons,"buttons");
	HX_MARK_MEMBER_NAME(backColorSS,"backColorSS");
	HX_MARK_MEMBER_NAME(n3310SS,"n3310SS");
	HX_MARK_MEMBER_NAME(n6610SS,"n6610SS");
	HX_MARK_MEMBER_NAME(reverseSS,"reverseSS");
	HX_MARK_MEMBER_NAME(bwSS,"bwSS");
	HX_MARK_MEMBER_NAME(ibmSS,"ibmSS");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SelectionScreen_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(titleSS,"titleSS");
	HX_VISIT_MEMBER_NAME(borderButton,"borderButton");
	HX_VISIT_MEMBER_NAME(unborderButton,"unborderButton");
	HX_VISIT_MEMBER_NAME(backButton,"backButton");
	HX_VISIT_MEMBER_NAME(buttons,"buttons");
	HX_VISIT_MEMBER_NAME(backColorSS,"backColorSS");
	HX_VISIT_MEMBER_NAME(n3310SS,"n3310SS");
	HX_VISIT_MEMBER_NAME(n6610SS,"n6610SS");
	HX_VISIT_MEMBER_NAME(reverseSS,"reverseSS");
	HX_VISIT_MEMBER_NAME(bwSS,"bwSS");
	HX_VISIT_MEMBER_NAME(ibmSS,"ibmSS");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SelectionScreen_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bwSS") ) { return ::hx::Val( bwSS ); }
		if (HX_FIELD_EQ(inName,"back") ) { return ::hx::Val( back_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ibmSS") ) { return ::hx::Val( ibmSS ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"titleSS") ) { return ::hx::Val( titleSS ); }
		if (HX_FIELD_EQ(inName,"buttons") ) { return ::hx::Val( buttons ); }
		if (HX_FIELD_EQ(inName,"n3310SS") ) { return ::hx::Val( n3310SS ); }
		if (HX_FIELD_EQ(inName,"n6610SS") ) { return ::hx::Val( n6610SS ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setTheme") ) { return ::hx::Val( setTheme_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"reverseSS") ) { return ::hx::Val( reverseSS ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"backButton") ) { return ::hx::Val( backButton ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"backColorSS") ) { return ::hx::Val( backColorSS ); }
		if (HX_FIELD_EQ(inName,"buttonColor") ) { return ::hx::Val( buttonColor_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"borderButton") ) { return ::hx::Val( borderButton ); }
		if (HX_FIELD_EQ(inName,"borderedMode") ) { return ::hx::Val( borderedMode_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"unborderButton") ) { return ::hx::Val( unborderButton ); }
		if (HX_FIELD_EQ(inName,"unborderedMode") ) { return ::hx::Val( unborderedMode_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool SelectionScreen_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"bordered") ) { outValue = ( bordered ); return true; }
	}
	return false;
}

::hx::Val SelectionScreen_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bwSS") ) { bwSS=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ibmSS") ) { ibmSS=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"titleSS") ) { titleSS=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buttons") ) { buttons=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"n3310SS") ) { n3310SS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"n6610SS") ) { n6610SS=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"reverseSS") ) { reverseSS=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"backButton") ) { backButton=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"backColorSS") ) { backColorSS=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"borderButton") ) { borderButton=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"unborderButton") ) { unborderButton=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SelectionScreen_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"bordered") ) { bordered=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void SelectionScreen_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("titleSS",38,f4,5d,e5));
	outFields->push(HX_("borderButton",fe,9b,19,37));
	outFields->push(HX_("unborderButton",d7,a3,06,29));
	outFields->push(HX_("backButton",79,47,6a,18));
	outFields->push(HX_("buttons",41,52,75,ca));
	outFields->push(HX_("backColorSS",5c,09,85,69));
	outFields->push(HX_("n3310SS",cd,2c,64,c0));
	outFields->push(HX_("n6610SS",6d,ff,a9,ad));
	outFields->push(HX_("reverseSS",42,8e,56,fd));
	outFields->push(HX_("bwSS",b5,7d,21,41));
	outFields->push(HX_("ibmSS",14,d0,2c,b6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SelectionScreen_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(SelectionScreen_obj,titleSS),HX_("titleSS",38,f4,5d,e5)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(SelectionScreen_obj,borderButton),HX_("borderButton",fe,9b,19,37)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(SelectionScreen_obj,unborderButton),HX_("unborderButton",d7,a3,06,29)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(SelectionScreen_obj,backButton),HX_("backButton",79,47,6a,18)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(SelectionScreen_obj,buttons),HX_("buttons",41,52,75,ca)},
	{::hx::fsInt,(int)offsetof(SelectionScreen_obj,backColorSS),HX_("backColorSS",5c,09,85,69)},
	{::hx::fsInt,(int)offsetof(SelectionScreen_obj,n3310SS),HX_("n3310SS",cd,2c,64,c0)},
	{::hx::fsInt,(int)offsetof(SelectionScreen_obj,n6610SS),HX_("n6610SS",6d,ff,a9,ad)},
	{::hx::fsInt,(int)offsetof(SelectionScreen_obj,reverseSS),HX_("reverseSS",42,8e,56,fd)},
	{::hx::fsInt,(int)offsetof(SelectionScreen_obj,bwSS),HX_("bwSS",b5,7d,21,41)},
	{::hx::fsInt,(int)offsetof(SelectionScreen_obj,ibmSS),HX_("ibmSS",14,d0,2c,b6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo SelectionScreen_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &SelectionScreen_obj::bordered,HX_("bordered",4b,b8,f8,58)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String SelectionScreen_obj_sMemberFields[] = {
	HX_("titleSS",38,f4,5d,e5),
	HX_("borderButton",fe,9b,19,37),
	HX_("unborderButton",d7,a3,06,29),
	HX_("backButton",79,47,6a,18),
	HX_("buttons",41,52,75,ca),
	HX_("backColorSS",5c,09,85,69),
	HX_("n3310SS",cd,2c,64,c0),
	HX_("n6610SS",6d,ff,a9,ad),
	HX_("reverseSS",42,8e,56,fd),
	HX_("bwSS",b5,7d,21,41),
	HX_("ibmSS",14,d0,2c,b6),
	HX_("create",fc,66,0f,7c),
	HX_("back",27,da,10,41),
	HX_("borderedMode",4e,39,fc,51),
	HX_("unborderedMode",27,41,e9,43),
	HX_("buttonColor",11,32,07,98),
	HX_("setTheme",07,e7,ba,1d),
	::String(null()) };

static void SelectionScreen_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SelectionScreen_obj::bordered,"bordered");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SelectionScreen_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SelectionScreen_obj::bordered,"bordered");
};

#endif

::hx::Class SelectionScreen_obj::__mClass;

static ::String SelectionScreen_obj_sStaticFields[] = {
	HX_("bordered",4b,b8,f8,58),
	::String(null())
};

void SelectionScreen_obj::__register()
{
	SelectionScreen_obj _hx_dummy;
	SelectionScreen_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("SelectionScreen",b8,f0,81,1d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SelectionScreen_obj::__GetStatic;
	__mClass->mSetStaticField = &SelectionScreen_obj::__SetStatic;
	__mClass->mMarkFunc = SelectionScreen_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SelectionScreen_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SelectionScreen_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SelectionScreen_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SelectionScreen_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SelectionScreen_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SelectionScreen_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

