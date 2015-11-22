#pragma once
#include <SFML\Graphics.hpp>

class AstroObj //Generic Astronomical Object, could be a star, or a planet, or a comet, etc. not larger than a star
{
public:
	AstroObj(int rad, sf::Color objColor, sf::Texture texture);
	AstroObj(int rad, sf::Color objColor);
	AstroObj(void);
	~AstroObj(void);


protected:
	sf::Texture model;

};

