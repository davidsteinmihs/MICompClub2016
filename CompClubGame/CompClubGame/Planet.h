#pragma once
#include <SFML/Graphics.hpp>
#include "AstroObj.h"


class Planet: public AstroObj{

protected:
	int pathRadius, radius; 
	double angle, degreesPerUpdate;
	sf::Color color;
	AstroObj par; // Can't be Star, that leads to a circular dependency. also allows planets to own other planets as moon.

public:
	Planet(int rad, int pathRad, double startAngle, double degPerTick, AstroObj parent, sf::Color color, sf::Texture texture);
	Planet(int rad, int pathRad, double startAngle, double degPerTick, AstroObj parent, sf::Color color);
	~Planet(void);
	sf::Texture getModel();
};

