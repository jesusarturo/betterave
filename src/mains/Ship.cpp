#include "Ship.h"

using namespace std;

Ship::Ship() : Maestro(){

	// Warning : pass-by-reference to avoid slicing !
	Add_thread(&gps,	"My GPS",		100000);	// 100 ms
	Add_thread(&compass,	"My Compass",		100000);	// 100 ms
	Add_thread(&state,	"My State",		100000);	// 100 ms
	Add_thread(&auto,	"My Auto",		100000);	// 100 ms

	Link_all();
	Launch_all();

}

void Ship::Shutdown(){
	Join_all();
}

int main(){
	Ship robot;
	usleep(5000000);
	robot.Shutdown();
	return 0;
}
