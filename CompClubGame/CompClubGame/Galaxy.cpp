#include "StdAfx.h"
#include "Galaxy.h"


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
