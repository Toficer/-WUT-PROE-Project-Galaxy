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

private:
	bool alien_presence;
};