#include "State.h"

using namespace std;

State::State() : ComThread(){}

State::~State(){}

void State::On_start(){}

void State::IO(){
	Link_output("latitude",		COMFLOAT, 1, &latitude);
	Link_output("longitude",	COMFLOAT, 1, &longitude);
	Link_input("x",			COMFLOAT, 1, &x);
	Link_input("y",			COMFLOAT, 1, &y);
	Link_input("theta",		COMFLOAT, 1, &theta);
	Link_input("v",			COMFLOAT, 1, &v);
}

void State::Job(){
	Critical_receive();
	latitude = x + v * cos(theta) * 0.1;
	longitude = y + v * sin(theta) * 0.1;
	Critical_send();
}
