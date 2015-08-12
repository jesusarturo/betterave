#include "Compass.h"

using namespace std;

Compass::Compass() : ComThread(){
	
}

Compass::~Compass(){}

void Compass::On_start(){}

void Compass::IO(){
	Link_input("theta",			COMFLOAT, 1, &theta);	
	Link_input("delta",			COMFLOAT, 1, &delta);
	Link_output("yaw",			COMFLOAT, 1, &yaw);
}

void Compass::Job(){
	Critical_receive();
	yaw = theta + delta * 0.1;
	Critical_send();
}
