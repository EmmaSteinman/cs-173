//===========================================================
// Noah Anderson
// March 20, 2017
// testMain1.cpp
// This program has non-terminal unit tests for Complex class.
//===========================================================

#include <iostream>
#include <sstream>
#include <string>
#include <assert.h>	
#include "Complex.h"
using namespace std;

//===========================================================
// test default constructor
//===========================================================
void test1 ( void )
{
	cout << "test1\n";
	Complex c1;
	assert(c1.getReal() == 0 && c1.getImag() == 0);
}
//===========================================================
// test complex constructor
//===========================================================
void test2 ( void )
{
	cout << "test2\n";
	Complex c1(-5,-3);
    assert(c1.getReal() == -5 && c1.getImag() == -3);
}
//===========================================================
// test complex constructor
//===========================================================
void test3 ( void )
{
	cout << "test3\n";
	Complex c1(5,10);
    assert(c1.getReal() == 5 && c1.getImag() == 10);
}
//===========================================================
// test copy constructor
//===========================================================
void test4 ( void )
{
	cout << "test4\n";
	Complex c2(5,3);
	Complex c1(c2);
    assert(c1.getReal() == 5 && c1.getImag() == 3);
}
//===========================================================
// test addition operator #1
//===========================================================
void test5 ( void )
{
	cout << "test5\n";
    Complex c1(1,0);
	Complex c2(0,1);
	Complex c3 = c1 + c2;
	assert(c3.getReal() == 1 && c3.getImag() == 1);
}
//===========================================================
// test addition operator #2
//===========================================================
void test6 ( void )
{
	cout << "test6\n";
    Complex c1(6,8);
	Complex c2(3,12);
	Complex c3 = c1 + c2;
	assert(c3.getReal() == 9 && c3.getImag() == 20);
}
//===========================================================
// test addition operator #3
// integers
//===========================================================
void test7 ( void )
{
	cout << "test7\n";
    Complex c1(4,8);
	int c2 = (3);
	Complex c3 = c1 + c2;
	assert(c3.getReal() == 7 && c3.getImag() == 8);
}
//===========================================================
// test addition operator #4
// floats
//===========================================================
void test8 ( void )
{
	cout << "test8\n";
    Complex c1(8,23);
	float c2 = (3);
	Complex c3 = c1 + c2;
	cout << c3.getReal() << endl;
	assert(c3.getReal() == 11 && c3.getImag() == 23);
}
//===========================================================
// test subtraction operator #1
//===========================================================
void test9 ( void )
{
	cout << "test9\n";
    Complex c1(10,10);
	Complex c2(2,3);
	Complex c3 = c1 - c2;
	assert(c3.getReal() == 8 && c3.getImag() == 7);
}
//===========================================================
// test subtraction operator #2
//===========================================================
void test10 ( void )
{
	cout << "test10\n";
    Complex c1(10,10);
	Complex c2(10,10);
	Complex c3 = c1 - c2;
	assert(c3.getReal() == 0 && c3.getImag() == 0);
}
//===========================================================
// test subtraction operator #3
//===========================================================
void test11 ( void )
{
	cout << "test11\n";
    Complex c1(3,5);
	Complex c2(11,13);
	Complex c3 = c1 - c2;
	assert(c3.getReal() == -8 && c3.getImag() == -8);
}
//===========================================================
// test subtraction operator #4
//===========================================================
void test12 ( void )
{
	cout << "test12\n";
    Complex c1(4,7);
	int c2 = (3);
	Complex c3 = c1 - c2;
	assert(c3.getReal() == 1 && c3.getImag() == 7);
}
//===========================================================
// test subtraction operator #5
//===========================================================
void test13 ( void )
{
	cout << "test13\n";
    Complex c1(3,5);
	float c2 = (11.0);
	Complex c3 = c1 - c2;
	assert(c3.getReal() == (float) -8 && c3.getImag() == 5);
}
//===========================================================
// test multiplication operator
//===========================================================
void test14 ( void )
{
	cout << "test14\n";
    Complex c1(8,2);
	Complex c2(5,4);
	Complex c3 = c1 * c2;
	assert(c3.getReal() == 32 && c3.getImag() == 42);
}
//===========================================================
// test multiplication operator #2
//===========================================================
void test15 ( void )
{
	cout << "test15\n";
    Complex c1(8,2);
	Complex c2(0,0);
	Complex c3 = c1 * c2;
	assert(c3.getReal() == 0 && c3.getImag() == 0);
}
//===========================================================
// test multiplication operator #3
// integers
//===========================================================
void test16 ( void )
{
	cout << "test16\n";
    Complex c1(6,7);
	int c2 = (4);
	Complex c3 = c1 * c2;
	assert(c3.getReal() == 24 && c3.getImag() == 28);
}
//===========================================================
// test multiplication operator #4
// floats
//===========================================================
void test17 ( void )
{
	cout << "test17\n";
    Complex c1(4,9);
	float c2 = (1.32);
	Complex c3 = c1 * c2;
	cout << c3.getReal() << "  " << c3.getImag() << endl;
	assert(c3.getReal() == 5.28f && c3.getImag() == 11.88f);
}
//===========================================================
// test division operator #1
//===========================================================
void test18 ( void )
{
	cout << "test18\n";
	Complex c1(4,4);
	Complex c2(4,4);
	Complex c3 = c1 / c2;
	assert(c3.getReal() == 1 && c3.getImag() == 0);
}
//===========================================================
// test division operator #2
//===========================================================
void test19 ( void )
{
	cout << "test19\n";
	Complex c1(10,10);
	Complex c2(5,5);
	Complex c3 = c1 / c2;
	assert(c3.getReal() == 2 && c3.getImag() == 0);
}
//===========================================================
// test division operator #3
//===========================================================
void test20 ( void )
{
	cout << "test20\n";
	Complex c1(4,10);
	int c2 = (2);
	Complex c3 = c1 / c2;
	assert(c3.getReal() == 2 && c3.getImag() == 5);
}
//===========================================================
// test division operator #4
//===========================================================
void test21 ( void )
{
	cout << "test21\n";
	Complex c1(100,100);
	float c2 = (.25);
	Complex c3 = c1 / c2;
	assert(c3.getReal() == 400 && c3.getImag() == 400);
}
//===========================================================
// exponentiation test
//===========================================================
void test22 ( void )  
{
	cout << "test22\n";
	Complex c1(2,2);
	Complex c2 = c1 ^ 2;
	assert(c2.getReal() == 0 && c2.getImag() == 8);
}
//===========================================================
// negation test #1
//===========================================================
void test23 ( void )
{
	cout << "test23\n";
	Complex c1(12,12);
	Complex c2 = -c1;
	assert(c2.getReal() == -12 && c2.getImag() == -12);
}
//===========================================================
// negation test #2
//===========================================================
void test24 ( void )
{
	cout << "test24\n";
	Complex c1(-12,-12);
	Complex c2 = -c1;
	assert(c2.getReal() == 12 && c2.getImag() == 12);
}

//===========================================================
// conjugate test #1
//===========================================================
void test25 ( void )
{
	cout << "test25\n";
	Complex c1(2, 4);
	Complex c2 = ~c1;
	assert(c2.getReal() == 2 && c2.getImag() == -4);
}
//===========================================================
// conjugate test #2
//===========================================================
void test26 ( void )
{
	cout << "test26\n";
	Complex c1(-4, -8);
	Complex c2 = ~c1;
	assert(c2.getReal() == -4 && c2.getImag() == 8);
}
//===========================================================
// assignment operator test
//===========================================================
void test27 ( void )
{
	cout << "test27\n";
	Complex c1(5, 7);
	Complex c2 = c1;
	assert(c2.getReal() == 5 && c2.getImag() == 7);
}
//===========================================================
// get imaginary test
//===========================================================
void test28 ( void )
{
	cout << "test28\n";
	Complex c1(2, 6);
	assert(c1.getImag() == 6);
}
//===========================================================
// get real test
//===========================================================
void test29 ( void )
{
	cout << "test29\n";
	Complex c1(2, 6);
	assert(c1.getReal() == 2);
}
//===========================================================
// set imaginary test
//===========================================================
void test30 ( void )
{
	cout << "test30\n";
	Complex c1(0, 3);
	c1.setImag(5);
	assert(c1.getImag() == 5);
}
//===========================================================
// set real test
//===========================================================
void test31 ( void )
{
	cout << "test31\n";
	Complex c1(0, 0);
	c1.setReal(2);
	assert(c1.getReal() == 2);
}
//===========================================================
// test ==
//===========================================================
void test32 ( void )
{
	cout << "test32\n";
	Complex c1(6, 6);
	Complex c2(6, 6);
	assert(c1 == c2);
}
//===========================================================
// test !=
//===========================================================
void test33 ( void )
{
	cout << "test33\n";
	Complex c1(2, 6);
	Complex c2(8, 8);
	assert(c1 != c2);
}
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
	test6();
	test7();
	test8();
	test9();
	test10();
	test11();
	test12();
	test13();
	test14();
	test15();
	test16();
	test17();
	test18();
	test19();
	test20();
	test21();
	test22();
	test23();
	test24();
	test25();
	test26();
	test27();
	test28();
	test29();
	test30();
	test31();
	test32();
	test33();

	return 0;
}
//===========================================================
//===========================================================

