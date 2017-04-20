#include <iostream>
#include "AstronomicalObject.h"
using namespace std;

AstronomicalObject::AstronomicalObject() {

	star_count = 251000;
	diameter_ly = 150000;

#ifdef _DEBUG
	cout << "Astronomical object created." << endl;
#endif
}