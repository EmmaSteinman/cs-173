//==========================================================
//Matthew Rinker
//TestMain3.cpp
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
void test23(void)
{
	cout<<"T23\n";
	Complex c = Complex(1,1);
	c = c/0;
}
//==========================================================
int main(void)
{
	test23();

	return(0);
}
