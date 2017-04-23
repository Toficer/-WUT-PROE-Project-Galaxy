#pragma once
class AstronomicalObject;

class CosmicVoid : public AstronomicalObject
{
public:

	CosmicVoid() : AstronomicalObject(0)
	{
		using namespace std;

		alien_presence = false;

		#ifdef _DEBUG
				cout << "Cosmic void created." << endl;
		#endif
	};

	CosmicVoid(const CosmicVoid &c);

	friend std::ostream& operator <<(std::ostream &vout, CosmicVoid &v);
	virtual std::string toString();

private:
	bool alien_presence;
};