#include "StdAfx.h"
#include "Planet.h"
#include "Star.h"
#include <SFML/Graphics.hpp>

Planet::Planet(int rad, int pathRad, double startAngle, double degPerTick, Star parent, sf::Color planetColor)
{
		
	radius = rad;
	pathRadius = pathRad;
	color = planetColor;
	angle = (startAngle * 180) / PI;
	degreesPerUpdate = degPerTick;
	par = parent;

	circle.setRadius(rad);
	circle.setFillColor(color);
}

Planet::Planet(void)
{
}

sf::CircleShape Planet::getCircle(){

	angle += (degreesPerUpdate * 180) / PI;
	circle.setPosition(sf::Vector2f(position.x - radius + (pathRadius * cos(angle)), position.y - radius + (pathRadius * sin(angle))));
	return circle;
}