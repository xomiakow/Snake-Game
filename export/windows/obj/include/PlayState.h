#ifndef INCLUDED_PlayState
#define INCLUDED_PlayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(Apple)
HX_DECLARE_CLASS0(HUD)
HX_DECLARE_CLASS0(Head)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,FlxSave)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)



class HXCPP_CLASS_ATTRIBUTES PlayState_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef PlayState_obj OBJ_;
		PlayState_obj();

	public:
		enum { _hx_ClassId = 0x0a05f89d };

		void __construct( ::Dynamic MaxSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="PlayState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"PlayState"); }
		static ::hx::ObjectPtr< PlayState_obj > __new( ::Dynamic MaxSize);
		static ::hx::ObjectPtr< PlayState_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PlayState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PlayState",5d,83,c2,46); }

		int score;
		int highscore;
		 ::flixel::util::FlxSave save;
		 ::HUD HUD;
		 ::flixel::_hx_system::FlxSound gameOverSong;
		 ::flixel::_hx_system::FlxSound appleSong;
		Float countFrames;
		 ::flixel::group::FlxTypedSpriteGroup borders;
		 ::flixel::FlxSprite wall;
		 ::flixel::FlxSprite visibleWall;
		Float speed;
		int reward;
		int backColor;
		int n3310;
		int n6610;
		int reverse;
		int bw;
		int ibm;
		 ::flixel::FlxSprite head;
		 ::flixel::FlxSprite segment;
		 ::flixel::FlxSprite apple;
		::Array< ::Dynamic> trail;
		 ::flixel::group::FlxTypedSpriteGroup body;
		 ::flixel::math::FlxPoint headPosition;
		int lastStep;
		int nextStep;
		void create();

		void gameMode();
		::Dynamic gameMode_dyn();

		void hudColor();
		::Dynamic hudColor_dyn();

		void textColor( ::flixel::text::FlxText Text);
		::Dynamic textColor_dyn();

		void spriteColor( ::flixel::FlxSprite Sprite);
		::Dynamic spriteColor_dyn();

		void buildBorders();
		::Dynamic buildBorders_dyn();

		void buildSnake();
		::Dynamic buildSnake_dyn();

		void placeApple( ::flixel::FlxObject Object1, ::flixel::FlxObject Object2);
		::Dynamic placeApple_dyn();

		void moveSnake();
		::Dynamic moveSnake_dyn();

		void setDirection();
		::Dynamic setDirection_dyn();

		void eatApple( ::Head head, ::Apple apple);
		::Dynamic eatApple_dyn();

		void gameOver( ::flixel::FlxObject Object1, ::flixel::FlxObject Object2);
		::Dynamic gameOver_dyn();

		void checkHighscore();
		::Dynamic checkHighscore_dyn();

		void update(Float elapsed);

};


#endif /* INCLUDED_PlayState */ 
