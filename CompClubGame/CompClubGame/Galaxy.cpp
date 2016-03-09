#include "StdAfx.h"
#include "Galaxy.h"
#include <sys/utime.h>
#include <random>

Galaxy::Galaxy(void)
{
}


Galaxy::~Galaxy(void)
{
}

void Galaxy::addQuad(Quadrant q)
{
	quadrants.push_back(q);
}

void Galaxy::update()
{
	for(unsigned int i = 0; i < quadrants.size(); i++)
	{
		quadrants.at(i).update();
	}
}

void Galaxy::generate()
{
	generate(time(NULL));
}

void Galaxy::generate(int seed)
{
	srand(seed);
	int q = rand() % 3 +3; //random int betweeen 3 and 6
	for(int i = 0; i < q; i++)
	{
		Quadrant x = Quadrant();
		x.generate(seed + q);
		addQuad(x);
	}
}
