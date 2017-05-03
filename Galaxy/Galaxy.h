#pragma once
#include <vector>
class Star;
class Planet;
class Moon;
class AstronomicalObject;

///Inherits from the "AstronomicalObject" class, base class of the project.
class Galaxy: public AstronomicalObject
{
public:

	///Main constructor.
	Galaxy();
	///Copy constructor.
	Galaxy(const Galaxy &g);
	///Destructor.
	~Galaxy();
	///Output stream operator.
	friend std::ostream& operator <<(std::ostream &gout, Galaxy &g);
	///Virtual method converting the object to a string.
	virtual std::string toString();

protected:
	int galaxy_age; //in M Earth ears
	static int galaxy_count;
	static int countGalaxies();

	static Star Proxima_Centauri;
	Star sol;
	std::vector<Planet>inhabited_planet;
	std::vector <Moon> interesting_moon;
};