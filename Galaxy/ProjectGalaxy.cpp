#include <iostream>
#include <string>
#include "Star.h"
#include "Planet.h"
#include "Moon.h"
#include "AstronomicalObject.h"
#include "Galaxy.h"
#include "CosmicVoid.h"
#include "SpiralGalaxy.h"

using namespace std;

ostream& operator <<(ostream &pout, Planet &p) {

	pout << "Age: " << p.planet_age << ", Diameter: " << p.p_diameter_km << ", Moons: " << p.moon_count;
	return pout;
}

//Main object stream operators

ostream& operator <<(ostream &gout, Galaxy &g) {
	string output = g.toString();
	gout << output;
	return gout;
}

int main() {

	int test;
	{
		Galaxy galaxy;
		cout << galaxy;
		//CosmicVoid cvoid;
		SpiralGalaxy sgalaxy;
	}
	cin >> test;

	return 0;
}