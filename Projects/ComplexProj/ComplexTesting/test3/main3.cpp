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
void test300 ( void );


//===========================================================
// main
//===========================================================
int main ( void )
{
	test300();

	return 0;
}
//===========================================================
// test cout
//===========================================================
void test300 ( void )
{
	cout << "test1" << endl;
	Complex z(2.5F,0.0F);
	cout << z << endl;
}
