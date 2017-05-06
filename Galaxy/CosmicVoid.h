#pragma once
class AstronomicalObject;

///Inherits from the "AstronomicalObject" class.
class CosmicVoid : public AstronomicalObject
{
public:
	///Main constructor, forces the parent class to be created with 0 stars.
	CosmicVoid() : AstronomicalObject(0, 150000)
	{
		using namespace std;

		alien_presence = false;

		#ifdef _DEBUG
				cout << "Cosmic void created." << endl;
		#endif
	};

	///Copy constructor, not necessary as this object does not make use of dynamic memory allocation.
	CosmicVoid(const CosmicVoid &c);

	///Output stream operator.
	friend std::ostream& operator <<(std::ostream &vout, CosmicVoid &v);
	///Virtual method converting the object to a string.
	virtual std::string toString();

private:
	bool alien_presence;
};