#pragma once
#include "GameObject.h"

namespace SI
{
	class EntityManager
	{
	public:
		EntityManager();

		GameObject *createGameObject();
		const std::vector<GameObject *> &getGameObjects();
		void removeDeadObjects();

		~EntityManager();
	private:
		std::vector<GameObject *> gameObjects{};
	};

}
