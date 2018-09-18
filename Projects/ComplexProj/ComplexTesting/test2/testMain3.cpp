//=================================================================
// Jordan Gelber
// Match 20, 2017
// testMain3.cpp
// This program has terminal unit tests for Complex class.
//=================================================================

#include <iostream>
#include <sstream>
#include <string>
#include <assert.h>
#include "Complex.h"
using namespace std;


//===========================================================
// test division with 2 Complex 0 error
//===========================================================
void test29 ( void )
{
    cout << "test29\n";
	Complex c3(2,3);
    Complex c2(0,0);
	Complex c1 = c3/c2;
}

//===========================================================
// main
//===========================================================
int main ( void )
{

	test29();
	return 0;
}
//===========================================================
//===========================================================

