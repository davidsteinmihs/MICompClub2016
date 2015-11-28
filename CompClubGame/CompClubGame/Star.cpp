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

