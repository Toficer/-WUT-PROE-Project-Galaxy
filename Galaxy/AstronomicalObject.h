#pragma once
#include <string>

///Main abstract class of the project.
class AstronomicalObject
{
public:
	///Main constructor, sets the star_count to its default value of 317000M.
	AstronomicalObject(int star_count = 317000, int diameter_ly = 150000);
	/// Virtual method converting the object to a string.
	virtual std::string toString() = 0;
	///Output stream operator.
	friend std::ostream& operator <<(std::ostream &aout, AstronomicalObject &a);

protected:
	int star_count; //in M stars
	int diameter_ly;
};