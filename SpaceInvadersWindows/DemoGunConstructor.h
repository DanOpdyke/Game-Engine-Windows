#pragma once
#include "GameObjectConstructor.h"

namespace SI
{
	class EntityFactory;
	class DemoGunConstructor : public GameObjectConstructor
	{
	public:
		DemoGunConstructor(EntityFactory &factory) : entityFactory(factory) {}
		~DemoGunConstructor();

		// Inherited via GameObjectConstructor
		GameObject & configureObject(RenderSystem & renderSystem, LevelInputHandler & inputHandler, GameObject & object) override;
	private:
		EntityFactory &entityFactory;
	};
}