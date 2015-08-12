#include "Auto.h"

using namespace std;

Auto::Auto() : ComThread(){
	
}

Auto::~Auto(){}

void Auto::On_start(){}

void Auto::IO(){
	Link_input("x",			COMFLOAT, 1, &x);
	Link_input("y",			COMFLOAT, 1, &y);
	Link_input("theta",		COMFLOAT, 1, &theta);	
	Link_output("v",		COMFLOAT, 1, &v);
	Link_output("delta",		COMFLOAT, 1, &delta);
}

void Auto::Job(){
	Critical_receive();
	v = 1;
	delta = 0.1;

	Critical_send();
}
