#pragma once
#include "Scene.h"
class Level :
	public Scene
{
public:
	Level(sf::RenderWindow *window);

	void Render(float deltaTime) override;
	void Update(float deltaTime) override;

	~Level();
private:
	sf::Vector2<float> position{};
};

