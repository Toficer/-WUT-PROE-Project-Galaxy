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

protected:
	int number_of_arms;
};