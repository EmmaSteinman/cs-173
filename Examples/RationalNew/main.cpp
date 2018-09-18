//===========================================================
// Matt Kretchmar
// February 21, 2017
// Rational.cpp
// This program implements a Rational class object.
//===========================================================

#include <iostream>
#include <string>
#include "Rational.h"
using namespace std;

//===========================================================
// main
//===========================================================
int main ( void )
{
	Rational r1(1,2);
	Rational r2(2,3);
	Rational r3;

    r3 = r1 * r2;
    cout << r3 << " = " << r1 << " * " << r2 << endl;
    r3 = r1 / r2;
    cout << r3 << " = " << r1 << " / " << r2 << endl;
    r3 = r1 + r2;
    cout << r3 << " = " << r1 << " + " << r2 << endl;
    r3 = r1 - r2;
    cout << r3 << " = " << r1 << " - " << r2 << endl;
    r3 = -r1;
    cout << r3 << " = -" << r1 << endl;

    cout << "r1 > r2 ? " << (r1 > r2) << endl;
    cout << "r1 < r2 ? " << (r1 < r2) << endl;
    r1 = r2;
    cout << "r1 == r2 ? " << (r1 == r2) << endl;
	return 0;
}
//===========================================================
//===========================================================

