#pragma once
#include "GameObjectConstructor.h"
#include "EntityManager.h"
#include "GameObject.h"

namespace SI
{
	class EntityFactory
	{
	public:
		EntityFactory(RenderSystem &renderSystem, LevelInputHandler &inputHandler, EntityManager &entityManager);
		GameObject &createGameObject(std::string identifier);
		void registerConstructor(std::string identifier, GameObjectConstructor *constructor);
		void reloadConstructors();
		~EntityFactory();
	private:
		std::map<std::string, GameObjectConstructor*> constructors{};
		RenderSystem &renderSystem;
		LevelInputHandler &inputHandler;
		EntityManager &entityManager;
	};

}
