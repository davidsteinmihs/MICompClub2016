// CompClubGame.cpp : Defines the entry point for the application.
//

#include "stdafx.h"
#include "CompClubGame.h"
#include <math.h>

#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(600, 600), "SFML works!", sf::Style::Default);
	sf::CircleShape circle(100);
	circle.setFillColor(sf::Color::White);

	sf::Clock clock;

    while (window.isOpen())
	{
		window.clear();

		circle.setPosition(sf::Vector2f(200 + (200 * cos(((((double) clock.getElapsedTime().asMilliseconds() / 10000) * 180) / 3))), 200 + (200 * sin(((((double) clock.getElapsedTime().asMilliseconds() / 10000) * 180) / 3)))));
		window.draw(circle);
		window.display();
    }

    return 0;
	//im a potato
}