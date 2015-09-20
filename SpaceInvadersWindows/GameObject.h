#pragma once
#include <SFML/Graphics.hpp>
#include "Component.h"
namespace SI {
	class GameObject
	{
	public:
		GameObject();
		sf::Vector2<float> position{};
		void Update(float deltaTime);
		void addComponent(Component *component);
		~GameObject();
	private:
		std::vector<Component *> components;
	};
}

