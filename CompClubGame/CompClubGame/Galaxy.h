#pragma once
#include "Quadrant.h"
#include <sys/utime.h>
class Galaxy
{
public:
	Galaxy(void);
	~Galaxy(void);
	void addQuad(Quadrant q);
	void update();
	void generate(int seed);
	void generate();
private:
	std::vector<Quadrant> quadrants;
};

