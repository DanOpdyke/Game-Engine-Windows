#pragma once
#include "Component.h"
#include <SFML/Graphics.hpp>

namespace SI
{
	class AutoMovementComponent :
		public Component
	{
	public:
		AutoMovementComponent(sf::Vector2f direction) : direction(direction) {};

		void Update(float deltaTime, GameObject &object) override;

		~AutoMovementComponent();
	private:
		sf::Vector2f direction;
	};
}