#pragma once
#include <string>
//class Galaxy;

class AstronomicalObject
{
public:

	AstronomicalObject(int star_count = 317000);
	virtual std::string toString() = 0;

protected:
	int star_count; //in M stars
	int diameter_ly;
};