#include "StdAfx.h"
#include "StarCluster.h"


StarCluster::StarCluster(void)
{
}


StarCluster::~StarCluster(void)
{
}

void StarCluster::addStar(Star s)
{
	stars.push_back(s);
}

void StarCluster::update()
{
	for(unsigned int i = 0; i < stars.size(); i++)
	{
		stars.at(i).update();
	}
}

void StarCluster::generate()
{
	generate(time(NULL));
}

void StarCluster::generate(int seed)
{
	srand(seed);
	int q = rand() % 3 +3; //random int betweeen 3 and 6
	for(int i = 0; i < q; i++)
	{
		int r = 1;//rand() % 100 + 20;
		int u,v;
		u = rand() % 16383 - 16383;
		v = rand() % 16383 - 16383;
		Star x = Star(r,u,v,sf::Color(rand() % 255,rand() % 255,rand() % 255));
		x.generate(seed);
		addStar(x);
	}
}