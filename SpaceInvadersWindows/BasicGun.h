#pragma once
#include "Component.h"
#include "EntityFactory.h"
#include "LevelInputHandler.h"

namespace SI
{
	class BasicGun : public Component
	{
	public:
		BasicGun(EntityFactory &factory, LevelInputHandler &inputComponent) : entityFactory(factory), levelInputComponent(inputComponent) {};
		
		~BasicGun();
	private:
		EntityFactory &entityFactory;
		LevelInputHandler &levelInputComponent;
		float nextFireTime = 0;

		// Inherited via Component
		virtual void Update(float deltaTime, GameObject & object) override;
	};


}