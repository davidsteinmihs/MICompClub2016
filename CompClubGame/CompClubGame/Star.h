#pragma once
#include <SFML/Graphics.hpp>
#include "AstroObj.h"
#include "Planet.h"
class Star: public AstroObj{

private:
	std::vector<Planet> planets;
	int numPlanets;
	
public:
	Star(int rad, float x, float y, sf::Color color, sf::Texture);
	Star(int rad, float x, float y, sf::Color color);
	Star(void);
	~Star(void);
	void addPlanet(Planet p);
	std::vector<Planet> getPlanets();
	sf::Texture getModel();
	void update();
	int getNumPlanets();
};
