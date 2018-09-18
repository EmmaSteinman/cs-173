//=================================================================
// Jordan Gelber
// March 20, 2017
// testMain2.cpp
// This program has terminal unit tests for Complex class.
//=================================================================

#include <iostream>
#include <sstream>
#include <string>
#include <assert.h>
#include "Complex.h"
using namespace std;


//===========================================================
// test division with float 0 error
//===========================================================
void test28 ( void )
{
    cout << "test28\n";
    Complex c2(2,3);
	float n = 0;
	Complex c1 = c2/n;
}

//===========================================================
// main
//===========================================================
int main ( void )
{

	test28();
	return 0;
}
//===========================================================
//===========================================================

