#pragma once
class Star;
class Planet;
class Moon;


class Galaxy
{
public:

	Galaxy();
	Galaxy(const Galaxy &g);
	~Galaxy();

private:
	int star_count; //in M stars
	int galaxy_age; //in M Earth ears
	int diameter_ly;
	static int galaxy_count;
	static int countGalaxies();

	static Star Proxima_Centauri;
	Star sol;
	Planet *inhabited_planet;
	Moon *interesting_moon;
};