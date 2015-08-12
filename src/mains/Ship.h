/*
 * @(#)		Ship.h
 * @version	2.0
 * @autor	J. Arturo
 */

/**
 * A ship example
 */

#ifndef SHIP
#define SHIP

#include "../core/Maestro.h"
#include "../parts/Gps.h"
#include "../parts/Compass.h"
#include "../parts/State.h"
#include "../parts/Auto.h"

class Ship : public Maestro{

public:

	Ship();
	void Shutdown();

private:

	Gps gps;
	Compass compass;
	State state;
	Auto auto;

};

#endif
