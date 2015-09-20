#pragma once
#include "Component.h"
#include "GameObject.h"

namespace SI
{
	class DemoMovementComponent :
		public Component
	{
	public:
		DemoMovementComponent();
		void Update(float deltaTime, GameObject &object) override;
		~DemoMovementComponent();
	private:
		sf::Vector2f position{};
	};

}
