#include <iostream>
#include <string>
#include "Star.h"
#include "Planet.h"
#include "Moon.h"
#include "Galaxy.h"

using namespace std;

ostream& operator <<(ostream &pout, Planet &p) {

	pout << "Age: " << p.planet_age << ", Diameter: " << p.p_diameter_km << ", Moons: " << p.moon_count;
	return pout;
}

int main() {

	int test;
	cin >> test;

	return 0;
}