#include <iostream>
#include "Planet.h"
#include "Moon.h"
#include "Star.h"
#include "AstronomicalObject.h"
#include "Galaxy.h"
#include "SpiralGalaxy.h"
using namespace std;

string SpiralGalaxy::toString() {
	std::string s1 = std::to_string(diameter_ly);
	std::string s2 = std::to_string(star_count);
	std::string s3 = std::to_string(galaxy_age);
	std::string s4 = std::to_string(number_of_arms);
	return (s1 + "\n" + s2 + "\n" + s3 + "\n" + s4);
}


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