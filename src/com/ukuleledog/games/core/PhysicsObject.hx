package com.ukuleledog.games.core;
import box2D.collision.shapes.B2PolygonShape;
import box2D.common.math.B2Vec2;
import box2D.dynamics.B2Body;
import box2D.dynamics.B2BodyDef;
import box2D.dynamics.B2FixtureDef;
import box2D.dynamics.B2World;
import openfl.events.Event;
import com.ukuleledog.games.presentation.states.MarioState;

/**
 * ...
 * @author ...
 */
class PhysicsObject extends AnimatedObject
{

	private static var PHYSICS_SCALE:Float = 1 / 30;
	public var body:B2Body;
	public var dynamicBody:Bool = true;
	
	public function new() 
	{
		super();
	}
	
	public function initPhysics()
	{
		var bodyDefinition = new B2BodyDef();
		bodyDefinition.position.set (x * PHYSICS_SCALE, y * PHYSICS_SCALE);
		
		if (dynamicBody) {
			bodyDefinition.type = B2Body.b2_dynamicBody;			
		}
		
		var polygon = new B2PolygonShape ();
		polygon.setAsBox ((width / 2) * PHYSICS_SCALE, (height / 2) * PHYSICS_SCALE);
		
		var fixtureDefinition = new B2FixtureDef ();
		fixtureDefinition.shape = polygon;
		
		body = MarioState.world.createBody (bodyDefinition);
		body.createFixture (fixtureDefinition);
		
		addEventListener( Event.ENTER_FRAME, physicsLoop );
	}
		
	private function physicsLoop( e:Event )
	{
		this.x = (body.getPosition().x / PHYSICS_SCALE) - (width / 2);
		this.y = (body.getPosition().y / PHYSICS_SCALE) - (height / 2);
	}
	
}