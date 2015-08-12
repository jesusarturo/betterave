#include "State.h"

using namespace std;

State::State() : ComThread(){}

State::~State(){}

void State::On_start(){}

void State::IO(){
	Link_input("latitude",		COMFLOAT, 1, &latitude);
	Link_input("longitude",		COMFLOAT, 1, &longitude);
	Link_input("yaw",		COMFLOAT, 1, &yaw);
	Link_output("x",		COMFLOAT, 1, &x);
	Link_output("y",		COMFLOAT, 1, &y);
	Link_output("theta",		COMFLOAT, 1, &theta);
}

void State::Job(){
	Critical_receive();
	x = latitude;
	y = longitude;
	theta = yaw;
	Critical_send();
}
