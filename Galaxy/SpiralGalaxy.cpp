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
	std::string s5 = std::to_string(3);
	return (s5 + "\n" + s1 + "\n" + s2 + "\n" + s3 + "\n" + s4);
}


//------------------------------------------------------------------------------------------NEXT CONSTRUCTOR


SpiralGalaxy::SpiralGalaxy(int diameter_ly, int star_count, int galaxy_age, int number_of_arms) {

	this->number_of_arms = number_of_arms;
	this->galaxy_age = galaxy_age;
	this->diameter_ly = diameter_ly;
	this->star_count = star_count;

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