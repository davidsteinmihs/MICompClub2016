#include "StdAfx.h"
#include "Quadrant.h"


Quadrant::Quadrant(void)
{
}


Quadrant::~Quadrant(void)
{
}

void Quadrant::addCluster(StarCluster c)
{
	clusters.push_back(c);
}

void Quadrant::update()
{
	for(unsigned int i = 0; i < clusters.size(); i++)
	{
		clusters.at(i).update();
	}
}
