/*
 * @(#)		State.h
 * @version	2.0
 * @autor	A. Monroy
 */

/**
 * State of the robot
 */

#ifndef STATE
#define STATE

#include <iostream>
#include "../core/ComThread.h"

class State : public ComThread{

public:

	State();
	~State();

private:

	void On_start();
	void Job();
	void IO();

	float latitude, longitude, yaw, x, y, theta;
};

#endif
