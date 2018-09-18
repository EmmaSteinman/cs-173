//===========================================================
//Hannah Kerr
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
// test negative exponentiation
//===========================================================
void test62 ( void )
{
    cout << "test 62\n";
    Complex c1(5, 5);
    int n;
    c1 = c1^n;
    if (n > 0)
    {
      cout << "cannot raise to a negative power\n";
      exit(1);
    }
}
//===========================================================
// main
//===========================================================
int main ( void )
{
	test62();
	return 0;
}
//===========================================================
//===========================================================
