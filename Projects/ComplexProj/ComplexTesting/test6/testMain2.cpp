//===========================================================
// Kassandra Ortega
// March 20, 2017
// testMain2.cpp
// This program has a terminal unit test for Complex class.
//===========================================================

#include <iostream>
#include <sstream>
#include <string>
#include <assert.h>
#include "Complex.h"
using namespace std;

//===========================================================
// test compelx number with divide by zero error
//===========================================================
void test100 (void)
{
    cout << "test100\n";
    Complex c2(3, 4);
	Complex c1;
	c1 = c2 / 0;
	assert(exit);
}

//===========================================================
// main
//===========================================================
int main (void)
{
	test100();
	return 0;
}
