#include <iostream>
#include "AstronomicalObject.h"
#include "CosmicVoid.h"
using namespace std;

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