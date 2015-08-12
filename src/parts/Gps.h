/*
 * @(#)		Gps.h
 * @version	2.0
 * @autor	A. Monroy
 */

/**
 * Gps of the robot
 */

#ifndef GPS
#define GPS

#include <iostream>
#include "../core/ComThread.h"

class Gps : public ComThread{

public:

	Gps();
	~Gps();

private:

	void On_start();
	void Job();
	void IO();

	float latitude, longitude, x, y, theta, v;
};

#endif
