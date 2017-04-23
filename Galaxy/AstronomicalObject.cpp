#include <iostream>
#include <string>
#include "AstronomicalObject.h"
using namespace std;

AstronomicalObject::AstronomicalObject(int star_count) {

	this->star_count = star_count;
	diameter_ly = 150000;

#ifdef _DEBUG
	cout << "Astronomical object created." << endl;
#endif
}

string AstronomicalObject::toString() {
	std::string s1 = std::to_string(diameter_ly);
	std::string s2 = std::to_string(star_count);
	return (s1 + " " + s2);
}