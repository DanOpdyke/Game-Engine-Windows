#pragma once
#include "RenderComponent.h"

namespace SI
{
	class RenderSystem
	{
	public:
		RenderSystem(sf::RenderWindow *window);
		RenderComponent *createRenderComponent();
		void Render();
		~RenderSystem();
	private:
		std::vector<RenderComponent *> components;
		sf::RenderWindow *window;
	};

}
