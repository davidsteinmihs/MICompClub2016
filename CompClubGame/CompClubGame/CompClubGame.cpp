// CompClubGame.cpp : Defines the entry point for the application.
//

#include "stdafx.h"
#include "CompClubGame.h"
#include <SFML/Graphics.hpp>
#include "Planet.h"

int main()
{

	sf::RenderWindow window(sf::VideoMode(600, 600), "SFML works!", sf::Style::Default);
	Planet sun(50, 0, 0, 0, 300, 300, sf::Color::Yellow);
	Planet planet(30, 100, 0, .05, 300, 300, sf::Color::Blue);
	Planet planet2(40, 200, 0, .03, 300, 300, sf::Color::Red);
	Planet planet3(20, 300, 0, .025, 300, 300, sf::Color::Green);
	
	sf::Clock clock;

    while (window.isOpen())
	{

		sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
			if(event.type == sf::Event::KeyPressed && sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
				window.close();
        }

		window.clear();
		window.draw(sun.getCircle());
		window.draw(planet.getCircle());
		window.draw(planet2.getCircle());
		window.draw(planet3.getCircle());
		window.display();
    }

    return 0;
 }