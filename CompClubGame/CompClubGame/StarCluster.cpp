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