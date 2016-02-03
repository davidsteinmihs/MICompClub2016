// CompClubGame.cpp : Defines the entry point for the application.
//
#include "stdafx.h"
#include "CompClubGame.h"
#include <SFML/Graphics.hpp>
#include "Renderer.h"
#include "Galaxy.h"



void gameloop() //must be declared before main() so that main() can use it.
{
	// This is here for testing purposes
	//Star sun = Star(50, 250, 250, sf::Color::Yellow);
	//sun.addPlanet(Planet(30, 100, 0, 90, sun, sf::Color::Blue));
	//sun.addPlanet(Planet(40, 200, 0, 30, sun, sf::Color::Red));
	//sun.addPlanet(Planet(20, 300, 0, 60, sun, sf::Color::Green));
	Galaxy gal = Galaxy();
	gal.generate(0);
	while (Renderer::isOpen())
	{

		Renderer::update();
		//sun.update();
		gal.update();


		//Rest of loop here

		Renderer::render();

		int fps = Renderer::getFPS();

		if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){

			Renderer::offset = sf::Vector2f(Renderer::offset.x + 10, Renderer::offset.y);
		}

		if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){

			Renderer::offset = sf::Vector2f(Renderer::offset.x - 10, Renderer::offset.y);
		}

		if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){

			Renderer::offset = sf::Vector2f(Renderer::offset.x, Renderer::offset.y + 10);
		}

		if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){

			Renderer::offset = sf::Vector2f(Renderer::offset.x, Renderer::offset.y - 10);
		}
    }
}


int main()
{
	Renderer::init();
	gameloop();
	
    return 0;
}
