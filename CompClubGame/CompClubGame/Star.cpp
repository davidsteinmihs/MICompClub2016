#include "StdAfx.h"
#include "Star.h"
#include <SFML/Graphics.hpp>

Star::Star(int rad, int x, int y, sf::Color starColor, sf::Texture texture) : AstroObj(rad, starColor, texture)
{
	position = sf::Vector2<int>(x,y);
}

Star::Star(int rad, int x, int y, sf::Color starColor) : AstroObj(rad, starColor)
{
	position = sf::Vector2<int>(x,y);
}

Star::Star(void){

}

Star::~Star(void)
{
}

void Star::addPlanet(Planet p, int r){
	planets.push_back(std::pair<Planet,int>(p,r));
}

std::vector<sf::Texture> Star::getPlanetModels(){
	std::vector<sf::Texture> ret;
	for(int i=0;i<planets.size();i++){
		ret.push_back(planets.at(i).first.getModel());
	}
	return ret;
}

sf::Texture Star::getModel(){
	return model;
}

