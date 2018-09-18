//===========================================================
// Matt Kretchmar
// February 21, 2017
// testMain2.cpp
// This program has a terminal unit test for Rational class.
//===========================================================

#include <iostream>
#include <sstream>
#include <string>
#include <assert.h>
#include "Rational.h"
using namespace std;

//===========================================================
// test default constructor with divide by zero error
//===========================================================
void test100 ( void )
{
    cout << "test1\n";
    Rational r1(1,0);
}

//===========================================================
// main
//===========================================================
int main ( void )
{

	test100();
	return 0;
}
//===========================================================
//===========================================================

