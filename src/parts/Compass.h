/*
 * @(#)		Compass.h
 * @version	2.0
 * @Compassr	E. Antonio
 */

/**
 * Taking decision
 */

#ifndef Compass
#define Compass

#include "../core/ComThread.h"

class Compass : public ComThread{

public:

	Compass();
	~Compass();

private:

	void On_start();
	void Job();
	void IO();
	
	float theta, delta, yaw;
};

#endif
