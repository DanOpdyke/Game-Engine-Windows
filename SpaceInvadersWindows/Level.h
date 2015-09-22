#pragma once
#include "Scene.h"
#include "RenderSystem.h"
#include "LevelInputHandler.h"
#include "GameObject.h"
#include "EntityManager.h"
#include "EntityFactory.h"

namespace SI
{
	class Level :
		public Scene
	{
	public:
		Level(sf::RenderWindow *window);

		void ProcessEvents(std::vector<sf::Event> events);
		void Render(float deltaTime) override;
		void Update(float deltaTime) override;

		~Level();
	private:
		RenderSystem *renderSystem;
		EntityManager *entityManager;
		EntityFactory *entityFactory;
		LevelInputHandler inputHandler{};
		GameObject *testObject{};
		sf::Vector2<float> position{};
	};
}