//===========================================================
// Matt Kretchmar
// February 21, 2017
// testMain1.cpp
// This program has non-terminal unit tests for Rational class.
//===========================================================

#include <iostream>
#include <sstream>
#include <string>
#include <assert.h>
#include "Rational.h"
using namespace std;

//===========================================================
// test default constructor
//===========================================================
void test1 ( void )
{
	cout << "test1\n";
	Rational r1;
	ostringstream stream;
	stream << r1;
	string str = stream.str();
	assert(str == "0/1");
}
//===========================================================
// test one int constructor
//===========================================================
void test2 ( void )
{
	cout << "test2\n";
	Rational r1(5);
	assert(r1.getNumerator() == 5 && r1.getDenominator() == 1);
}
//===========================================================
// test two int constructor
//===========================================================
void test3 ( void )
{
	cout << "test3\n";
	Rational r1(5,3);
    assert(r1.getNumerator() == 5 && r1.getDenominator() == 3);
}
//===========================================================
// test two int constructor and reduce
//===========================================================
void test4 ( void )
{
	cout << "test4\n";
	Rational r1(5,10);
    assert(r1.getNumerator() == 1 && r1.getDenominator() == 2);
}
//===========================================================
// test copy constructor
//===========================================================
void test5 ( void )
{
	cout << "test5\n";
	Rational r2(5,3);
	Rational r1(r2);
    assert(r1.getNumerator() == 5 && r1.getDenominator() == 3);
}
//===========================================================
//===========================================================



//===========================================================
// main
//===========================================================
int main ( void )
{

	test1();
	test2();
	test3();
	test4();
	test5();

	return 0;
}
//===========================================================
//===========================================================

