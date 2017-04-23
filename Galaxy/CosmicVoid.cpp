#include <iostream>
#include "AstronomicalObject.h"
#include "CosmicVoid.h"
using namespace std;

string CosmicVoid::toString() {
	std::string s1 = std::to_string(diameter_ly);
	std::string s2 = std::to_string(star_count);
	std::string s3;
		if (alien_presence) {
			s3 = "Alien life present";
		}
		else {
			s3 = "Alien life absent";
		}

	return ("Diameter (ly): " + s1 + ", " + "Star count: " + s2 + ", " + s3);
}

CosmicVoid::CosmicVoid(const CosmicVoid &c)
{
	using namespace std;

	alien_presence = c.alien_presence;
	star_count = c.star_count;
	diameter_ly = c.diameter_ly;

#ifdef _DEBUG
	cout << "Cosmic void copied." << endl;
#endif
};