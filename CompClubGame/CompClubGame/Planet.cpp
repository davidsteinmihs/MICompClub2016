#include "StdAfx.h"
#include "Planet.h"
#include <SFML/Graphics.hpp>

Planet::Planet(int rad, int pathRad, double startAngle, double degPerTick, AstroObj parent, sf::Color planetColor, sf::Texture texture) : AstroObj(rad, planetColor, texture) //AstroObj onstructs the texture/model
{
		
	radius = rad;
	pathRadius = pathRad;
	color = planetColor;
	angle = (startAngle * 180) / PI;
	degreesPerUpdate = degPerTick;
	par = parent;
}

Planet::Planet(int rad, int pathRad, double startAngle, double degPerTick, AstroObj parent, sf::Color planetColor) : AstroObj(rad, planetColor) //AstroObj onstructs the texture/model
{
		
	radius = rad;
	pathRadius = pathRad;
	color = planetColor;
	angle = (startAngle * 180) / PI;
	degreesPerUpdate = degPerTick;
	par = parent;
}

Planet::~Planet(void)
{
}

sf::Texture Planet::getModel(){

	return model;
}