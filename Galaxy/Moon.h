#pragma once

class Moon
{
public:

	Moon();
	Moon(const Moon &m);
	~Moon();

	//---METHODS:
	int returnDiameter();

	//---OPERATORS:
	bool operator==(const Moon &m);
	Moon& operator=(const Moon &m);

private:
	int m_diameter_km;
	bool humans_visited;
};