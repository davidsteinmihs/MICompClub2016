// CompClubGame.cpp : Defines the entry point for the application.
//
#include "stdafx.h"
#include "CompClubGame.h"
#include <SFML/Graphics.hpp>
#include "Renderer.h"
#include "Planet.h"
#include "Star.h"

void gameloop() //must be declared before main() so that main() can use it.
{
	// This is here for testing purposes
		Star sun = Star(50, 250, 250, sf::Color::Yellow);
		sun.addPlanet(Planet(30, 100, 0, 5, sun, sf::Color::Blue));
		sun.addPlanet(Planet(40, 200, 0, 3, sun, sf::Color::Red));
		sun.addPlanet(Planet(20, 300, 0, 2.5, sun, sf::Color::Green));

	while (Renderer::isOpen())
	{

		Renderer::update();
		sun.update();
		
		

		Renderer::addToRenderList(sun.getModel(), sun.getPosition());
		for(unsigned int i = 0; i < sun.getPlanets().size(); i++)
		{
			Renderer::addToRenderList(sun.getPlanets().at(i).getModel(), sun.getPlanets().at(i).getPosition());
		}


		//Rest of loop here

		Renderer::render();

    }
}


int main()
{
	Renderer::init();
	gameloop();
	
	
	sf::Clock clock;

    

    return 0;
}
