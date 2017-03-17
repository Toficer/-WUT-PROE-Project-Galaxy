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

void classTestingFunction() {

	cout << "galaxy_count: " << Galaxy::countGalaxies() << endl;
	cout << endl << endl << "--------------------------------------------------------" << endl << endl;
	Galaxy milky_way;
	cout << endl << endl << "--------------------------------------------------------" << endl << endl;
	cout << "galaxy_count: " << Galaxy::countGalaxies() << endl;
	cout << endl << endl << "--------------------------------------------------------" << endl << endl;
}

void operatorTestingFunction() {
	cout << "galaxy_count: " << Galaxy::countGalaxies() << endl;
	cout << endl << endl << "--------------------------------------------------------" << endl << endl;
	Galaxy milky_way;
	cout << endl << endl << "--------------------------------------------------------" << endl << endl;
	cout << "galaxy_count: " << Galaxy::countGalaxies() << endl;
	cout << endl << endl << "--------------------------------------------------------" << endl << endl;

	//-------------------------------------------------TESTING OPERATORS:

	cout << "==Result: " << (milky_way.sol.interesting_planets[0] == milky_way.inhabited_planet[0]) << " | Expected: 1" << endl;

	milky_way.sol.interesting_planets[0] = milky_way.inhabited_planet[0];
	cout << "=Result: " << milky_way.sol.interesting_planets[0] << endl;

	++milky_way.sol.interesting_planets[0];
	cout << "++Result: " << milky_way.sol.interesting_planets[0] << " | Expected diameter: 12001" << endl;

	--milky_way.sol.interesting_planets[0];
	cout << "--Result: " << milky_way.sol.interesting_planets[0] << " | Expected diameter: 12000" << endl;

	milky_way.sol.interesting_planets[0]++;
	cout << "_++Result: " << milky_way.sol.interesting_planets[0] << " | Expected moons: 2" << endl;

	cout << "[]Result: " << milky_way.sol.interesting_planets[0][6] << " | Expected: 0" << endl;

	++milky_way.sol.interesting_planets[0];
	++milky_way.sol.interesting_planets[0];
	cout << "(int)Result: " << (int)milky_way.sol.interesting_planets[0] << " | Expected: 15402" << endl;

	cout << ">Result: " << (milky_way.sol.interesting_planets[0] > milky_way.inhabited_planet[0]) << " | Expected: 1" << endl;

	Planet test = (milky_way.sol.interesting_planets[0] + milky_way.inhabited_planet[0]);
	cout << "+Result: " << test << endl << " | Expected: 0, 15119.05259873847 ~ 15120, 3" << endl;


	cout << endl << endl << "--------------------------------------------------------" << endl << endl;
}


int main() {

	int test;
	classTestingFunction();

	#ifdef _DEBUG
		operatorTestingFunction();
	#endif

	cin >> test;

	return 0;
}