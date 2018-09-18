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
void test1 ( void );
void test2 ( void );
void test3 ( void );
void test4 ( void );
void test5 ( void );
void test6 ( void );
void test7 ( void );
void test8 ( void );
void test9 ( void );
void test10 ( void );
void test11 ( void );
void test12 ( void );
void test13 ( void );
void test14 ( void );
void test15 ( void );
void test16 ( void );
void test17 ( void );
void test18 ( void );
void test19 ( void );
void test20 ( void );


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

	return 0;
}
//===========================================================
// test default constructor
//===========================================================
void test1 ( void )
{
	cout << "test1" << endl;
	Complex z;
	assert(z.getReal() == 0 && z.getImag() == 0);
}
//===========================================================
// test int constructor
//===========================================================
void test2 ( void )
{
	cout << "test2" << endl;
	Complex z(4);
	assert(z.getReal() == 4 && z.getImag() == 0);
}
//===========================================================
// test float constructor
//===========================================================
void test3 ( void )
{
	cout << "test3" << endl;
	Complex z(4.5F);
	assert(z.getReal() == 4.5 && z.getImag() == 0);
}
//===========================================================
// test int, int constructor
//===========================================================
void test4 ( void )
{
	cout << "test4" << endl;
	Complex z(4,5);
	assert(z.getReal() == 4 && z.getImag() == 5);
}
//===========================================================
// test float, float constructor
//===========================================================
void test5 ( void )
{
	cout << "test5" << endl;
	Complex z(4.5F,4.5F);
	assert(z.getReal() == 4.5 && z.getImag() == 4.5);
}
//===========================================================
// test copy constructor
//===========================================================
void test6 ( void )
{
	cout << "test6" << endl;
	Complex z1(2,2);
	Complex z2(z1);
	assert(z1.getReal() == 2 && z1.getImag() == 2);
}
//===========================================================
// test complex addition
//===========================================================
void test7 ( void )
{
	cout << "test7" << endl;
	Complex z1(2,2);
	Complex z2(3,3);
	Complex z3 = z1 + z2;
	assert(z3.getReal() == 5 && z3.getImag() == 5);
}
//===========================================================
// test complx subtraction
//===========================================================
void test8 ( void )
{
	cout << "test8" << endl;
	Complex z1(2,2);
	Complex z2(3,3);
	Complex z3 = z2 - z1;
	assert(z3.getReal() == 1 && z3.getImag() == 1);
}
//===========================================================
// test complex multiplication
//===========================================================
void test9 ( void )
{
	cout << "test9" << endl;
	Complex z1(2,1);
	Complex z2(4,3);
	Complex z3 = z1 * z2;
	assert(z3.getReal() == 5 && z3.getImag() == 10);
}
//===========================================================
// test complex division
//===========================================================
void test10 ( void )
{
	cout << "test10" << endl;
	Complex z1(2,2);
	Complex z2(2,2);
	Complex z3 = z1 / z2;
	assert(z3.getReal() == 1 && z3.getImag() == 0);
}
//===========================================================
// test complex negation
//===========================================================
void test11 ( void )
{
	cout << "test11" << endl;
	Complex z1(2,2);
	Complex z2 = -z1;
	assert(z2.getReal() == -2 && z2.getImag() == -2);
}
//===========================================================
// test complex conjugate
//===========================================================
void test12 ( void )
{
	cout << "test12" << endl;
	Complex z1(2,2);
	Complex z2 = ~z1;
	assert(z2.getReal() == 2 && z2.getImag() == -2);
}
//===========================================================
// test float addition
//===========================================================
void test13 ( void )
{
	cout << "test13" << endl;
	Complex z1(2,2);
	Complex z2 = z1 + 2;
	assert(z2.getReal() == 4 && z2.getImag() == 2);
}
//===========================================================
// test float subtraction
//===========================================================
void test14 ( void )
{
	cout << "test14" << endl;
	Complex z1(2,2);
	Complex z2 = z1 - 2;
	assert(z2.getReal() == 0 && z2.getImag() == 2);
}
//===========================================================
// test float multiplication
//===========================================================
void test15 ( void )
{
	cout << "test15" << endl;
	Complex z1(2,2);
	Complex z2 = z1 * 2;
	assert(z2.getReal() == 4 && z2.getImag() == 4);
}
//===========================================================
// test float division
//===========================================================
void test16 ( void )
{
	cout << "test16" << endl;
	Complex z1(2,2);
	Complex z2 = z1 / 2;
	assert(z2.getReal() == 1 && z2.getImag() == 1);
}
//===========================================================
// test exponentiation
//===========================================================
void test17 ( void )
{
	cout << "test17" << endl;
	Complex z1(1,2);
	Complex z2 = z1^2;
	assert(z2.getReal() == -3 && z2.getImag() == 4);
}
//===========================================================
// test == operator
//===========================================================
void test18 ( void )
{
    cout << "test18" << endl;
    Complex z1(1,2);
    Complex z2(1,2);
    assert(z1 == z2);
}
//===========================================================
// test != operator
//===========================================================
void test19 ( void )
{
    cout << "test19" << endl;
    Complex z1(1,2);
    Complex z2(1,3);
    assert(z1 != z2);
}
//===========================================================
// test != operator
//===========================================================
void test20 ( void )
{
    cout << "test20" << endl;
    Complex z1(1,2);
    Complex z2(2,2);
    assert(z1 != z2);
}
