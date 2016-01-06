#pragma once
#include "Star.h"
class StarCluster
{
public:
	StarCluster(void);
	~StarCluster(void);
	void addStar(Star);
	void update();
	void generate(int seed);
	void generate();
private:
	std::vector<Star> stars;
};

