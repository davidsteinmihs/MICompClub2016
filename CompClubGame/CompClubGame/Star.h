#include <SFML/Graphics.hpp>
#include "Planet.h"

#pragma once

class Star: public Planet{

private:
	std::vector<std::pair<Planet,int>> planets;

public:
	Star(int rad, int pathRad, double startAngle, double degPerTick, int x, int y, sf::Color color);
	~Star(void);
	void add(Planet p, int r);

	std::vector<sf::CircleShape> getPlanetsCircle();
	std::vector<sf::CircleShape> getShape();
};
