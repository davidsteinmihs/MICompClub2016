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
	Star sun(50, 0, 0, 0, 300, 300, sf::Color::Yellow);
	sun.add(Planet(30, 100, 0, .05, 300, 300, sf::Color::Blue),50);
	sun.add(Planet(40, 200, 0, .03, 300, 300, sf::Color::Red),80);
	sun.add(Planet(20, 300, 0, .025, 300, 300, sf::Color::Green),110);
	std::vector<sf::CircleShape> starCircles;
	
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
		starCircles=sun.getShape();
		for(int i=0;i<starCircles.size();i++){
			window.draw(starCircles.at(i));
		}
		window.display();
    }

    return 0;
 }