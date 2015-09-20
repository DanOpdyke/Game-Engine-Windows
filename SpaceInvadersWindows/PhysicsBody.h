#pragma once
#include <SFML/Graphics.hpp>
#include "GameObject.h"

namespace SI
{
	class PhysicsBody
	{
	public:
		PhysicsBody();
		sf::FloatRect boundingBox;
		GameObject *object;
		~PhysicsBody();
	};
}