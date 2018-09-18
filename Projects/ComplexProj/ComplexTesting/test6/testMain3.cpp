//===========================================================
// Kassandra Ortega
// March 20, 2017
// testMain3.cpp
// This program has a terminal unit test for Complex class.
//===========================================================

#include <iostream>
#include <sstream>
#include <string>
#include <assert.h>
#include "Complex.h"
using namespace std;

//===========================================================
// test complex number raised to a negative power
//===========================================================
void test200 (void)
{
    cout << "test200\n";
    Complex c2(6, 2);
	Complex c1;
	c1 = c2^-2;
	cout << c1 << endl;
	assert(c1.getReal() == 0.02f && c1.getImag() == 0.02f);
}

//===========================================================
// main
//===========================================================
int main (void)
{
	test200();
	return 0;
}
