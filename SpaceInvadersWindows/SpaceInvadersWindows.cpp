// SpaceInvadersWindows.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Level.h"
#include <SFML/Graphics.hpp>


int main()
{
	sf::RenderWindow window(sf::VideoMode(1600, 800), "SFML works!");
	auto scene = new Level(&window);
	sf::Clock clock;

	while (window.isOpen())
	{
		auto deltaTime = clock.restart();

		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		auto t = deltaTime.asMicroseconds();
		scene->Update(deltaTime.asMicroseconds());
		scene->Render(deltaTime.asMicroseconds());
		window.display();
	}

	return 0;
}

