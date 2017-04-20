#include <iostream>
#include "Planet.h"
#include "Moon.h"
#include "Star.h"
#include "Galaxy.h"
using namespace std;

int Galaxy::galaxy_count = 0;

int Galaxy::countGalaxies() {
	return galaxy_count;
}

//------------------------------------------------------------------------------------------NEXT CONSTRUCTOR


Galaxy::Galaxy() {

	star_count = 251000;
	galaxy_age = 13700;
	diameter_ly = 150000;

	inhabited_planet = new Planet;

#ifdef _DEBUG
	cout << "inhabited_planet (galaxy) created." << endl << endl; //debug-only message
#endif

	interesting_moon = new Moon;

#ifdef _DEBUG
	cout << "interesting_moon (galaxy) created." << endl << endl; //debug-only message

	cout << "Galaxy created." << endl;
#endif

	galaxy_count++;
}


//------------------------------------------------------------------------------------------NEXT CONSTRUCTOR


Galaxy::Galaxy(const Galaxy &g) {

	star_count = g.star_count;
	galaxy_age = g.galaxy_age;
	diameter_ly = g.diameter_ly;

	inhabited_planet = new Planet[1];
	inhabited_planet[0] = g.inhabited_planet[0];

#ifdef _DEBUG
	cout << "inhabited_planet (galaxy) copied." << endl << endl; //debug-only message
#endif

	interesting_moon = new Moon[1];
	interesting_moon[0] = g.interesting_moon[0];

#ifdef _DEBUG
	cout << "interesting_moon (galaxy) copied." << endl << endl; //debug-only message

	cout << "Galaxy copied." << endl;
#endif

	galaxy_count++;
}


//------------------------------------------------------------------------------------------DESTRUCTOR


Galaxy::~Galaxy() {

	delete inhabited_planet;

#ifdef _DEBUG
	cout << "inhabited_planet (galaxy) deleted. SC: " << star_count << endl << endl; //debug-only message
#endif

	delete interesting_moon;

#ifdef _DEBUG
	cout << "interesting_moon (galaxy) deleted. SC: " << star_count << endl << endl; //debug-only message
#endif

#ifdef _DEBUG
	cout << "Galaxy deleted. SC: " << star_count << endl << endl; //debug-only message
#endif

	galaxy_count--;
}