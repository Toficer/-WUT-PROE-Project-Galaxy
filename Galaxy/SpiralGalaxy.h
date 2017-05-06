#pragma once
class AstronomicalObject;
class Galaxy;
class Star;
class Planet;
class Moon;

/// Inherits from the "Galaxy" class.
class SpiralGalaxy : public Galaxy
{
public:

	///Main constructor.
	SpiralGalaxy(int number_of_arms = 6);
	///Copy constructor.
	SpiralGalaxy(const SpiralGalaxy &sg);

	/// Output stream operator.
	friend std::ostream& operator <<(std::ostream &sgout, SpiralGalaxy &sg);
	/// Virtual method converting the object to a string.
	virtual std::string toString();

protected:
	int number_of_arms;
};