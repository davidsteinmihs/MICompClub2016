#pragma once
#include <SFML/Graphics.hpp>
#include "AstroObj.h"
#include "Planet.h"
class Star: public AstroObj{

private:
	std::vector<std::pair<Planet, int>> planets;
	sf::Vector2<int> position;

public:
	Star(int rad, int x, int y, sf::Color color, sf::Texture);
	Star(int rad, int x, int y, sf::Color color);
	Star(void);
	~Star(void);
	void addPlanet(Planet p, int r);
	sf::Texture getModel();
	std::vector<sf::Texture> getPlanetModels();
};
