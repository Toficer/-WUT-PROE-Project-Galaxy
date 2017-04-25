#include <iostream>
#include <string>
#include "Star.h"
#include "Planet.h"
#include "Moon.h"
#include "AstronomicalObject.h"
#include "Galaxy.h"
#include "CosmicVoid.h"
#include "SpiralGalaxy.h"
#include <vector>

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

ostream& operator <<(ostream &vout, CosmicVoid &v) {
	string output = v.toString();
	vout << output;
	return vout;
}

ostream& operator <<(ostream &sgout, SpiralGalaxy &sg) {
	string output = sg.toString();
	sgout << output;
	return sgout;
}

int main() {

	int pause;
	{
		vector <AstronomicalObject*> objects;
		Galaxy galaxy;
		CosmicVoid cvoid;
		SpiralGalaxy sgalaxy;
		objects.push_back(&galaxy);
		objects.push_back(&cvoid);
		objects.push_back(&sgalaxy);
		cout << objects[0]->toString() << endl;
		cout << objects[1]->toString() << endl;
		cout << objects[2]->toString() << endl;
	}
	cin >> pause;

	return 0;
}