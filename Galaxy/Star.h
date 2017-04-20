#pragma once
class Planet;

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

	Planet *interesting_planets;
};