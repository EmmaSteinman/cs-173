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
// test divide by zero error
//===========================================================
void test61 ( void )
{
    cout << "test 61\n";
    Complex c1(5, 5);
    int n;
    c1 = c1 / n;
    if (n == 0)
    {
      cout << "cannot divide by 0\n";
      exit(1);
    }
}
//===========================================================
// main
//===========================================================
int main ( void )
{
	test61();
	return 0;
}
//===========================================================
//===========================================================
