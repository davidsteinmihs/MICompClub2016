#pragma once
#include <SFML\Graphics.hpp>;

class Ship
{
public:
	Ship(void);
	~Ship(void);
	sf::Vector2f Ship::getVelocity(void);
	sf::Vector2f Ship::getPosition(void);
	void Ship::move(sf::Vector2f endLocation);
	void Ship::move(int x, int y);
private:
	sf::Vector2f Ship::velocity;
	sf::Vector2f Ship::location;
	void Ship::setLocation(int x, int y);
	void Ship::setLocation(sf::Vector2f);
	void Ship::setVelocity(int x, int y);
	void Ship::setVelocity(sf::Vector2f velocity);
};

