#pragma once
#include "Star.h"
class StarCluster
{
public:
	StarCluster(void);
	~StarCluster(void);
	void addStar(Star);
	void update();
private:
	std::vector<Star> stars;
};

