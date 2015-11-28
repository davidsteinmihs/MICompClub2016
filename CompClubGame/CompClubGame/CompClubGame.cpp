// CompClubGame.cpp : Defines the entry point for the application.
//
#include "stdafx.h"
#include "CompClubGame.h"
#include <SFML/Graphics.hpp>
#include "Renderer.h"
#include "Planet.h"
#include "Star.h"
#include <sys/utime.h>

void gameloop() //must be declared before main() so that main() can use it.
{
	// This is here for testing purposes
		Star sun = Star(50, 250, 250, sf::Color::Yellow);
		sun.addPlanet(Planet(30, 100, 0, 90, sun, sf::Color::Blue));
		sun.addPlanet(Planet(40, 200, 0, 30, sun, sf::Color::Red));
		sun.addPlanet(Planet(20, 300, 0, 60, sun, sf::Color::Green));

	while (Renderer::isOpen())
	{

		Renderer::update();
		sun.update();


		//Rest of loop here

		Renderer::render();

		int fps = Renderer::getFPS();
    }
}


int main()
{
	Renderer::init();
	gameloop();

    return 0;
}
