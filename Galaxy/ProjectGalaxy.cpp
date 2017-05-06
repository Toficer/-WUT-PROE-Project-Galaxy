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

ostream& operator <<(ostream &aout, AstronomicalObject &a) {
	string output = a.toString();
	aout << output;
	return aout;
}

//Interface functions and exception handling

void setOption(int &x) {
	cin >> x;
	if (x != 5 && x != 4 && x != 3 && x != 2 && x != 1) {
		throw string("\n\nIncorrect input, please enter an integer between 1 and 5.\n\n");
	}
}

void writeString(int x, vector <AstronomicalObject*> objects) {
	if (x >= objects.size()) {
		throw string("\n\nThere is no object of that number.\n\n");
	}
	cout << endl << *objects[x] << endl << endl;
}

int main() {

		vector <AstronomicalObject*> objects;
		Galaxy galaxy;
		CosmicVoid cvoid;
		SpiralGalaxy sgalaxy;
		objects.push_back(&galaxy);
		objects.push_back(&cvoid);
		objects.push_back(&sgalaxy);
		//cout << *objects[0] << endl;
		//cout << *objects[1] << endl;
		//cout << *objects[2] << endl;

	int endp = 0;
	int option = 0, x;

	do {
		cout << "What would you like to do?" << endl;
		cout << "Enter the chosen number and press enter." << endl;
		cout << "[1] - display the number of existing objects" << endl;
		cout << "[2] - save an object to a file" << endl;
		cout << "[3] - read an object from a file" << endl;
		cout << "[4] - output a string describing an existing object" << endl;
		cout << "[5] - exit the program" << endl;

		try {
			setOption(option);
		}
		catch (string err) {
			cout << err << endl;
		}

		if (option == 5) {
			endp = 1;
		}

		else if (option == 4) {
			cout << "Please enter the object's number." << endl;
			cin >> x;
			try {
				writeString(x, objects);
			}
			catch (string err) {
				cout << err << endl;
			}
		}

		else if (option == 1) {
			cout << "\n\nCurrently there are " << objects.size() << " objects in the container.\n\n" << endl;
		}

		cin.clear();
		cin.ignore(100, '\n');

	} while (endp == 0);

	return 0;
}