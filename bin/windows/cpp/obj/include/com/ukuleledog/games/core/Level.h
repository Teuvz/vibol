#ifndef INCLUDED_com_ukuleledog_games_core_Level
#define INCLUDED_com_ukuleledog_games_core_Level

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
HX_DECLARE_CLASS4(com,ukuleledog,games,core,AnimatedObject)
HX_DECLARE_CLASS4(com,ukuleledog,games,core,Ennemy)
HX_DECLARE_CLASS4(com,ukuleledog,games,core,GameObject)
HX_DECLARE_CLASS4(com,ukuleledog,games,core,Hero)
HX_DECLARE_CLASS4(com,ukuleledog,games,core,Level)
HX_DECLARE_CLASS4(com,ukuleledog,games,core,Weapon)
HX_DECLARE_CLASS5(com,ukuleledog,games,vibol,elements,GameEvent)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,geom,Point)
namespace com{
namespace ukuleledog{
namespace games{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  Level_obj : public ::openfl::_v2::display::Sprite_obj{
	public:
		typedef ::openfl::_v2::display::Sprite_obj super;
		typedef Level_obj OBJ_;
		Level_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Level_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Level_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Level"); }

		bool fightRoom;
		bool playing;
		Array< ::Dynamic > elements;
		Array< ::Dynamic > ennemies;
		Array< ::Dynamic > collectibles;
		Array< ::Dynamic > movingElements;
		Array< ::Dynamic > gameEvents;
		::com::ukuleledog::games::core::Hero hero;
		::openfl::_v2::geom::Point startingPosition;
		bool onGround;
		bool jumping;
		int jumpPower;
		int jumpPeek;
		int gravity;
		bool hitting;
		::com::ukuleledog::games::core::Weapon weapon;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void setHero( ::com::ukuleledog::games::core::Hero _hero);
		Dynamic setHero_dyn();

		virtual Void addElement( ::com::ukuleledog::games::core::GameObject _element,hx::Null< int >  _y,hx::Null< int >  _x);
		Dynamic addElement_dyn();

		virtual Void addEnnemy( ::com::ukuleledog::games::core::Ennemy _ennemy,hx::Null< int >  _y,hx::Null< int >  _x);
		Dynamic addEnnemy_dyn();

		virtual Void addCollectible( ::com::ukuleledog::games::core::GameObject _collectible,hx::Null< int >  _y,hx::Null< int >  _x);
		Dynamic addCollectible_dyn();

		virtual Void addGameEvent( ::com::ukuleledog::games::vibol::elements::GameEvent _gameEvent,hx::Null< int >  _y,hx::Null< int >  _x);
		Dynamic addGameEvent_dyn();

		virtual Void setCamera( );
		Dynamic setCamera_dyn();

		virtual Void moveRight( );
		Dynamic moveRight_dyn();

		virtual Void moveLeft( );
		Dynamic moveLeft_dyn();

		virtual Void moveUp( );
		Dynamic moveUp_dyn();

		virtual Void moveDown( );
		Dynamic moveDown_dyn();

		virtual Void jump( );
		Dynamic jump_dyn();

		virtual Void action( );
		Dynamic action_dyn();

		virtual Void loop( ::openfl::_v2::events::Event e);
		Dynamic loop_dyn();

		virtual bool canJump( );
		Dynamic canJump_dyn();

		virtual bool canHit( );
		Dynamic canHit_dyn();

		virtual Void manageEvent( ::com::ukuleledog::games::vibol::elements::GameEvent _gameEvent);
		Dynamic manageEvent_dyn();

		virtual Void setWeapon( ::com::ukuleledog::games::core::Weapon _weapon);
		Dynamic setWeapon_dyn();

		virtual ::com::ukuleledog::games::core::Weapon getWeapon( );
		Dynamic getWeapon_dyn();

		virtual Void positionWeapon( );
		Dynamic positionWeapon_dyn();

		virtual Void animateWeapon( );
		Dynamic animateWeapon_dyn();

		virtual Void start( );
		Dynamic start_dyn();

};

} // end namespace com
} // end namespace ukuleledog
} // end namespace games
} // end namespace core

#endif /* INCLUDED_com_ukuleledog_games_core_Level */ 
