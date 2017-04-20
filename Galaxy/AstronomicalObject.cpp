#include <iostream>
#include "AstronomicalObject.h"
using namespace std;

AstronomicalObject::AstronomicalObject(int star_count) {

	this->star_count = star_count;
	diameter_ly = 150000;

#ifdef _DEBUG
	cout << "Astronomical object created." << endl;
#endif
}