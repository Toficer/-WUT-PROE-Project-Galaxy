#pragma once
//class Galaxy;

class AstronomicalObject
{
public:

	AstronomicalObject(int star_count = 317000);

protected:
	int star_count; //in M stars
	int diameter_ly;
};