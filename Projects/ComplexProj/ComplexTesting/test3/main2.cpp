//===========================================================
// Colin Smith
// March 8, 2017
// main.cpp
// This program has non-terminal unit tests for Complex class.
//===========================================================

#include <iostream>
#include <sstream>
#include <string>
#include <assert.h>
#include "Complex.h"

using namespace std;

//===========================================================
//prototypes
//===========================================================
void test200 ( void );


//===========================================================
// main
//===========================================================
int main ( void )
{
	test200();

	return 0;
}
//===========================================================
// test cout
//===========================================================
void test200 ( void )
{
	cout << "test1" << endl;
	Complex z(1,-2);
	cout << z << endl;
}
