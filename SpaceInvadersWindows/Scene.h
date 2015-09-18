#pragma once
#include <SFML/Graphics.hpp>
class Scene
{
public:
	virtual void Update(float deltaTime) = 0;
	virtual void Render(float deltaTime) = 0;
protected:
	sf::RenderWindow *window;
};