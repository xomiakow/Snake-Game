#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Apple
#include <Apple.h>
#endif
#ifndef INCLUDED_HUD
#include <HUD.h>
#endif
#ifndef INCLUDED_Head
#include <Head.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Segment
#include <Segment.h>
#endif
#ifndef INCLUDED_SelectionScreen
#include <SelectionScreen.h>
#endif
#ifndef INCLUDED_StartScreen
#include <StartScreen.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
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
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_af23706db05c7feb_19_new,"PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",19,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_58_create,"PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",58,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_99_gameMode,"PlayState","gameMode",0x634a5ba6,"PlayState.gameMode","PlayState.hx",99,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_116_hudColor,"PlayState","hudColor",0xc5cb205d,"PlayState.hudColor","PlayState.hx",116,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_165_textColor,"PlayState","textColor",0x1f9cc525,"PlayState.textColor","PlayState.hx",165,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_189_spriteColor,"PlayState","spriteColor",0x8a4da08d,"PlayState.spriteColor","PlayState.hx",189,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_213_buildBorders,"PlayState","buildBorders",0x6076a42a,"PlayState.buildBorders","PlayState.hx",213,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_263_buildSnake,"PlayState","buildSnake",0xa09fe9e3,"PlayState.buildSnake","PlayState.hx",263,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_271_placeApple,"PlayState","placeApple",0x84e3c484,"PlayState.placeApple","PlayState.hx",271,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_289_moveSnake,"PlayState","moveSnake",0x7a2db95e,"PlayState.moveSnake","PlayState.hx",289,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_341_setDirection,"PlayState","setDirection",0x4fc595ee,"PlayState.setDirection","PlayState.hx",341,0xb30d7781)
static const int _hx_array_data_46c2835d_13[] = {
	(int)38,(int)87,
};
static const int _hx_array_data_46c2835d_14[] = {
	(int)40,(int)83,
};
static const int _hx_array_data_46c2835d_15[] = {
	(int)37,(int)65,
};
static const int _hx_array_data_46c2835d_16[] = {
	(int)39,(int)68,
};
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_360_eatApple,"PlayState","eatApple",0x1a1b5cd3,"PlayState.eatApple","PlayState.hx",360,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_390_gameOver,"PlayState","gameOver",0x64a21997,"PlayState.gameOver","PlayState.hx",390,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_405_checkHighscore,"PlayState","checkHighscore",0xc1d2a8b9,"PlayState.checkHighscore","PlayState.hx",405,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_424_update,"PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",424,0xb30d7781)

void PlayState_obj::__construct( ::Dynamic MaxSize){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_19_new)
HXLINE(  55)		this->nextStep = 1;
HXLINE(  54)		this->lastStep = 1;
HXLINE(  44)		this->ibm = ( (int)(::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(HX_("0x000300",0b,55,c3,2b))) );
HXLINE(  43)		this->bw = -16777216;
HXLINE(  42)		this->reverse = -1;
HXLINE(  41)		this->n6610 = ( (int)(::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(HX_("0x4756de",6d,5b,4f,d0))) );
HXLINE(  40)		this->n3310 = ( (int)(::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(HX_("0x80c215",53,58,53,80))) );
HXLINE(  35)		this->speed = ((Float)3);
HXLINE(  29)		this->countFrames = ((Float)0);
HXLINE(  23)		this->save =  ::flixel::util::FlxSave_obj::__alloc( HX_CTX );
HXLINE(  21)		this->score = 0;
HXLINE(  19)		super::__construct(MaxSize);
            	}

Dynamic PlayState_obj::__CreateEmpty() { return new PlayState_obj; }

void *PlayState_obj::_hx_vtable = 0;

Dynamic PlayState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PlayState_obj > _hx_result = new PlayState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PlayState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x0a05f89d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0a05f89d;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void PlayState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_58_create)
HXLINE(  60)		::flixel::FlxG_obj::mouse->set_visible(false);
HXLINE(  63)		this->gameOverSong = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/end.wav",da,16,01,17),1,null(),null(),null(),null(),null(),null(),null());
HXLINE(  64)		this->appleSong = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/aplle.wav",15,1b,18,69),1,null(),null(),null(),null(),null(),null(),null());
HXLINE(  66)		this->backColor = this->get_bgColor();
HXLINE(  68)		this->gameMode();
HXLINE(  70)		Float X = this->head->x;
HXDLIN(  70)		Float Y = this->head->y;
HXDLIN(  70)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);
HXDLIN(  70)		point->_inPool = false;
HXDLIN(  70)		this->trail = ::Array_obj< ::Dynamic>::__new(1)->init(0,point);
HXLINE(  72)		this->body =  ::flixel::group::FlxTypedSpriteGroup_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  73)		this->add(this->body);
HXLINE(  75)		{
HXLINE(  76)			{
HXLINE(  77)				this->buildSnake();
HXLINE(  78)				this->moveSnake();
            			}
HXLINE(  76)			{
HXLINE(  77)				this->buildSnake();
HXLINE(  78)				this->moveSnake();
            			}
HXLINE(  76)			{
HXLINE(  77)				this->buildSnake();
HXLINE(  78)				this->moveSnake();
            			}
            		}
HXLINE(  81)		this->spriteColor(this->head);
HXLINE(  82)		this->add(this->head);
HXLINE(  84)		this->apple =  ::Apple_obj::__alloc( HX_CTX ,( (Float)(-20) ),( (Float)(-20) ));
HXLINE(  85)		this->spriteColor(this->apple);
HXLINE(  86)		this->placeApple(null(),null());
HXLINE(  87)		this->add(this->apple);
HXLINE(  89)		this->HUD =  ::HUD_obj::__alloc( HX_CTX );
HXLINE(  90)		this->add(this->HUD);
HXLINE(  91)		this->hudColor();
HXLINE(  92)		this->checkHighscore();
HXLINE(  94)		this->super::create();
            	}


void PlayState_obj::gameMode(){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_99_gameMode)
HXDLIN(  99)		if (::SelectionScreen_obj::bordered) {
HXLINE( 101)			this->borders =  ::flixel::group::FlxTypedSpriteGroup_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE( 102)			this->add(this->borders);
HXLINE( 103)			this->buildBorders();
HXLINE( 104)			this->head =  ::Head_obj::__alloc( HX_CTX ,40,80);
HXLINE( 105)			this->reward = 7;
            		}
            		else {
HXLINE( 109)			this->head =  ::Head_obj::__alloc( HX_CTX ,40,40);
HXLINE( 110)			this->reward = 3;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,gameMode,(void))

void PlayState_obj::hudColor(){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_116_hudColor)
HXDLIN( 116)		if ((this->backColor == this->n3310)) {
HXLINE( 118)			this->HUD->background->makeGraphic(::flixel::FlxG_obj::width,16,this->n3310,null(),null());
HXLINE( 119)			 ::flixel::FlxSprite _hx_tmp = this->HUD->background;
HXDLIN( 119)			int _hx_tmp1 = ::flixel::FlxG_obj::width;
HXDLIN( 119)			::flixel::util::FlxSpriteUtil_obj::drawRect(_hx_tmp,( (Float)(0) ),( (Float)(15) ),( (Float)(_hx_tmp1) ),( (Float)(1) ),::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(HX_("0x223802",ef,a5,46,21)),null(),null());
HXLINE( 120)			this->textColor(this->HUD->highscoreDisplay);
HXLINE( 121)			this->textColor(this->HUD->scoreDisplay);
HXLINE( 122)			this->textColor(this->HUD->textDisplay);
HXLINE( 123)			this->textColor(this->HUD->gameOverText);
            		}
            		else {
HXLINE( 125)			if ((this->backColor == this->n6610)) {
HXLINE( 127)				this->HUD->background->makeGraphic(::flixel::FlxG_obj::width,16,this->n6610,null(),null());
HXLINE( 128)				 ::flixel::FlxSprite _hx_tmp = this->HUD->background;
HXDLIN( 128)				int _hx_tmp1 = ::flixel::FlxG_obj::width;
HXDLIN( 128)				::flixel::util::FlxSpriteUtil_obj::drawRect(_hx_tmp,( (Float)(0) ),( (Float)(15) ),( (Float)(_hx_tmp1) ),( (Float)(1) ),::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(HX_("0x030a38",e1,fc,19,e6)),null(),null());
HXLINE( 129)				this->textColor(this->HUD->highscoreDisplay);
HXLINE( 130)				this->textColor(this->HUD->scoreDisplay);
HXLINE( 131)				this->textColor(this->HUD->textDisplay);
HXLINE( 132)				this->textColor(this->HUD->gameOverText);
            			}
            			else {
HXLINE( 134)				if ((this->backColor == this->reverse)) {
HXLINE( 136)					this->HUD->background->makeGraphic(::flixel::FlxG_obj::width,16,this->reverse,null(),null());
HXLINE( 137)					::flixel::util::FlxSpriteUtil_obj::drawRect(this->HUD->background,( (Float)(0) ),( (Float)(15) ),( (Float)(::flixel::FlxG_obj::width) ),( (Float)(1) ),-16777216,null(),null());
HXLINE( 138)					this->textColor(this->HUD->highscoreDisplay);
HXLINE( 139)					this->textColor(this->HUD->scoreDisplay);
HXLINE( 140)					this->textColor(this->HUD->textDisplay);
HXLINE( 141)					this->textColor(this->HUD->gameOverText);
            				}
            				else {
HXLINE( 143)					if ((this->backColor == this->bw)) {
HXLINE( 145)						this->HUD->background->makeGraphic(::flixel::FlxG_obj::width,16,this->bw,null(),null());
HXLINE( 146)						::flixel::util::FlxSpriteUtil_obj::drawRect(this->HUD->background,( (Float)(0) ),( (Float)(15) ),( (Float)(::flixel::FlxG_obj::width) ),( (Float)(1) ),-1,null(),null());
HXLINE( 147)						this->textColor(this->HUD->highscoreDisplay);
HXLINE( 148)						this->textColor(this->HUD->scoreDisplay);
HXLINE( 149)						this->textColor(this->HUD->textDisplay);
HXLINE( 150)						this->textColor(this->HUD->gameOverText);
            					}
            					else {
HXLINE( 152)						if ((this->backColor == this->ibm)) {
HXLINE( 154)							this->HUD->background->makeGraphic(::flixel::FlxG_obj::width,16,this->ibm,null(),null());
HXLINE( 155)							 ::flixel::FlxSprite _hx_tmp = this->HUD->background;
HXDLIN( 155)							int _hx_tmp1 = ::flixel::FlxG_obj::width;
HXDLIN( 155)							::flixel::util::FlxSpriteUtil_obj::drawRect(_hx_tmp,( (Float)(0) ),( (Float)(15) ),( (Float)(_hx_tmp1) ),( (Float)(1) ),::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(HX_("0x00ff1a",98,8e,9b,4f)),null(),null());
HXLINE( 156)							this->textColor(this->HUD->highscoreDisplay);
HXLINE( 157)							this->textColor(this->HUD->scoreDisplay);
HXLINE( 158)							this->textColor(this->HUD->textDisplay);
HXLINE( 159)							this->textColor(this->HUD->gameOverText);
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,hudColor,(void))

void PlayState_obj::textColor( ::flixel::text::FlxText Text){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_165_textColor)
HXDLIN( 165)		if ((this->backColor == this->n3310)) {
HXLINE( 167)			Text->set_color(2242562);
            		}
            		else {
HXLINE( 169)			if ((this->backColor == this->n6610)) {
HXLINE( 171)				Text->set_color(199224);
            			}
            			else {
HXLINE( 173)				if ((this->backColor == this->reverse)) {
HXLINE( 175)					Text->set_color(-16777216);
            				}
            				else {
HXLINE( 177)					if ((this->backColor == this->bw)) {
HXLINE( 179)						Text->set_color(-1);
            					}
            					else {
HXLINE( 181)						if ((this->backColor == this->ibm)) {
HXLINE( 183)							Text->set_color(65306);
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,textColor,(void))

void PlayState_obj::spriteColor( ::flixel::FlxSprite Sprite){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_189_spriteColor)
HXDLIN( 189)		if ((this->backColor == this->n3310)) {
HXLINE( 191)			Sprite->set_color(2242562);
            		}
            		else {
HXLINE( 193)			if ((this->backColor == this->n6610)) {
HXLINE( 195)				Sprite->set_color(199224);
            			}
            			else {
HXLINE( 197)				if ((this->backColor == this->reverse)) {
HXLINE( 199)					Sprite->set_color(-16777216);
            				}
            				else {
HXLINE( 201)					if ((this->backColor == this->bw)) {
HXLINE( 203)						Sprite->set_color(-1);
            					}
            					else {
HXLINE( 205)						if ((this->backColor == this->ibm)) {
HXLINE( 207)							Sprite->set_color(65306);
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,spriteColor,(void))

void PlayState_obj::buildBorders(){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_213_buildBorders)
HXDLIN( 213)		int _g = 0;
HXDLIN( 213)		while((_g < 4)){
HXDLIN( 213)			_g = (_g + 1);
HXDLIN( 213)			int i = (_g - 1);
HXLINE( 215)			this->wall =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-100,-100,null());
HXLINE( 216)			this->visibleWall =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-100,-100,null());
HXLINE( 218)			this->wall->set_alpha(( (Float)(0) ));
HXLINE( 219)			this->spriteColor(this->visibleWall);
HXLINE( 220)			switch((int)(i)){
            				case (int)0: {
HXLINE( 223)					this->wall->makeGraphic((::flixel::FlxG_obj::width - 6),1,null(),null(),null());
HXLINE( 224)					this->wall->set_x(( (Float)(3) ));
HXLINE( 225)					this->wall->set_y(( (Float)(18) ));
HXLINE( 226)					this->borders->add(this->wall).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 227)					this->visibleWall->makeGraphic((::flixel::FlxG_obj::width - 8),1,null(),null(),null());
HXLINE( 228)					this->visibleWall->set_x(( (Float)(4) ));
HXLINE( 229)					this->visibleWall->set_y(( (Float)(19) ));
HXLINE( 230)					this->add(this->visibleWall);
            				}
            				break;
            				case (int)1: {
HXLINE( 232)					this->wall->makeGraphic((::flixel::FlxG_obj::width - 6),1,null(),null(),null());
HXLINE( 233)					this->wall->set_x(( (Float)(3) ));
HXLINE( 234)					this->wall->set_y(( (Float)((::flixel::FlxG_obj::height - 3)) ));
HXLINE( 235)					this->borders->add(this->wall).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 236)					this->visibleWall->makeGraphic((::flixel::FlxG_obj::width - 8),1,null(),null(),null());
HXLINE( 237)					this->visibleWall->set_x(( (Float)(4) ));
HXLINE( 238)					this->visibleWall->set_y(( (Float)((::flixel::FlxG_obj::height - 4)) ));
HXLINE( 239)					this->add(this->visibleWall);
            				}
            				break;
            				case (int)2: {
HXLINE( 241)					this->wall->makeGraphic(1,(::flixel::FlxG_obj::height - 20),null(),null(),null());
HXLINE( 242)					this->wall->set_x(( (Float)(2) ));
HXLINE( 243)					this->wall->set_y(( (Float)(18) ));
HXLINE( 244)					this->borders->add(this->wall).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 245)					this->visibleWall->makeGraphic(1,(::flixel::FlxG_obj::height - 22),null(),null(),null());
HXLINE( 246)					this->visibleWall->set_x(( (Float)(3) ));
HXLINE( 247)					this->visibleWall->set_y(( (Float)(19) ));
HXLINE( 248)					this->add(this->visibleWall);
            				}
            				break;
            				case (int)3: {
HXLINE( 250)					this->wall->makeGraphic(1,(::flixel::FlxG_obj::height - 20),null(),null(),null());
HXLINE( 251)					this->wall->set_x(( (Float)((::flixel::FlxG_obj::width - 3)) ));
HXLINE( 252)					this->wall->set_y(( (Float)(18) ));
HXLINE( 253)					this->borders->add(this->wall).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 254)					this->visibleWall->makeGraphic(1,(::flixel::FlxG_obj::height - 22),null(),null(),null());
HXLINE( 255)					this->visibleWall->set_x(( (Float)((::flixel::FlxG_obj::width - 4)) ));
HXLINE( 256)					this->visibleWall->set_y(( (Float)(19) ));
HXLINE( 257)					this->add(this->visibleWall);
            				}
            				break;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,buildBorders,(void))

void PlayState_obj::buildSnake(){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_263_buildSnake)
HXLINE( 264)		this->segment =  ::Segment_obj::__alloc( HX_CTX ,-40,-40);
HXLINE( 265)		this->spriteColor(this->segment);
HXLINE( 266)		this->body->add(this->segment).StaticCast<  ::flixel::FlxSprite >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,buildSnake,(void))

void PlayState_obj::placeApple( ::flixel::FlxObject Object1, ::flixel::FlxObject Object2){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_271_placeApple)
HXDLIN( 271)		if (::SelectionScreen_obj::bordered) {
HXLINE( 281)			 ::flixel::FlxSprite _hx_tmp = this->apple;
HXDLIN( 281)			_hx_tmp->set_x(( (Float)((::flixel::FlxG_obj::random->_hx_int(1,(::Math_obj::floor((( (Float)((::flixel::FlxG_obj::width - 4)) ) / ( (Float)(4) ))) - 1),null()) * 4)) ));
HXLINE( 282)			 ::flixel::FlxSprite _hx_tmp1 = this->apple;
HXDLIN( 282)			_hx_tmp1->set_y(( (Float)((::flixel::FlxG_obj::random->_hx_int(5,(::Math_obj::floor((( (Float)((::flixel::FlxG_obj::height - 4)) ) / ( (Float)(4) ))) - 1),null()) * 4)) ));
HXLINE( 284)			::flixel::FlxG_obj::overlap(this->apple,this->body,this->placeApple_dyn(),null());
            		}
            		else {
HXLINE( 274)			 ::flixel::FlxSprite _hx_tmp = this->apple;
HXDLIN( 274)			_hx_tmp->set_x(( (Float)((::flixel::FlxG_obj::random->_hx_int(0,(::Math_obj::floor((( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(4) ))) - 1),null()) * 4)) ));
HXLINE( 276)			 ::flixel::FlxSprite _hx_tmp1 = this->apple;
HXDLIN( 276)			_hx_tmp1->set_y(( (Float)((::flixel::FlxG_obj::random->_hx_int(4,(::Math_obj::floor((( (Float)((::flixel::FlxG_obj::height - 16)) ) / ( (Float)(4) ))) - 1),null()) * 4)) ));
HXLINE( 279)			::flixel::FlxG_obj::overlap(this->apple,this->body,this->placeApple_dyn(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,placeApple,(void))

void PlayState_obj::moveSnake(){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_289_moveSnake)
HXLINE( 290)		::Array< ::Dynamic> _hx_tmp = this->trail;
HXDLIN( 290)		Float X = this->head->x;
HXDLIN( 290)		Float Y = this->head->y;
HXDLIN( 290)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);
HXDLIN( 290)		point->_inPool = false;
HXDLIN( 290)		_hx_tmp->unshift(point);
HXLINE( 292)		if ((this->trail->length > this->body->group->members->get_length())) {
HXLINE( 294)			this->trail->pop().StaticCast<  ::flixel::math::FlxPoint >();
            		}
HXLINE( 297)		switch((int)(this->nextStep)){
            			case (int)1: {
HXLINE( 308)				 ::flixel::FlxSprite fh = this->head;
HXDLIN( 308)				fh->set_x((fh->x - ( (Float)(4) )));
HXLINE( 309)				this->head->animation->play(HX_("lr",86,5e,00,00),null(),null(),null());
HXLINE( 310)				this->head->set_facing(1);
            			}
            			break;
            			case (int)16: {
HXLINE( 312)				 ::flixel::FlxSprite fh = this->head;
HXDLIN( 312)				fh->set_x((fh->x + 4));
HXLINE( 313)				this->head->animation->play(HX_("lr",86,5e,00,00),null(),null(),null());
HXLINE( 314)				this->head->set_facing(16);
            			}
            			break;
            			case (int)256: {
HXLINE( 300)				 ::flixel::FlxSprite fh = this->head;
HXDLIN( 300)				fh->set_y((fh->y - ( (Float)(4) )));
HXLINE( 301)				this->head->animation->play(HX_("ud",4f,66,00,00),null(),null(),null());
HXLINE( 302)				this->head->set_facing(256);
            			}
            			break;
            			case (int)4096: {
HXLINE( 304)				 ::flixel::FlxSprite fh = this->head;
HXDLIN( 304)				fh->set_y((fh->y + 4));
HXLINE( 305)				this->head->animation->play(HX_("ud",4f,66,00,00),null(),null(),null());
HXLINE( 306)				this->head->set_facing(4096);
            			}
            			break;
            		}
HXLINE( 317)		this->lastStep = this->nextStep;
HXLINE( 319)		::flixel::util::FlxSpriteUtil_obj::screenWrap(this->head,true,true,false,false);
HXLINE( 321)		if (!(::SelectionScreen_obj::bordered)) {
HXLINE( 323)			if ((this->head->y > 116)) {
HXLINE( 325)				this->head->set_y(( (Float)(16) ));
            			}
HXLINE( 327)			if ((this->head->y < 16)) {
HXLINE( 329)				this->head->set_y(( (Float)(116) ));
            			}
            		}
HXLINE( 333)		{
HXLINE( 333)			int _g = 0;
HXDLIN( 333)			int _g1 = this->trail->length;
HXDLIN( 333)			while((_g < _g1)){
HXLINE( 333)				_g = (_g + 1);
HXDLIN( 333)				int i = (_g - 1);
HXLINE( 335)				Dynamic( this->body->group->members->__get(i)).StaticCast<  ::flixel::FlxSprite >()->setPosition(this->trail->__get(i).StaticCast<  ::flixel::math::FlxPoint >()->x,this->trail->__get(i).StaticCast<  ::flixel::math::FlxPoint >()->y);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,moveSnake,(void))

void PlayState_obj::setDirection(){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_341_setDirection)
HXDLIN( 341)		bool _hx_tmp;
HXDLIN( 341)		if (::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_46c2835d_13,2),1)) {
HXDLIN( 341)			_hx_tmp = (this->lastStep != 4096);
            		}
            		else {
HXDLIN( 341)			_hx_tmp = false;
            		}
HXDLIN( 341)		if (_hx_tmp) {
HXLINE( 343)			this->nextStep = 256;
            		}
            		else {
HXLINE( 345)			bool _hx_tmp;
HXDLIN( 345)			if (::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_46c2835d_14,2),1)) {
HXLINE( 345)				_hx_tmp = (this->lastStep != 256);
            			}
            			else {
HXLINE( 345)				_hx_tmp = false;
            			}
HXDLIN( 345)			if (_hx_tmp) {
HXLINE( 347)				this->nextStep = 4096;
            			}
            			else {
HXLINE( 349)				bool _hx_tmp;
HXDLIN( 349)				if (::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_46c2835d_15,2),1)) {
HXLINE( 349)					_hx_tmp = (this->lastStep != 16);
            				}
            				else {
HXLINE( 349)					_hx_tmp = false;
            				}
HXDLIN( 349)				if (_hx_tmp) {
HXLINE( 351)					this->nextStep = 1;
            				}
            				else {
HXLINE( 353)					bool _hx_tmp;
HXDLIN( 353)					if (::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_46c2835d_16,2),1)) {
HXLINE( 353)						_hx_tmp = (this->lastStep != 1);
            					}
            					else {
HXLINE( 353)						_hx_tmp = false;
            					}
HXDLIN( 353)					if (_hx_tmp) {
HXLINE( 355)						this->nextStep = 16;
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,setDirection,(void))

void PlayState_obj::eatApple( ::Head head, ::Apple apple){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_360_eatApple)
HXLINE( 361)		switch((int)(this->nextStep)){
            			case (int)1: {
HXLINE( 370)				head->set_facing(1);
HXLINE( 371)				head->animation->play(HX_("openLR",d0,4c,94,21),null(),null(),null());
            			}
            			break;
            			case (int)16: {
HXLINE( 373)				head->set_facing(16);
HXLINE( 374)				head->animation->play(HX_("openLR",d0,4c,94,21),null(),null(),null());
            			}
            			break;
            			case (int)256: {
HXLINE( 364)				head->set_facing(256);
HXLINE( 365)				head->animation->play(HX_("openUD",99,54,94,21),null(),null(),null());
            			}
            			break;
            			case (int)4096: {
HXLINE( 367)				head->set_facing(4096);
HXLINE( 368)				head->animation->play(HX_("openUD",99,54,94,21),null(),null(),null());
            			}
            			break;
            		}
HXLINE( 377)		this->appleSong->play(null(),null(),null());
HXLINE( 379)		this->placeApple(null(),null());
HXLINE( 381)		 ::PlayState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 381)		_hx_tmp->score = (_hx_tmp->score + this->reward);
HXLINE( 382)		this->HUD->updateHUD(this->score);
HXLINE( 384)		this->buildSnake();
HXLINE( 386)		 ::PlayState _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 386)		_hx_tmp1->speed = (_hx_tmp1->speed + ((Float)0.1));
            	}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,eatApple,(void))

void PlayState_obj::gameOver( ::flixel::FlxObject Object1, ::flixel::FlxObject Object2){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_390_gameOver)
HXLINE( 391)		this->head->set_alive(false);
HXLINE( 392)		this->head->set_exists(false);
HXLINE( 393)		{
HXLINE( 393)			int _g = 0;
HXDLIN( 393)			int _g1 = this->body->group->members->get_length();
HXDLIN( 393)			while((_g < _g1)){
HXLINE( 393)				_g = (_g + 1);
HXDLIN( 393)				int i = (_g - 1);
HXLINE( 395)				Dynamic( this->body->group->members->__get(i)).StaticCast<  ::flixel::FlxSprite >()->animation->play(HX_("dead",a4,4e,66,42),null(),null(),null());
            			}
            		}
HXLINE( 398)		this->gameOverSong->play(null(),null(),null());
HXLINE( 399)		this->HUD->endGame();
HXLINE( 400)		this->checkHighscore();
HXLINE( 401)		this->save->close(null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,gameOver,(void))

void PlayState_obj::checkHighscore(){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_405_checkHighscore)
HXLINE( 406)		this->highscore = this->score;
HXLINE( 408)		if (this->save->bind(HX_("Highscore",90,18,b0,92),null())) {
HXLINE( 410)			bool _hx_tmp;
HXDLIN( 410)			if (::hx::IsNotNull( this->save->data->__Field(HX_("highscore",b0,38,dd,f0),::hx::paccDynamic) )) {
HXLINE( 410)				_hx_tmp = ::hx::IsGreater( this->save->data->__Field(HX_("highscore",b0,38,dd,f0),::hx::paccDynamic),this->highscore );
            			}
            			else {
HXLINE( 410)				_hx_tmp = false;
            			}
HXDLIN( 410)			if (_hx_tmp) {
HXLINE( 412)				this->highscore = ( (int)(this->save->data->__Field(HX_("highscore",b0,38,dd,f0),::hx::paccDynamic)) );
            			}
            			else {
HXLINE( 416)				this->save->data->__SetField(HX_("highscore",b0,38,dd,f0),this->highscore,::hx::paccDynamic);
            			}
            		}
HXLINE( 420)		this->HUD->updateHighscore(this->highscore);
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,checkHighscore,(void))

void PlayState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_424_update)
HXLINE( 425)		this->super::update(elapsed);
HXLINE( 427)		if (this->head->alive) {
HXLINE( 429)			::flixel::FlxG_obj::overlap(this->head,this->apple,this->eatApple_dyn(),null());
HXLINE( 430)			::flixel::FlxG_obj::overlap(this->head,this->body,this->gameOver_dyn(),null());
HXLINE( 432)			if (::SelectionScreen_obj::bordered) {
HXLINE( 434)				::flixel::FlxG_obj::overlap(this->head,this->borders,this->gameOver_dyn(),null());
            			}
HXLINE( 437)			 ::PlayState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 437)			_hx_tmp->countFrames = (_hx_tmp->countFrames + this->speed);
HXLINE( 439)			this->setDirection();
HXLINE( 441)			bool _hx_tmp1;
HXDLIN( 441)			if ((this->countFrames > 60)) {
HXLINE( 441)				_hx_tmp1 = this->head->alive;
            			}
            			else {
HXLINE( 441)				_hx_tmp1 = false;
            			}
HXDLIN( 441)			if (_hx_tmp1) {
HXLINE( 443)				this->moveSnake();
HXLINE( 444)				this->countFrames = ( (Float)(0) );
            			}
            		}
HXLINE( 448)		bool _hx_tmp;
HXDLIN( 448)		if (!(this->head->exists)) {
HXLINE( 448)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 448)			_hx_tmp = _this->keyManager->checkStatusUnsafe(82,_this->status);
            		}
            		else {
HXLINE( 448)			_hx_tmp = false;
            		}
HXDLIN( 448)		if (_hx_tmp) {
HXLINE( 450)			 ::flixel::FlxState nextState = ( ( ::flixel::FlxState)(::Type_obj::createInstance(::Type_obj::getClass(::flixel::FlxG_obj::game->_state),::cpp::VirtualArray_obj::__new(0))) );
HXDLIN( 450)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 450)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
HXLINE( 453)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 453)		if (_this->keyManager->checkStatusUnsafe(27,_this->status)) {
HXLINE( 455)			 ::flixel::FlxState nextState =  ::StartScreen_obj::__alloc( HX_CTX ,null());
HXDLIN( 455)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 455)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
            	}



::hx::ObjectPtr< PlayState_obj > PlayState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< PlayState_obj > __this = new PlayState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< PlayState_obj > PlayState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	PlayState_obj *__this = (PlayState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PlayState_obj), true, "PlayState"));
	*(void **)__this = PlayState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(score,"score");
	HX_MARK_MEMBER_NAME(highscore,"highscore");
	HX_MARK_MEMBER_NAME(save,"save");
	HX_MARK_MEMBER_NAME(HUD,"HUD");
	HX_MARK_MEMBER_NAME(gameOverSong,"gameOverSong");
	HX_MARK_MEMBER_NAME(appleSong,"appleSong");
	HX_MARK_MEMBER_NAME(countFrames,"countFrames");
	HX_MARK_MEMBER_NAME(borders,"borders");
	HX_MARK_MEMBER_NAME(wall,"wall");
	HX_MARK_MEMBER_NAME(visibleWall,"visibleWall");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(reward,"reward");
	HX_MARK_MEMBER_NAME(backColor,"backColor");
	HX_MARK_MEMBER_NAME(n3310,"n3310");
	HX_MARK_MEMBER_NAME(n6610,"n6610");
	HX_MARK_MEMBER_NAME(reverse,"reverse");
	HX_MARK_MEMBER_NAME(bw,"bw");
	HX_MARK_MEMBER_NAME(ibm,"ibm");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(segment,"segment");
	HX_MARK_MEMBER_NAME(apple,"apple");
	HX_MARK_MEMBER_NAME(trail,"trail");
	HX_MARK_MEMBER_NAME(body,"body");
	HX_MARK_MEMBER_NAME(headPosition,"headPosition");
	HX_MARK_MEMBER_NAME(lastStep,"lastStep");
	HX_MARK_MEMBER_NAME(nextStep,"nextStep");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(score,"score");
	HX_VISIT_MEMBER_NAME(highscore,"highscore");
	HX_VISIT_MEMBER_NAME(save,"save");
	HX_VISIT_MEMBER_NAME(HUD,"HUD");
	HX_VISIT_MEMBER_NAME(gameOverSong,"gameOverSong");
	HX_VISIT_MEMBER_NAME(appleSong,"appleSong");
	HX_VISIT_MEMBER_NAME(countFrames,"countFrames");
	HX_VISIT_MEMBER_NAME(borders,"borders");
	HX_VISIT_MEMBER_NAME(wall,"wall");
	HX_VISIT_MEMBER_NAME(visibleWall,"visibleWall");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(reward,"reward");
	HX_VISIT_MEMBER_NAME(backColor,"backColor");
	HX_VISIT_MEMBER_NAME(n3310,"n3310");
	HX_VISIT_MEMBER_NAME(n6610,"n6610");
	HX_VISIT_MEMBER_NAME(reverse,"reverse");
	HX_VISIT_MEMBER_NAME(bw,"bw");
	HX_VISIT_MEMBER_NAME(ibm,"ibm");
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(segment,"segment");
	HX_VISIT_MEMBER_NAME(apple,"apple");
	HX_VISIT_MEMBER_NAME(trail,"trail");
	HX_VISIT_MEMBER_NAME(body,"body");
	HX_VISIT_MEMBER_NAME(headPosition,"headPosition");
	HX_VISIT_MEMBER_NAME(lastStep,"lastStep");
	HX_VISIT_MEMBER_NAME(nextStep,"nextStep");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PlayState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bw") ) { return ::hx::Val( bw ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"HUD") ) { return ::hx::Val( HUD ); }
		if (HX_FIELD_EQ(inName,"ibm") ) { return ::hx::Val( ibm ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"save") ) { return ::hx::Val( save ); }
		if (HX_FIELD_EQ(inName,"wall") ) { return ::hx::Val( wall ); }
		if (HX_FIELD_EQ(inName,"head") ) { return ::hx::Val( head ); }
		if (HX_FIELD_EQ(inName,"body") ) { return ::hx::Val( body ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"score") ) { return ::hx::Val( score ); }
		if (HX_FIELD_EQ(inName,"speed") ) { return ::hx::Val( speed ); }
		if (HX_FIELD_EQ(inName,"n3310") ) { return ::hx::Val( n3310 ); }
		if (HX_FIELD_EQ(inName,"n6610") ) { return ::hx::Val( n6610 ); }
		if (HX_FIELD_EQ(inName,"apple") ) { return ::hx::Val( apple ); }
		if (HX_FIELD_EQ(inName,"trail") ) { return ::hx::Val( trail ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"reward") ) { return ::hx::Val( reward ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"borders") ) { return ::hx::Val( borders ); }
		if (HX_FIELD_EQ(inName,"reverse") ) { return ::hx::Val( reverse ); }
		if (HX_FIELD_EQ(inName,"segment") ) { return ::hx::Val( segment ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastStep") ) { return ::hx::Val( lastStep ); }
		if (HX_FIELD_EQ(inName,"nextStep") ) { return ::hx::Val( nextStep ); }
		if (HX_FIELD_EQ(inName,"gameMode") ) { return ::hx::Val( gameMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"hudColor") ) { return ::hx::Val( hudColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"eatApple") ) { return ::hx::Val( eatApple_dyn() ); }
		if (HX_FIELD_EQ(inName,"gameOver") ) { return ::hx::Val( gameOver_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"highscore") ) { return ::hx::Val( highscore ); }
		if (HX_FIELD_EQ(inName,"appleSong") ) { return ::hx::Val( appleSong ); }
		if (HX_FIELD_EQ(inName,"backColor") ) { return ::hx::Val( backColor ); }
		if (HX_FIELD_EQ(inName,"textColor") ) { return ::hx::Val( textColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"moveSnake") ) { return ::hx::Val( moveSnake_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buildSnake") ) { return ::hx::Val( buildSnake_dyn() ); }
		if (HX_FIELD_EQ(inName,"placeApple") ) { return ::hx::Val( placeApple_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"countFrames") ) { return ::hx::Val( countFrames ); }
		if (HX_FIELD_EQ(inName,"visibleWall") ) { return ::hx::Val( visibleWall ); }
		if (HX_FIELD_EQ(inName,"spriteColor") ) { return ::hx::Val( spriteColor_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"gameOverSong") ) { return ::hx::Val( gameOverSong ); }
		if (HX_FIELD_EQ(inName,"headPosition") ) { return ::hx::Val( headPosition ); }
		if (HX_FIELD_EQ(inName,"buildBorders") ) { return ::hx::Val( buildBorders_dyn() ); }
		if (HX_FIELD_EQ(inName,"setDirection") ) { return ::hx::Val( setDirection_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"checkHighscore") ) { return ::hx::Val( checkHighscore_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PlayState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bw") ) { bw=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"HUD") ) { HUD=inValue.Cast<  ::HUD >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ibm") ) { ibm=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"save") ) { save=inValue.Cast<  ::flixel::util::FlxSave >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wall") ) { wall=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"body") ) { body=inValue.Cast<  ::flixel::group::FlxTypedSpriteGroup >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"score") ) { score=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"n3310") ) { n3310=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"n6610") ) { n6610=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"apple") ) { apple=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"trail") ) { trail=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"reward") ) { reward=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"borders") ) { borders=inValue.Cast<  ::flixel::group::FlxTypedSpriteGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"reverse") ) { reverse=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"segment") ) { segment=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastStep") ) { lastStep=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextStep") ) { nextStep=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"highscore") ) { highscore=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"appleSong") ) { appleSong=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backColor") ) { backColor=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"countFrames") ) { countFrames=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visibleWall") ) { visibleWall=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"gameOverSong") ) { gameOverSong=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"headPosition") ) { headPosition=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("score",52,73,d9,78));
	outFields->push(HX_("highscore",b0,38,dd,f0));
	outFields->push(HX_("save",3d,8b,4d,4c));
	outFields->push(HX_("HUD",97,ec,36,00));
	outFields->push(HX_("gameOverSong",5b,0d,a0,6f));
	outFields->push(HX_("appleSong",4f,8a,23,b2));
	outFields->push(HX_("countFrames",d5,6d,23,eb));
	outFields->push(HX_("borders",07,02,e9,32));
	outFields->push(HX_("wall",0a,5d,f2,4e));
	outFields->push(HX_("visibleWall",9c,22,3a,f8));
	outFields->push(HX_("speed",87,97,69,81));
	outFields->push(HX_("reward",6f,1b,1a,0b));
	outFields->push(HX_("backColor",bc,d9,0d,27));
	outFields->push(HX_("n3310",ed,8e,f0,77));
	outFields->push(HX_("n6610",8d,79,ee,79));
	outFields->push(HX_("reverse",22,39,fc,1a));
	outFields->push(HX_("bw",d5,55,00,00));
	outFields->push(HX_("ibm",74,02,50,00));
	outFields->push(HX_("head",20,29,0b,45));
	outFields->push(HX_("segment",b3,cf,ce,a6));
	outFields->push(HX_("apple",5a,85,3b,24));
	outFields->push(HX_("trail",c6,93,1f,16));
	outFields->push(HX_("body",a2,7a,1b,41));
	outFields->push(HX_("headPosition",e9,a5,b5,74));
	outFields->push(HX_("lastStep",c2,00,a5,df));
	outFields->push(HX_("nextStep",df,8d,28,f8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PlayState_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(PlayState_obj,score),HX_("score",52,73,d9,78)},
	{::hx::fsInt,(int)offsetof(PlayState_obj,highscore),HX_("highscore",b0,38,dd,f0)},
	{::hx::fsObject /*  ::flixel::util::FlxSave */ ,(int)offsetof(PlayState_obj,save),HX_("save",3d,8b,4d,4c)},
	{::hx::fsObject /*  ::HUD */ ,(int)offsetof(PlayState_obj,HUD),HX_("HUD",97,ec,36,00)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(PlayState_obj,gameOverSong),HX_("gameOverSong",5b,0d,a0,6f)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(PlayState_obj,appleSong),HX_("appleSong",4f,8a,23,b2)},
	{::hx::fsFloat,(int)offsetof(PlayState_obj,countFrames),HX_("countFrames",d5,6d,23,eb)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedSpriteGroup */ ,(int)offsetof(PlayState_obj,borders),HX_("borders",07,02,e9,32)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(PlayState_obj,wall),HX_("wall",0a,5d,f2,4e)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(PlayState_obj,visibleWall),HX_("visibleWall",9c,22,3a,f8)},
	{::hx::fsFloat,(int)offsetof(PlayState_obj,speed),HX_("speed",87,97,69,81)},
	{::hx::fsInt,(int)offsetof(PlayState_obj,reward),HX_("reward",6f,1b,1a,0b)},
	{::hx::fsInt,(int)offsetof(PlayState_obj,backColor),HX_("backColor",bc,d9,0d,27)},
	{::hx::fsInt,(int)offsetof(PlayState_obj,n3310),HX_("n3310",ed,8e,f0,77)},
	{::hx::fsInt,(int)offsetof(PlayState_obj,n6610),HX_("n6610",8d,79,ee,79)},
	{::hx::fsInt,(int)offsetof(PlayState_obj,reverse),HX_("reverse",22,39,fc,1a)},
	{::hx::fsInt,(int)offsetof(PlayState_obj,bw),HX_("bw",d5,55,00,00)},
	{::hx::fsInt,(int)offsetof(PlayState_obj,ibm),HX_("ibm",74,02,50,00)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(PlayState_obj,head),HX_("head",20,29,0b,45)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(PlayState_obj,segment),HX_("segment",b3,cf,ce,a6)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(PlayState_obj,apple),HX_("apple",5a,85,3b,24)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(PlayState_obj,trail),HX_("trail",c6,93,1f,16)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedSpriteGroup */ ,(int)offsetof(PlayState_obj,body),HX_("body",a2,7a,1b,41)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(PlayState_obj,headPosition),HX_("headPosition",e9,a5,b5,74)},
	{::hx::fsInt,(int)offsetof(PlayState_obj,lastStep),HX_("lastStep",c2,00,a5,df)},
	{::hx::fsInt,(int)offsetof(PlayState_obj,nextStep),HX_("nextStep",df,8d,28,f8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PlayState_obj_sStaticStorageInfo = 0;
#endif

static ::String PlayState_obj_sMemberFields[] = {
	HX_("score",52,73,d9,78),
	HX_("highscore",b0,38,dd,f0),
	HX_("save",3d,8b,4d,4c),
	HX_("HUD",97,ec,36,00),
	HX_("gameOverSong",5b,0d,a0,6f),
	HX_("appleSong",4f,8a,23,b2),
	HX_("countFrames",d5,6d,23,eb),
	HX_("borders",07,02,e9,32),
	HX_("wall",0a,5d,f2,4e),
	HX_("visibleWall",9c,22,3a,f8),
	HX_("speed",87,97,69,81),
	HX_("reward",6f,1b,1a,0b),
	HX_("backColor",bc,d9,0d,27),
	HX_("n3310",ed,8e,f0,77),
	HX_("n6610",8d,79,ee,79),
	HX_("reverse",22,39,fc,1a),
	HX_("bw",d5,55,00,00),
	HX_("ibm",74,02,50,00),
	HX_("head",20,29,0b,45),
	HX_("segment",b3,cf,ce,a6),
	HX_("apple",5a,85,3b,24),
	HX_("trail",c6,93,1f,16),
	HX_("body",a2,7a,1b,41),
	HX_("headPosition",e9,a5,b5,74),
	HX_("lastStep",c2,00,a5,df),
	HX_("nextStep",df,8d,28,f8),
	HX_("create",fc,66,0f,7c),
	HX_("gameMode",75,d4,86,b4),
	HX_("hudColor",2c,99,07,17),
	HX_("textColor",76,01,4a,e3),
	HX_("spriteColor",1e,53,ff,80),
	HX_("buildBorders",79,30,41,45),
	HX_("buildSnake",72,74,87,14),
	HX_("placeApple",13,4f,cb,f8),
	HX_("moveSnake",af,f5,da,3d),
	HX_("setDirection",3d,22,90,34),
	HX_("eatApple",a2,d5,57,6b),
	HX_("gameOver",66,92,de,b5),
	HX_("checkHighscore",c8,26,94,57),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	PlayState_obj _hx_dummy;
	PlayState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PlayState",5d,83,c2,46);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PlayState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PlayState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlayState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlayState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

