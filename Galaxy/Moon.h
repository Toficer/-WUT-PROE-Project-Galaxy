#pragma once

class Moon
{
	friend void classTestingFunction();
	friend void operatorTestingFunction();
public:

	Moon();
	Moon(const Moon &m);
	Moon(int m_diameter_km, bool humans_visited);
	Moon(int m_diameter_km);
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