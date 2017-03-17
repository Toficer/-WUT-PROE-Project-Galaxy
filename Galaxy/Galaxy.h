#pragma once
class Star;
class Planet;
class Moon;


class Galaxy
{
	friend void classTestingFunction();
	friend void operatorTestingFunction();
public:

	Galaxy();
	Galaxy(const Galaxy &g);
	Galaxy(int star_count, int age, int diameter_ly);
	Galaxy(int star_count, int age);
	Galaxy(int star_count);
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