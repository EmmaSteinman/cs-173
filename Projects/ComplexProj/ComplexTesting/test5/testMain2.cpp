//===========================================================
// Noah Anderson
// March 20, 2017
// testMain2.cpp
// This program has a terminal unit test for Rational class.
//===========================================================

#include <iostream>
#include <sstream>
#include <string>
#include "Complex.h"
using namespace std;

//===========================================================
// tests exponentiation function for complex ^ -x
//===========================================================
void terminal1 ( void )
{
	cout << "test2\n";
    Complex c1(4,4);
	Complex c3 = c1 ^ -2;
} 
//===========================================================
// main
//===========================================================
int main ( void )
{
	terminal1();

	return 0;
}
//===========================================================
//===========================================================

