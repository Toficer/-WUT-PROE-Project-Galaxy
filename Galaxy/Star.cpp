#include <iostream>
#include "Star.h"
#include "Planet.h"
using namespace std;


//------------------------------------------------------------------------------------------NEXT CONSTRUCTOR


Star::Star() {

	interesting_planet_count = 1;
	planet_count = 10;
	temperature = 5700;
	diameter_km = 1400000;

	if (planet_count != 0) {
	interesting_planets = new Planet[interesting_planet_count];

#ifdef _DEBUG
	cout << "interesting_planets (star) created." << endl; //debug-only message
#endif

	}

#ifdef _DEBUG
	cout << "Star created." << endl;
#endif

}


//------------------------------------------------------------------------------------------NEXT CONSTRUCTOR


Star::Star(const Star &s) {

	interesting_planet_count = s.interesting_planet_count;
	planet_count = s.planet_count;
	temperature = s.temperature;
	diameter_km = s.diameter_km;

	if (interesting_planet_count > 0) {
		interesting_planets = new Planet[interesting_planet_count];
		for (int i = 0; i < interesting_planet_count; i++) {
			interesting_planets[i] = s.interesting_planets[i];
		}

#ifdef _DEBUG
		cout << "interesting_planets (star) copied." << endl; //debug-only message
#endif
	}

#ifdef _DEBUG
	cout << "Star copied." << endl;
#endif

}


//------------------------------------------------------------------------------------------NEXT CONSTRUCTOR


Star::Star(int planet_count, int temperature, int diameter_km, int interesting_planet_count) {

	this->planet_count = planet_count;
	this->temperature = temperature;
	this->diameter_km = diameter_km;
	this->interesting_planet_count = interesting_planet_count;

	if (interesting_planet_count > 0) {
		interesting_planets = new Planet[interesting_planet_count];

#ifdef _DEBUG
		cout << "interesting_planets (star) created." << endl; //debug-only message
#endif

	}

#ifdef _DEBUG
	cout << "Star created." << endl;
#endif

}


//------------------------------------------------------------------------------------------NEXT CONSTRUCTOR


Star::Star(int planet_count, int temperature, int diameter_km) {

	this->planet_count = planet_count;
	this->temperature = temperature;
	this->diameter_km = diameter_km;
	interesting_planet_count = 1;

	if (interesting_planet_count > 0) {
		interesting_planets = new Planet[interesting_planet_count];

#ifdef _DEBUG
		cout << "interesting_planets (star) created." << endl; //debug-only message
#endif

	}

#ifdef _DEBUG
	cout << "Star created." << endl;
#endif

}


//------------------------------------------------------------------------------------------NEXT CONSTRUCTOR


Star::Star(int planet_count, int temperature) {

	this->planet_count = planet_count;
	this->temperature = temperature;
	diameter_km = 1400000;
	interesting_planet_count = 1;

	if (interesting_planet_count > 0) {
		interesting_planets = new Planet[interesting_planet_count];

#ifdef _DEBUG
		cout << "interesting_planets (star) created." << endl; //debug-only message
#endif

	}

#ifdef _DEBUG
	cout << "Star created." << endl;
#endif

}


//------------------------------------------------------------------------------------------NEXT CONSTRUCTOR


Star::Star(int planet_count) {

	this->planet_count = planet_count;
	temperature = 5700;
	diameter_km = 1400000;
	interesting_planet_count = 1;

	if (interesting_planet_count > 0) {
		interesting_planets = new Planet[interesting_planet_count];

#ifdef _DEBUG
		cout << "interesting_planets (star) created." << endl; //debug-only message
#endif

	}

#ifdef _DEBUG
	cout << "Star created." << endl;
#endif

}


//------------------------------------------------------------------------------------------DESTRUCTOR


Star::~Star() {

	delete []interesting_planets;

#ifdef _DEBUG
	cout << "interesting_planets (star) deleted." << endl; //debug-only message
	cout << "Star deleted." << endl;
#endif

}