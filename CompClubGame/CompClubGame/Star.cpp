#include "StdAfx.h"
#include "Star.h"
#include <SFML/Graphics.hpp>
#include "Renderer.h"

Star::Star(int rad, float x, float y, sf::Color starColor, sf::Texture texture) : AstroObj(rad, sf::Vector2f(x,y), starColor, texture)
{
	numPlanets = 0;
}

Star::Star(int rad, float x, float y, sf::Color starColor) : AstroObj(rad, sf::Vector2f(x,y), starColor)
{
	numPlanets = 0;
}

Star::Star(void){
	numPlanets = 0;
}

Star::~Star(void)
{
}

void Star::update()
{
	Renderer::addToRenderList(model,position);
	for(unsigned int i = 0; i < planets.size(); i++)
	{
		planets.at(i).update();
	}
}

void Star::addPlanet(Planet p){
	planets.push_back(p);
	numPlanets++;
}

std::vector<Planet> Star::getPlanets()
{
	return planets;
}

int Star::getNumPlanets()
{
	return numPlanets;
}

sf::Texture Star::getModel(){
	return model;
}

void Star::generate()
{
	generate(time(NULL));
}

void Star::generate(int seed)
{
	srand(seed);
	int q = rand() % 6 +3; //random int betweeen 3 and 6
	for(int i = 0; i < q; i++)
	{
		int r = rand() % 1 + 5;
		int pathrad = rand() % 100 + 100;
		int theta = rand() % 6;
		int ospeed = rand() % 45;
		Planet x = Planet(r,pathrad,theta,ospeed,*this,sf::Color(rand() % 255,rand() % 255,rand() % 255));
		addPlanet(x);
	}
}
