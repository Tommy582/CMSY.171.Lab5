#ifndef PLANET_H
#define PLANET_H
#include <iostream>
#include <string>
using namespace std;

// global constants
const int
MERCURY = 1,					// planet number for mercury
VENUS = 2,						// planet number for venus
EARTH = 3,						// planet number for earth
MARS = 4,						// planet number for mars
JUPITER = 5,					// planet number for jupiter
SATURN = 6,						// planet number for saturn
URANUS = 7,						// planet number for uranus
NEPTUNE = 8,					// planet number for neptune
MERCURY_MOONS = 0,				// number of mercury moons
VENUS_MOONS = 0,				// number of venus moons
EARTH_MOONS = 1,				// number of earth moons
MARS_MOONS = 2,					// number of mars moons
JUPITER_MOONS = 79,				// number of jupiter moons
SATURN_MOONS = 82,				// number of saturn moons
URANUS_MOONS = 28,				// number of uranus moons
NEPTUNE_MOONS = 14;				// number of neptune moons

class Planet
{
private:
	string name;				// holds name of planet
	int numPlanet,				// holds number of planet
		numMoons;				// holds number of moons for each planet
	void setNumPlanet();		// sets the planet number based on planet name
	void setNumMoons(int);		// sets the number of moons based on planet number
	void setName(int numPlanet);// set sthe planet name based on planet number
public:
	Planet();					// default constructor
	Planet(const string&);		// constructor that accepts planet name
	string getName()const;		// returns planet name
	int getNumPlanet()const;	// returns planet number
	int getNumMoons()const;		// returns planet moons

	//overloaded operators
	Planet operator=(Planet);
	Planet operator + ();
	Planet operator-();
	Planet operator++();
	Planet operator++(int);
	friend ostream& operator<<(ostream& out, Planet& s);
	friend istream& operator>>(istream& in, Planet& s);
};
#endif