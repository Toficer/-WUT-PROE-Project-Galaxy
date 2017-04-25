#pragma once
#include <string>
#include <vector>
class Moon;

class Planet
{
public:

	Planet();
	Planet(const Planet &p);
	~Planet();

	//---METHODS:
	int returnDiameter();

	//---OPERATORS:
	bool operator ==(const Planet &p);
	Planet& operator =(const Planet &p);
	Planet& operator ++(); //pre-increment, increases planet diameter
	Planet& operator --(); //pre-decrement, decreases planet diameter
	Planet& operator ++(int); //post-increment, adds a new, uninteresting moon
	int operator [](const int index); //returns the diameter of moon no. index, or 0, of said moon doesn't exist
	operator int(); //returns a sum of the planet's diameter and all its interesting moons' diameters, 
					//giving an idea of the system's size
	bool operator >(Planet &p); //compares the two planets' diameters, returns the result
	Planet operator +(const Planet &p); //merges two systems with the planet_age set to 0

	friend std::ostream& operator <<(std::ostream &pout, Planet &p); //returns information about the planet

private:
	int planet_age; //in M Earth years
	int p_diameter_km;
	int moon_count, interesting_moon_count;
	std::string planet_name;

	std::vector <Moon> interesting_moons;
};