#pragma once
#include "PhysicsBody.h"
namespace SI
{
	class World
	{
	public:
		World();
		PhysicsBody &createBody();
		void Update(float deltaTime);
		void Render();
		~World();
	private:
		std::vector<PhysicsBody *> bodies{};
	};
}
