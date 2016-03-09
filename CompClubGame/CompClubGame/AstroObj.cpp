#include <SFML\Graphics.hpp>
#include "StdAfx.h"
#include "AstroObj.h"


AstroObj::AstroObj(int rad, sf::Vector2f pos, sf::Color objColor, sf::Texture texture)
{
	position = pos;
	radius = rad;

	col = objColor;
	sf::CircleShape circleshape(rad);
	circleshape.setTexture(&texture, true);
	circleshape.setFillColor(objColor);
	sf::RenderTexture tex;
	tex.create(2 * rad, 2 * rad);
	tex.clear(sf::Color::Transparent);
	tex.draw(circleshape);
	tex.display();
	model = sf::Texture(tex.getTexture());
}

AstroObj::AstroObj(int rad, sf::Vector2f pos, sf::Color objColor)
{
	position = pos;
	radius = rad;

	col = objColor;
	sf::CircleShape circleshape(rad);
	circleshape.setFillColor(objColor);
	sf::RenderTexture tex;
	tex.create(2 * rad, 2 * rad);
	tex.clear(sf::Color::Transparent);
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


sf::Vector2f AstroObj::getPosition()
{
	return position;
}

sf::Vector2f AstroObj::getCenter()
{
	return sf::Vector2f(position.x + radius, position.y + radius);
}

void AstroObj::setCenter(sf::Vector2f newcent)
{
	position = sf::Vector2f(newcent.x - radius, newcent.y - radius);
}