#pragma once
#include <SFML\Graphics.hpp>
#include "Ship.h"

class Player
{
public:
	Player(void);
	~Player(void);
	void addToFleet(Ship ship);
	void removeFromFleet(Ship ship);
private:
};

