#pragma once
#include "StarCluster.h"
class Quadrant
{
public:
	Quadrant(void);
	~Quadrant(void);
	void addCluster(StarCluster C);
	void update();
private:
	std::vector<StarCluster> clusters;
};

