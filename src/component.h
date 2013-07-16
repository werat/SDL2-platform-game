// @werat

#ifndef COMPONENT_H
#define COMPONENT_H

#include "common.h"
#include "physics_engine.h"

class GameObject;

class Component
{
public:
   Component() {}
   virtual ~Component() {}

   static void Initialize(PhysicsEngine* engine);

   virtual void Init() {}
   virtual void PrePhysicsUpdate(float delta) {}
   virtual void Update(float delta) {}
   
public:
   GameObject* gameObject;

   static PhysicsEngine& Physics();

private:
   static PhysicsEngine* _physicsEngine;
   static bool _global_initialized;

   DISALLOW_COPY_AND_ASSIGN(Component);
};

#endif