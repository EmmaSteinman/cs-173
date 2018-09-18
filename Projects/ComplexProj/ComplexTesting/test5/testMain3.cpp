//===========================================================
// Noah Anderson
// March 20, 2017
// testMain2.cpp
// This program has a terminal unit test for Complex class.
//===========================================================

#include <iostream>
#include <sstream>
#include <string>
#include "Complex.h"
using namespace std;

//===========================================================
// tests exponentiation operator for complex ^ 0
//===========================================================
void terminal2 ( void )
{
    cout << "test3\n";
    Complex c1(4,2);
	Complex c2 = c1 ^ 0;
}
//===========================================================
// main
//===========================================================
int main ( void )
{
	terminal2();

	return 0;
}
//===========================================================
//===========================================================

