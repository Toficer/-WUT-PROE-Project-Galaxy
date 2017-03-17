#pragma once
class Planet;

class Star
{
	friend void classTestingFunction();
	friend void operatorTestingFunction();
public:

	Star();
	Star(const Star &s);
	Star(int planet_count, int temperature, int diameter_km, int interesting_planet_count);
	Star(int planet_count, int temperature, int diameter_km);
	Star(int planet_count, int temperature);
	Star(int planet_count);
	~Star();

private:
	int planet_count, interesting_planet_count;
	int temperature; //on the surface
	int diameter_km;

	Planet *interesting_planets;
};