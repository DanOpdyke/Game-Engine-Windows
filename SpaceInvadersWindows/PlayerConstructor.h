#pragma once
#include "GameObjectConstructor.h"
#include "PlayerInputComponent.h"
#include "LifeTimerComponent.h"

namespace SI
{
	class EntityFactory;
	class PlayerConstructor : public GameObjectConstructor
	{
	public:
		PlayerConstructor(EntityFactory &entityFactory) : entityFactory(entityFactory) {};
		~PlayerConstructor();

		// Inherited via GameObjectConstructor
		GameObject & configureObject(RenderSystem & renderSystem, LevelInputHandler & inputHandler, GameObject &gameObject) override;
	private:
		EntityFactory &entityFactory;
	};

}
