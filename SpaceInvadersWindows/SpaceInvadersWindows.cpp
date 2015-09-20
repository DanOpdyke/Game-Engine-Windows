// SpaceInvadersWindows.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Level.h"
#include "InputState.h"
#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(1600, 800), "SFML works!");
	auto scene = new SI::Level(&window);
	sf::Clock clock;

	while (window.isOpen())
	{
		auto deltaTime = clock.restart();

		sf::Event event;
		std::vector<sf::Event> events;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) {
				window.close();
			}
			else {
				events.push_back(event);
			}
		}

		window.clear();
		auto t = deltaTime.asMicroseconds();
		scene->ProcessEvents(events);
		scene->Update(deltaTime.asMicroseconds());
		scene->Render(deltaTime.asMicroseconds());
		window.display();
	}

	return 0;
}

