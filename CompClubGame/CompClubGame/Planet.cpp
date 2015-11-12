#include "StdAfx.h"
#include "Planet.h"
#include <SFML/Graphics.hpp>

Planet::Planet(int rad, int pathRad, double startAngle, double degPerTick, int x, int y, sf::Color planetColor)
{
		
	radius = rad;
	pathRadius = pathRad;
	color = planetColor;
	angle = (startAngle * 180) / 3.14159265358979323846264;
	degreesPerUpdate = degPerTick;
	position.x = x;
	position.y = y;

	circle.setRadius(rad);
	circle.setFillColor(color);
}

Planet::~Planet(void)
{
}

sf::CircleShape Planet::getCircle(){

	angle += degreesPerUpdate;
	angle *= 3.14159265358979323846264 / 180;
	circle.setPosition(sf::Vector2f(position.x - radius + (pathRadius * cos(angle)), position.y - radius + (pathRadius * sin(angle))));
	angle *= 180 / 3.14159265358979323846264;
	return circle;
}