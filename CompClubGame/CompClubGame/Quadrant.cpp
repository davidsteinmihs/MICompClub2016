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

void Quadrant::generate()
{
	generate(time(NULL));
}

void Quadrant::generate(int seed)
{
	srand(seed);
	int q = 1;//rand() % 3 +3; //random int betweeen 3 and 6
	for(int i = 0; i < q; i++)
	{
		StarCluster x = StarCluster();
		x.generate(seed);
		addCluster(x);
	}
}
