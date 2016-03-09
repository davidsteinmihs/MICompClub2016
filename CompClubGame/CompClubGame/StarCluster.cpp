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
	int q = rand() % 6 + 3; //random int betweeen 3 and 6
	for(int i = 0; i < q; i++)
	{
		int r = rand() % 50 + 20;
		int u,v;
		u = rand() % 2880 - 960;
		v = rand() % 1596 - 516;
		Star x = Star(r,u,v,sf::Color(rand() % 255,rand() % 255,rand() % 255));
		x.generate(seed + q);
		addStar(x);
	}
}