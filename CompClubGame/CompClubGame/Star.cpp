#include "StdAfx.h"
#include "Star.h"
#include <SFML/Graphics.hpp>

Star::Star(int rad, int pathRad, double startAngle, double degPerTick, int x, int y, sf::Color planetColor)
	:Planet(rad,pathRad,startAngle,degPerTick,x,y,planetColor)	
{

}

Star::~Star(void)
{
}

void Star::add(Planet p, int r){
	planets.push_back(std::pair<Planet,int>(p,r));
}

std::vector<sf::CircleShape> Star::getPlanetsCircle(){
	std::vector<sf::CircleShape> ret;
	for(int i=0;i<planets.size();i++){
		ret.push_back(planets.at(i).first.getCircle());
	}
	return ret;
}

std::vector<sf::CircleShape> Star::getShape(){
	std::vector<sf::CircleShape> ret=Star::getPlanetsCircle();
	ret.push_back(Star::getCircle());
	return ret;
}