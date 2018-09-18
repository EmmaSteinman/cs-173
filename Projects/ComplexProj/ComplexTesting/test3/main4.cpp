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
void test400 ( void );


//===========================================================
// main
//===========================================================
int main ( void )
{
	test400();

	return 0;
}
//===========================================================
// test cout
//===========================================================
void test400 ( void )
{
	cout << "test400" << endl;
	Complex z(0.0F,2.5F);
	cout << z << endl;
}x
