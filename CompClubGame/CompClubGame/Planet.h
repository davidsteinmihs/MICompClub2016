#include <SFML/Graphics.hpp>
#include "AstroObj.h"

#pragma once

class Planet: public AstroObj{

protected:
	int pathRadius, radius; 
	double angle, degreesPerUpdate;
	sf::Color color;
	sf::Vector2f position;
	sf::CircleShape circle;

public:
	Planet(int rad, int pathRad, double startAngle, double degPerTick, int x, int y, sf::Color color);
	Planet(void);
	sf::CircleShape getCircle();
};

