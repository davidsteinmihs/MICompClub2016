#include "StdAfx.h"
#include "Star.h"
#include <SFML/Graphics.hpp>

Star::Star(int rad, float x, float y, sf::Color starColor, sf::Texture texture) : AstroObj(rad, sf::Vector2f(x,y), starColor, texture)
{
}

Star::Star(int rad, float x, float y, sf::Color starColor) : AstroObj(rad, sf::Vector2f(x,y), starColor)
{
}

Star::Star(void){

}

Star::~Star(void)
{
}

void Star::update()
{
	for(unsigned int i = 0; i < planets.size(); i++)
	{
		planets.at(i).update();
	}
}

void Star::addPlanet(Planet p){
	planets.push_back(p);
}

std::vector<Planet> Star::getPlanets()
{
	return planets;
}

std::vector<sf::Texture> Star::getPlanetModels(){
	std::vector<sf::Texture> ret;
	for(int i=0;i<planets.size();i++){
		ret.push_back(planets.at(i).getModel());
	}
	return ret;
}

sf::Texture Star::getModel(){
	return model;
}

