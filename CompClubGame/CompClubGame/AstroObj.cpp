#include <SFML\Graphics.hpp>
#include "StdAfx.h"
#include "AstroObj.h"


AstroObj::AstroObj(int rad, sf::Color objColor, sf::Texture texture)
{
	sf::CircleShape circleshape(rad);
	circleshape.setTexture(&texture, true);
	circleshape.setFillColor(objColor);
	sf::RenderTexture tex;
	tex.create(2 * rad, 2 * rad);
	tex.clear(sf::Color::Black);
	tex.draw(circleshape);
	tex.display();
	model = sf::Texture(tex.getTexture());
}

AstroObj::AstroObj(int rad, sf::Color objColor)
{
	sf::CircleShape circleshape(rad);
	circleshape.setFillColor(objColor);
	sf::RenderTexture tex;
	tex.create(2 * rad, 2 * rad);
	tex.clear(sf::Color::Black);
	tex.draw(circleshape);
	tex.display();
	model = sf::Texture(tex.getTexture());
}

AstroObj::AstroObj(void)
{
}

AstroObj::~AstroObj(void)
{
}
