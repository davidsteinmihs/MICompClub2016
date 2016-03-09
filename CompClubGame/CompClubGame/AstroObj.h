#pragma once
#include <SFML\Graphics.hpp>

class AstroObj //Generic Astronomical Object, could be a star, or a planet, or a comet, etc. not larger than a star
{
public:
	AstroObj(int rad, sf::Vector2f pos, sf::Color objColor, sf::Texture texture);
	AstroObj(int rad, sf::Vector2f pos, sf::Color objColor);
	AstroObj(void);
	~AstroObj(void);
	sf::Vector2f getPosition();
	sf::Vector2f getCenter();
	void setCenter(sf::Vector2f newcent);
	int radius;
	sf::Color col;

protected:
	sf::Texture model;
	sf::Vector2f position; //point around which object orbits(in case of planets), or where it is(in case of Star)
	
};

