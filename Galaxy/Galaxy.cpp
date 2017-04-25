#include <iostream>
#include "Planet.h"
#include "Moon.h"
#include "Star.h"
#include "AstronomicalObject.h"
#include "Galaxy.h"
#include <vector>
using namespace std;

int Galaxy::galaxy_count = 0;

int Galaxy::countGalaxies() {
	return galaxy_count;
}

string Galaxy::toString() {
	std::string s1 = std::to_string(diameter_ly);
	std::string s2 = std::to_string(star_count);
	std::string s3 = std::to_string(galaxy_age);
	return ("Diameter (ly): " + s1 + ", " + "Star count: " + s2 + " " + "Age: " + s3);
}

//------------------------------------------------------------------------------------------NEXT CONSTRUCTOR


Galaxy::Galaxy() {

	galaxy_age = 13700;

	inhabited_planet.push_back(Planet());

#ifdef _DEBUG
	cout << "inhabited_planet (galaxy) created." << endl << endl; //debug-only message
#endif

	interesting_moon.push_back(Moon());

#ifdef _DEBUG
	cout << "interesting_moon (galaxy) created." << endl << endl; //debug-only message

	cout << "Galaxy created." << endl;
#endif

	galaxy_count++;
}


//------------------------------------------------------------------------------------------NEXT CONSTRUCTOR


Galaxy::Galaxy(const Galaxy &g) {

	galaxy_age = g.galaxy_age;

	inhabited_planet.push_back(g.inhabited_planet[0]);

#ifdef _DEBUG
	cout << "inhabited_planet (galaxy) copied." << endl << endl; //debug-only message
#endif

	interesting_moon.push_back(g.interesting_moon[0]);

#ifdef _DEBUG
	cout << "interesting_moon (galaxy) copied." << endl << endl; //debug-only message

	cout << "Galaxy copied." << endl;
#endif

	galaxy_count++;
}


//------------------------------------------------------------------------------------------DESTRUCTOR


Galaxy::~Galaxy() {

	inhabited_planet.clear();

#ifdef _DEBUG
	cout << "inhabited_planet (galaxy) deleted." << endl << endl; //debug-only message
#endif

	interesting_moon.clear();

#ifdef _DEBUG
	cout << "interesting_moon (galaxy) deleted." << endl << endl; //debug-only message
#endif

#ifdef _DEBUG
	cout << "Galaxy deleted." << endl << endl; //debug-only message
#endif

	galaxy_count--;
}