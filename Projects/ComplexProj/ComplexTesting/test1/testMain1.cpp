//===========================================================
// Hannah Kerr
// March 8, 2017
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
void test1 (void)
{
	cout << "test 1\n";
	Complex c1;
	assert(c1.getReal() == 0 && c1.getImag() == 0);
}
//===========================================================
// test one positive float constructor
//===========================================================
void test2 ( void )
{
	cout << "test 2\n";
	Complex c1(1.3);
	assert(c1.getReal() == (float)1.3 && c1.getImag() == 0);
}
//===========================================================
// test one negative float constructor
//===========================================================
void test3 ( void )
{
	cout << "test 3\n";
	Complex c1(-1.5);
  assert(c1.getReal() == (float)-1.5 && c1.getImag() == 0);
}
//===========================================================
// test one positive integer constructor
//===========================================================
void test4 ( void )
{
	cout << "test 4\n";
	Complex c1(4);
  assert(c1.getReal() == 4 && c1.getImag() == 0);
}
//===========================================================
// test one negative integer constructor
//===========================================================
void test5 ( void )
{
	cout << "test 5\n";
	Complex c1(-4);
  assert(c1.getReal() == -4  && c1.getImag() == 0);
}
//===========================================================
// test two integer constructor
//===========================================================
void test6 ( void )
{
	cout << "test 6\n";
	Complex c1(3, 2);
  assert(c1.getReal() == 3 && c1.getImag() == 2);
}
//===========================================================
// test two integer constructor
//===========================================================
void test7 (void)
{
	cout << "test 7\n";
	Complex c1(-3, -2);
	assert(c1.getReal() == -3 && c1.getImag() == -2);
}
//===========================================================
// test two float constructor
//===========================================================
void test8 (void)
{
	cout << "test 8\n";
	Complex c1(1.5,2.5);
	assert(c1.getReal() == (float)1.5 && c1.getImag() == (float)2.5);
}
//===========================================================
// test two float constuctor
//===========================================================
void test9 (void)
{
	cout << "test 9\n";
	Complex c1(-1.5, -2.5);
	assert(c1.getReal() == (float)-1.5 && c1.getImag() == (float)-2.5);
}
//==========================================================
// test copy constructor
//==========================================================
void test10 (void)
{
	cout << "test 10\n";
	Complex c1(2, 10);
	Complex c2(c1);
	assert(c2.getReal() == 2 && c2.getImag() == 10);
}
//==========================================================
// test integer addition
//==========================================================
void test11 (void)
{
	cout << "test 11\n";
	Complex c1(2, 7);
	Complex c2;
	c2 = c1 + 4;
	assert(c2.getReal() == 6 && c2.getImag() == 7);
}
//==========================================================
// test integer addition
//==========================================================
void test12 (void)
{
	cout << "test 12\n";
	Complex c1(-2, 7);
	Complex c2;
	c2 = c1 + 4;
	assert(c2.getReal() == 2 && c2.getImag() == 7);
}
//==========================================================
// test integer addition
//==========================================================
void test13 (void)
{
	cout << "test 13\n";
	Complex c1(.5,7);
	Complex c2;
	c2 = c1 + 4;
	assert(c2.getReal() == (float)4.5 && c2.getImag() == 7);
}
//==========================================================
// test float addition
//==========================================================
void test14 (void)
{
	cout << "test 14\n";
	Complex c1(2, 2);
	Complex c2;
	c2 = c1 + 4.5;
	assert(c2.getReal() == (float)6.5 && c2.getImag() == 2);
}
//==========================================================
// test float addition
//==========================================================
void test15 (void)
{
	cout << "test 15\n";
	Complex c1(-2, 2);
	Complex c2;
	c2 = c1 + .5;
	assert(c2.getReal() == (float)-1.5 && c2.getImag() == 2);
}
//==========================================================
// test complex addition
//==========================================================
void test16 (void)
{
	cout << "test 16\n";
	Complex c1(2,2);
	Complex c2(2, 4);
	Complex c3;
	c3 = c1 + c2;
	assert(c3.getReal() == 4 && c3.getImag() == 6);
}
//==========================================================
// test complex addition
//==========================================================
void test17 (void)
{
	cout << "test 17\n";
	Complex c1(-2,-2);
	Complex c2(-2, -4);
	Complex c3;
	c3 = c1 + c2;
	assert(c3.getReal() == -4 && c3.getImag() == -6);
}
//==========================================================
// test complex addition
//==========================================================
void test18 (void)
{
	cout << "test 18\n";
	Complex c1(2,2);
	Complex c2(2.5, 4.5);
	Complex c3;
	c3 = c1 + c2;
	assert(c3.getReal() == (float)4.5 && c3.getImag() == (float)6.5);
}
//==========================================================
// test integer subtraction
//==========================================================
void test19 (void)
{
	cout << "test 19\n";
	Complex c1(5,5);
	Complex c2;
	c2 = c1 - 3;
	assert(c2.getReal() == 2 && c2.getImag() == 5);
}
//==========================================================
// test integer subtraction
//==========================================================
void test20 (void)
{
	cout << "test 20\n";
	Complex c1(-5, 5);
	Complex c2;
	c2 = c1 - 3;
	assert(c2.getReal() == -8 && c2.getImag() == 5);
}
//==========================================================
// test integer subtraction
//==========================================================
void test21 (void)
{
	cout << "test 21\n";
	Complex c1(5.5,5);
	Complex c2;
	c2 = c1 - 3;
	assert(c2.getReal() == (float)2.5 && c2.getImag() == 5);
}
//==========================================================
// test float subtraction
//==========================================================
void test22 (void)
{
	cout << "test 22\n";
	Complex c1(5,5);
	Complex c2;
	c2 = c1 - 3.5;
	assert(c2.getReal() == (float)1.5 && c2.getImag() == 5);
}
//==========================================================
// test float subtraction
//==========================================================
void test23 (void)
{
	cout << "test 23\n";
	Complex c1(-5,-5);
	Complex c2;
	c2 = c1 - 3.5;
	assert(c2.getReal() == (float)-8.5 && c2.getImag() == -5);
}
//==========================================================
// test complex subtraction
//==========================================================
void test24 (void)
{
	cout << "test 24\n";
	Complex c1(5,5);
	Complex c2(3, 3);
	Complex c3;
	c3 = c1 - c2;
	assert(c3.getReal() == 2 && c3.getImag() == 2);
}
//==========================================================
// test complex subtraction
//==========================================================
void test25 (void)
{
	cout << "test 25\n";
	Complex c1(-5,-5);
	Complex c2(-3, -3);
	Complex c3;
	c3 = c1 - c2;
	assert(c3.getReal() == -2 && c3.getImag() == -2);
}
//==========================================================
//test complex subtraction
//==========================================================
void test26 (void)
{
	cout << "test 26\n";
	Complex c1(5,5);
	Complex c2(2.5, 2.5);
	Complex c3;
	c3 = c1 - c2;
	assert(c3.getReal() == (float)2.5 && c3.getImag() == (float)2.5);
}
//==========================================================
// test integer multiplication
//==========================================================
void test27 (void)
{
	cout << "test 27\n";
	Complex c1(5, 5);
	Complex c2;
	c2 = c1 * 2;
	assert(c2.getReal() == 10 && c2.getImag() == 10);
}
//==========================================================
//test integer multiplication
//==========================================================
void test28 (void)
{
	cout << "test 28\n";
	Complex c1(5, 5);
	Complex c2;
	c2 = c1 * -2;
	assert(c2.getReal() == -10 && c2.getImag() == -10);
}
//==========================================================
// test float multiplication
//==========================================================
void test29 (void)
{
	cout << "test 29\n";
	Complex c1(5, 5);
	Complex c2;
	c2 = c1 * 2.5;
	assert(c2.getReal() == (float)12.5 && c2.getImag() == (float)12.5);
}
//==========================================================
// test float multiplication
//==========================================================
void test30 (void)
{
	cout << "test 30\n";
	Complex c1(5, 5);
	Complex c2;
	c2 = c1 * -2.5;
	assert(c2.getReal() == (float)-12.5 && c2.getImag() == (float)-12.5);
}
//==========================================================
// test complex multiplication
//==========================================================
void test31 (void)
{
	cout << "test 31\n";
	Complex c1(1,2);
	Complex c2(3,4);
	Complex c3;
	c3 = c1 * c2;
	assert(c3.getReal() == -5 && c3.getImag() == 10);
}
//==========================================================
// test complex multiplication
//==========================================================
void test32 (void)
{
	cout << "test 32\n";
	Complex c1(1,2);
	Complex c2(-3,-4);
	Complex c3;
	c3 = c1 * c2;
	assert(c3.getReal() == 5 && c3.getImag() == -10);
}
//==========================================================
// test complex multiplication
//==========================================================
void test33 (void)
{
	cout << "test 33\n";
	Complex c1(-1,-2);
	Complex c2(-3,-4);
	Complex c3;
	c3 = c1 * c2;
	assert(c3.getReal() == -5 && c3.getImag() == 10);
}
//==========================================================
// test integer division
//==========================================================
void test34 (void)
{
	cout << "test 34\n";
	Complex c1(4, 4);
	Complex c2;
	c2 = c1 / 2;
	assert(c2.getReal() == 2 && c2.getImag() == 2);
}
//==========================================================
// test integer division
//==========================================================
void test35 (void)
{
	cout << "test 35\n";
	Complex c1(4, 4);
	Complex c2;
	c2 = c1 / -2;
	assert(c2.getReal() == -2 && c2.getImag() == -2);
}
//==========================================================
// test float division
//==========================================================
void test36 (void)
{
	cout << "test 36\n";
	Complex c1(4, 4);
	Complex c2;
	c2 = c1 / 2.5;
	assert(c2.getReal() == (float)1.6 && c2.getImag() == (float)1.6);
}
//==========================================================
// test float division
//==========================================================
void test37 (void)
{
	cout << "test 37\n";
	Complex c1(4, 4);
	Complex c2;
	c2 = c1 / -2.5;
	assert(c2.getReal() == (float)-1.6 && c2.getImag() == (float)-1.6);
}
//==========================================================
// test Complex division
//==========================================================
void test38 (void)
{
	cout << "test 38\n";
	Complex c1(1, 2);
	Complex c2(3,4);
	Complex c3;
	c3 = c1 / c2;
	assert(c3.getReal() == (float)0.44 && c3.getImag() == (float)0.08);
}
//==========================================================
// test Complex division
//==========================================================
void test39 (void)
{
	cout << "test 39\n";
	Complex c1(1, 2);
	Complex c2(-3,-4);
	Complex c3;
	c3 = c1 / c2;
	assert(c3.getReal() == (float)-0.44 && c3.getImag() == (float)-0.08);
}
//==========================================================
// test Complex division
//==========================================================
void test40 (void)
{
	cout << "test 40\n";
	Complex c1(-1, -2);
	Complex c2(-3,-4);
	Complex c3;
	c3 = c1 / c2;
	assert(c3.getReal() == (float)0.44 && c3.getImag() == (float)0.08);
}
//==========================================================
// test conjugate
//==========================================================
void test41 (void)
{
	cout << "test 41\n";
	Complex c1(5,5);
	Complex c2;
	c2 = ~c1;
	assert(c2.getReal() == 5 && c2.getImag() == -5);
}
//==========================================================
// test conjugate
//==========================================================
void test42 (void)
{
	cout << "test 42\n";
	Complex c1(5,-5);
	Complex c2;
	c2 = ~c1;
	assert(c2.getReal() == 5 && c2.getImag() == 5);
}
//==========================================================
// test negation
//==========================================================
void test43 (void)
{
	cout << "test 43\n";
	Complex c1(5,5);
	Complex c2;
	c2 = -c1;
	assert(c2.getReal() == -5 && c2.getImag() == -5);
}
//==========================================================
// test negation
//==========================================================
void test44 (void)
{
	cout << "test 44\n";
	Complex c1(-5,-5);
	Complex c2;
	c2 = -c1;
	assert(c2.getReal() == 5 && c2.getImag() == 5);
}
//==========================================================
// test exponentiation
//==========================================================
void test45 (void)
{
	cout << "test 45\n";
	Complex c1(5,5);
	Complex c2;
	c2 = c1^3;
	assert(c2.getReal() == -250 && c2.getImag() == 250);
}
//==========================================================
// test setReal
//==========================================================
void test46 (void)
{
	cout << "test 46\n";
	Complex c1(2, 2);
	c1.setReal(4);
	assert(c1.getReal() == 4 && c1.getImag() == 2);
}
//==========================================================
// test setReal
//==========================================================
void test47 (void)
{
	cout << "test 47\n";
	Complex c1(2, 2);
	c1.setReal(-4);
	assert(c1.getReal() == -4 && c1.getImag() == 2);
}
//==========================================================
//test setReal
//==========================================================
void test48 (void)
{
	cout << "test 48\n";
	Complex c1(2, 2);
	c1.setReal(2.5);
	assert(c1.getReal() == (float)2.5 && c1.getImag() == 2);
}
//==========================================================
// test setReal
//==========================================================
void test49 (void)
{
	cout << "test 49\n";
	Complex c1(2, 2);
	c1.setReal(-2.5);
	assert(c1.getReal() == (float)-2.5 && c1.getImag() == 2);
}
//==========================================================
// test setImag
//==========================================================
void test50 (void)
{
	cout << "test 50\n";
	Complex c1(2, 2);
	c1.setImag(4);
	assert(c1.getReal() == 2 && c1.getImag() == 4);
}
//==========================================================
// test setImag
//==========================================================
void test51 (void)
{
	cout << "test 51\n";
	Complex c1(2, 2);
	c1.setImag(-4);
	assert(c1.getReal() == 2 && c1.getImag() == -4);
}
//==========================================================
// test setImag
//==========================================================
void test52 (void)
{
	cout << "test 52\n";
	Complex c1(2, 2);
	c1.setImag(2.5);
	assert(c1.getReal() == 2 && c1.getImag() == (float)2.5);
}
//==========================================================
// test setImag
//==========================================================
void test53 (void)
{
	cout << "test 53\n";
	Complex c1(2, 2);
	c1.setImag(-2.5);
	assert(c1.getReal() == 2 && c1.getImag() == (float)-2.5);
}
//==========================================================
// test assignment operator
//==========================================================
void test54 (void)
{
	cout << "test 54\n";
	Complex c1(4, 4);
	Complex c2;
	c2 = c1;
	assert(c2.getReal() == 4 && c2.getImag() == 4);
}
//==========================================================
// test == comparison
//==========================================================
void test55 (void)
{
	cout << "test 55\n";
	Complex c1(2,2);
	Complex c2(2,2);
	assert((c1 == c2) == 1);
}
//==========================================================
// test == comparison
//==========================================================
void test56 (void)
{
	cout << "test 56\n";
	Complex c1(2,2);
	Complex c2(2,3);
	assert((c1 == c2) == 0);
}
//==========================================================
// test != comparison
//==========================================================
void test57 (void)
{
	cout << "test 57\n";
	Complex c1(2,2);
	Complex c2(2,3);
	assert((c1 != c2) == 1);
}
//==========================================================
// test != comparison
//==========================================================
void test58 (void)
{
	cout << "test 58\n";
	Complex c1(2,2);
	Complex c2(2,2);
	assert((c1 != c2) == 0);
}
//==========================================================
// test cout
//==========================================================
void test59 ( void )
{
	cout << "test 59\n";
	Complex c1;
	ostringstream stream;
	stream << c1;
	string str = stream.str();
	cout << str << endl;
	assert(str == "0 + 0i");
}
//==========================================================
// test cout
//==========================================================
void test60 ( void )
{
	cout << "test 60\n";
	Complex c1(5, -5);
	ostringstream stream;
	stream << c1;
	string str = stream.str();
	cout << str << endl;
	assert(str == "5 - 5i");
}
//==========================================================
//==========================================================
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
	test34();
	test35();
	test36();
	test37();
	test38();
	test39();
	test40();
	test41();
	test42();
	test43();
	test44();
	test45();
	test46();
	test47();
	test48();
	test49();
	test50();
	test51();
	test52();
	test53();
	test54();
	test55();
	test56();
	test57();
	test58();
	test59();
	test60();

	return 0;
}
//===========================================================
//===========================================================
