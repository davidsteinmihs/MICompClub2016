#pragma once
#include <SFML/Graphics.hpp>
#include "AstroObj.h"
#include "Star.h"



class Planet: public AstroObj{

protected:
	int pathRadius, radius; 
	double angle, degreesPerUpdate;
	sf::Color color;
	Star par;

public:
	Planet(int rad, int pathRad, double startAngle, double degPerTick, Star parent, sf::Color color, sf::Texture texture);
	Planet(int rad, int pathRad, double startAngle, double degPerTick, Star parent, sf::Color color);
	~Planet(void);
	sf::Texture getModel();
};

