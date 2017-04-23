#include <iostream>
#include "Planet.h"
#include "Moon.h"
#include "Star.h"
#include "AstronomicalObject.h"
#include "Galaxy.h"
#include "SpiralGalaxy.h"
using namespace std;
//------------------------------------------------------------------------------------------NEXT CONSTRUCTOR


SpiralGalaxy::SpiralGalaxy() {

	number_of_arms = 6;

#ifdef _DEBUG
	cout << "Spiral galaxy created." << endl;
#endif
}


//------------------------------------------------------------------------------------------NEXT CONSTRUCTOR


SpiralGalaxy::SpiralGalaxy(const SpiralGalaxy &sg) {

	number_of_arms = sg.number_of_arms;

#ifdef _DEBUG
	cout << "Spiral galaxy copied." << endl;
#endif
}