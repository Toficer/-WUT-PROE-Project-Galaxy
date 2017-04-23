#pragma once
class Star;
class Planet;
class Moon;
class AstronomicalObject;


class Galaxy: public AstronomicalObject
{
public:

	Galaxy();
	Galaxy(const Galaxy &g);
	~Galaxy();
	friend std::ostream& operator <<(std::ostream &gout, Galaxy &g);
	virtual std::string toString();

protected:
	int galaxy_age; //in M Earth ears
	static int galaxy_count;
	static int countGalaxies();

	static Star Proxima_Centauri;
	Star sol;
	Planet *inhabited_planet;
	Moon *interesting_moon;
};