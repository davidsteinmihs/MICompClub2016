#pragma once
#include "SFML\Graphics.hpp"
class AstroObj //Generic Astronomical Object, could be a star, or a planet, or a comet, etc. not larger than a star
{
public:
	AstroObj(void);
	~AstroObj(void);

private:
	sf::Texture model;

};

