#pragma once
class Planet;
#include <vector>

class Star
{
public:

	Star();
	Star(const Star &s);
	~Star();

private:
	int planet_count, interesting_planet_count;
	int temperature; //on the surface
	int diameter_km;

	std::vector <Planet> interesting_planets;
};