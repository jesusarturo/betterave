/*
 * @(#)		Auto.h
 * @version	2.0
 * @autor	E. Antonio
 */

/**
 * Taking decision
 */

#ifndef AUTONOMY
#define AUTONOMY

#include "../core/ComThread.h"

class Auto : public ComThread{

public:

	Auto();
	~Auto();

private:

	void On_start();
	void Job();
	void IO();
	
	float x, y, theta, v, delta;
};

#endif
