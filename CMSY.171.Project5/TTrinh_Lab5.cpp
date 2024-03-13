// Program written by Tommy Trinh
// March 5, 2024
// This program shows a number of different operator overloads
// and shows planets and their moons
#include <iostream>
#include <string>
#include "Planet.h"
using namespace std;

// define function prototypes
void header();

int main()
{
	// call header
	header();

	Planet planet1("Jupiter");
	Planet planet2, planet3, planet4, planet5, planet6;

	cout << "Using cout and the standard streaming operator:\n";
	cout << "Planet name: " << planet1.getName() << endl
		<< "Planet number: " << planet1.getNumPlanet() << endl
		<< "Planet Moons: " << planet1.getNumMoons() << endl << endl;
	cout << "Using cout and the overloaded streaming operator:\n";
	cout << planet1;

	// use prefix operator
	planet2 = ++planet1;
	cout << "Using the prefix operator for planet 1 and planet 2:\n"
		<< planet1 << planet2;

	// use postfix operator
	planet3 = planet1++;
	cout << "Using the postfix operator for planet 1 and planet 3:\n"
		<< planet1 << planet3;

	// use input stream
	cout << "Using the overloaded input streaming operator for planet 4:\n";
	cin >> planet4;
	cout << planet4;

	// use overloaded -
	cout << "Using the overloaded '-' operator for planet 5:\n";
	planet5 = -planet1;
	cout << planet5;

	// use overloaded +
	cout << "Using the overloaded '+' operator for planet 6:\n";
	planet6 = +planet6;
	cout << planet6;

	//goodbye message
	cout << "Thank you for using the program!\n\n";

	// end of main
	system("pause");
	return 0;
}

// display program info to user
void header()
{
	cout << "\t\t\t\t\tCMSY 171 Lab 5\n"
		<< "Copyright 2024 - Howard Community College All rights reserved; "
		<< "Unauthorized duplication prohibited.\n\n"
		<< "\t\t\tWelcome to CMSY-171 Planet Operations Program\n\n";
}