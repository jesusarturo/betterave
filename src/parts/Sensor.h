/*
 * @(#)		Sensor.h
 * @version	2.0
 * @autor	C. Rouvière
 */

/**
 * A sensor providing data
 */

#ifndef SENSOR
#define SENSOR

#include "../core/ComThread.h"

class Sensor : public ComThread{

public:

	Sensor();

private:

	void Job();
	void IO();
	
	float data_out;

};

#endif