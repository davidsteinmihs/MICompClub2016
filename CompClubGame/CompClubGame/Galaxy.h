#pragma once
#include "Quadrant.h"
class Galaxy
{
public:
	Galaxy(void);
	~Galaxy(void);
	void addQuad(Quadrant q);
	void update();
private:
	std::vector<Quadrant> quadrants;
};

