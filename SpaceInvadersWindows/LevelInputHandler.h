#pragma once
#include <SFML/Graphics.hpp>
#include "InputState.h"

namespace SI
{
	class LevelInputHandler
	{
	public:
		LevelInputHandler();
		void updateInputState(std::vector<sf::Event> events);
		InputState getInputState() const;

		~LevelInputHandler();
	private:
		InputState state{};
	};

}
