// CompClubGame.cpp : Defines the entry point for the application.
//

#include "stdafx.h"
#include "CompClubGame.h"
#include <SFML/Graphics.hpp>
#include "Planet.h"
#include "Star.h"

int main()
{

	sf::RenderWindow window(sf::VideoMode(600, 600), "SFML works!", sf::Style::Default);
	Star sun = Star(50, 0, 0, sf::Color::Yellow);
	sun.addPlanet(Planet(30, 100, 0, .05, sun, sf::Color::Blue),50);
	sun.addPlanet(Planet(40, 200, 0, .03, sun, sf::Color::Red),80);
	sun.addPlanet(Planet(20, 300, 0, .025, sun, sf::Color::Green),110);
	std::vector<sf::Texture> starCircles;
	
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
		starCircles = sun.getPlanetModels();
		for(unsigned int i = 0; i < starCircles.size(); i++){
			window.draw(sf::Sprite(starCircles.at(i)));
		}
		window.display();
    }

    return 0;
 }