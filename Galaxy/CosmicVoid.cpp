#include <iostream>
#include "AstronomicalObject.h"
#include "CosmicVoid.h"
using namespace std;

string CosmicVoid::toString() {
	std::string s1 = std::to_string(diameter_ly);
	std::string s2 = std::to_string(star_count);
	std::string s3;
	std::string s4 = std::to_string(1);
		if (alien_presence) {
			s3 = "1";
		}
		else {
			s3 = "0";
		}

	return (s4 + "\n" + s1 + "\n" + s2 + "\n" + s3);
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