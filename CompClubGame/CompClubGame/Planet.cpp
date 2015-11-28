#include "StdAfx.h"
#include "Planet.h"
#include <SFML/Graphics.hpp>
#include "Renderer.h"

Planet::Planet(int rad, int pathRad, double startAngle, double degPerTick, AstroObj parent, sf::Color planetColor, sf::Texture texture) : AstroObj(rad, parent.getCenter(), planetColor, texture) //AstroObj onstructs the texture/model
{
		
	pathRadius = pathRad;
	color = planetColor;
	angle = (startAngle * 180) / PI;
	degreesPerUpdate = degPerTick;
	par = parent;
	position = par.getCenter();
	position.x += pathRadius * cos(angle * PI/180);
	position.y += pathRadius * sin(angle * PI/180);
	
}

Planet::Planet(int rad, int pathRad, double startAngle, double degPerTick, AstroObj parent, sf::Color planetColor) : AstroObj(rad, parent.getCenter(), planetColor) //AstroObj constructs the texture/model.
{
	pathRadius = pathRad;
	color = planetColor;
	angle = (startAngle * 180) / PI;
	degreesPerUpdate = degPerTick;
	par = parent;
}

Planet::~Planet(void)
{
}

void Planet::update()
{
	angle += degreesPerUpdate * Renderer::deltaTime();
	setCenter(par.getCenter());
	position.x += pathRadius * cos(angle * PI/180);
	position.y += pathRadius * sin(angle * PI/180);
	Renderer::addToRenderList(model,position);
}

sf::Texture Planet::getModel(){

	return model;
}