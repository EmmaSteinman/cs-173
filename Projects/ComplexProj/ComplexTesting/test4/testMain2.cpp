//==========================================================
//Matthew Rinker
//TestMain2.cpp
//10 March 2017
//==========================================================
// This is your file for testing your Complex class.
// Add more commands in here as you build them into your class.
//==========================================================

#include <iostream>
#include <sstream>
#include <string>
#include <assert.h>
#include "Complex.h"

using namespace std;
//==========================================================
void test22(void)
{
	cout<<"T22\n";
	Complex c = Complex(1,1);
	Complex c1;
	c = c/c1;
}
//==========================================================
int main(void)
{
	test22();

	return(0);
}
