#pragma once
class AstronomicalObject;
class Galaxy;
class Star;
class Planet;
class Moon;


class SpiralGalaxy : public Galaxy
{
public:

	SpiralGalaxy();
	SpiralGalaxy(const SpiralGalaxy &sg);

	friend std::ostream& operator <<(std::ostream &sgout, SpiralGalaxy &sg);
	virtual std::string toString();

protected:
	int number_of_arms;
};