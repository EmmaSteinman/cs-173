//=================================================================
// Jordan Gelber
// Match 20, 2017
// testMain1.cpp
// This program has non-terminal unit tests for Complex class.
//=================================================================

#include <iostream>
#include <sstream>
#include <string>
#include <assert.h>
#include "Complex.h"
using namespace std;

//=================================================================
// test default constructor
//=================================================================
void test1 ( void )
{
	cout << "test1\n";
	Complex c1;
	assert(c1.getReal() == 0 && c1.getImag() == 0);
}
//=================================================================
// test constructor
//=================================================================
void test2 ( void )
{
	cout << "test2\n";
	Complex c1(3,4);
	assert(c1.getReal() == 3 && c1.getImag() == 4);
}
//=================================================================
// test copy constructor
//=================================================================
void test3 ( void )
{
	cout << "test3\n";
	Complex c2(2,3);
	Complex c1(c2);
	assert(c1.getReal() == 2 && c1.getImag() == 3);
}

//=================================================================
// test assignment operator
//=================================================================
void test4 ( void )
{
	cout << "test4\n";
	Complex c2(3,2);
	Complex c1 = c2;
	assert(c1.getReal() == 3 && c1.getImag() == 2);
}

//=================================================================
// test addition operator with 2 Complex
//=================================================================
void test5 ( void )
{
	cout << "test5\n";
	Complex c3(2,1);
	Complex c2(1,2);
	Complex c1 = c2 + c3;
	assert(c1.getReal() == 3 && c1.getImag() == 3);
}
//=================================================================
// test addition operator with Complex and float 
//=================================================================
void test6 ( void )
{
	cout << "test6\n";
	Complex c2(3,4);
	float n = 1.5;
	Complex c1 = c2 + n;
	assert(c1.getReal() == 4.5 && c1.getImag() == 4);
}

//=================================================================
// test subtraction operator with 2 Complex
//=================================================================
void test7 ( void )
{
	cout << "test7\n";
	Complex c3(3,1);
	Complex c2(2,4);
	Complex c1;
	c1 = c3 - c2;
	assert(c1.getReal() == 1 && c1.getImag() == -3);
}
//=================================================================
// test subtraction operator with Complex and float
//=================================================================
void test8 ( void )
{
	cout << "test8\n";
	Complex c2(2,4);
	float n = 3.2;
	Complex c1 = c2 - n;
	assert(c1.getReal() == -1.2f && c1.getImag() == 4);
}
//=================================================================
// test multiplication operator with 2 Complex
//=================================================================
void test9 ( void )
{
	cout << "test9\n";
	Complex c3(3,2);
	Complex c2(1,7);
	Complex c1 = c2 * c3;
	assert(c1.getReal() == -11 && c1.getImag() == 23);
}
//=================================================================
// test multiplication operator with Complex and float
//=================================================================
void test10 ( void )
{
	cout << "test10\n";
	Complex c2(2,5);
	float n = 3;
	Complex c1 = c2 * n;
	assert(c1.getReal() == 6 && c1.getImag() == 15);
}
//=================================================================
// test division operator with 2 Complex
//=================================================================
void test11 ( void )
{
	cout << "test11\n";
	Complex c3(3,5);
	Complex c2(2,6);
	Complex c1 = c3 / c2;
	assert(c1.getReal() == float(0.9) && c1.getImag() == float(-0.2));
}
//=================================================================
// test division operator with Complex and float
//=================================================================
void test12 ( void )
{
	cout << "test12\n";
	Complex c2(4,10);
	float n = 2;
	Complex c1 = c2 / n;
	assert(c1.getReal() == 2 && c1.getImag() == 5);
}
//=================================================================
// test exponentiation operator
//=================================================================
void test13 ( void )
{
	cout << "test13\n";
	Complex c2(1,2);
	Complex c1 = c2^5;
	assert(c1.getReal() == 41 && c1.getImag() == -38);
}
//=================================================================
// test negation operator
//=================================================================
void test14 ( void )
{
	cout << "test14\n";
	Complex c2(3,4);
	Complex c1 = -c2;
	assert(c1.getReal() == -3 && c1.getImag() == -4);
}
//=================================================================
// test conjugate operator
//=================================================================
void test15 ( void )
{
	cout << "test15\n";
	Complex c2(5,6);
	Complex c1 = ~c2;
	assert(c1.getReal() == 5 && c1.getImag() == -6);
}
//=================================================================
// test equality operator if true
//=================================================================
void test16 ( void )
{
	cout <<"test16\n";
	Complex c2(2,3);
	Complex c1(2,3);
	assert(c2 == c1);
}
//=================================================================
// test equality operator if false
//=================================================================
void test17 ( void )
{
	cout <<"test17\n";
	Complex c2(4,3);
	Complex c1(2,6);
	assert(not(c1 == c2));
}
//=================================================================
// test inequality operator if true
//=================================================================
void test18 ( void )
{
	cout <<"test18\n";
	Complex c2(4,3);
	Complex c1(2,3);
	assert(c2 != c1);
}
//=================================================================
// test inequality operator if false
//=================================================================
void test19 ( void )
{
	cout <<"test19\n";
	Complex c2(2,3);
	Complex c1(2,3);
	assert(not(c2 != c1));
}
//=================================================================
// test setReal
//=================================================================
void test20 ( void )
{
	cout <<"test20\n";
	Complex c1(2,3);
	c1.setReal(4);
	assert(c1.getReal() == 4 && c1.getImag() == 3);
}
//=================================================================
// test setImag
//=================================================================
void test21 ( void )
{
	cout <<"test21\n";
	Complex c1(4,1);
	c1.setImag(5);
	assert(c1.getReal() == 4 && c1.getImag() == 5);
}
//=================================================================
// test cout
//=================================================================
void test22 ( void )
{
	cout <<"test22\n";
	Complex c1(2,3);
	ostringstream stream;
	stream << c1;
	string str = stream.str();
	assert(str == "2 + 3i");
}
//=================================================================
// test cout with imaginary < 0
//=================================================================
void test23 ( void )
{
	cout <<"test23\n";
	Complex c1(2,-3);
	ostringstream stream;
	stream << c1;
	string str = stream.str();
	assert(str == "2 - 3i");
}
//=================================================================
// test cout with real = 0
//=================================================================
void test24 ( void )
{
	cout <<"test24\n";
	Complex c1(0,3);
	ostringstream stream;
	stream << c1;
	string str = stream.str();
	assert(str == "3i");
}
//=================================================================
// test cout with imaginary = 0
//=================================================================
void test25 ( void )
{
	cout <<"test25\n";
	Complex c1(2,0);
	ostringstream stream;
	stream << c1;
	string str = stream.str();
	assert(str == "2");
}

//=================================================================
// test exponentiation operator with int 0
//=================================================================
void test26 ( void )
{
	cout << "test26\n";
	Complex c2(4,2);
	Complex c1 = c2^0;
	assert(c1.getReal() == 1 && c1.getImag() == 0);
}
//=================================================================
// test exponentiation operator with int 1
//=================================================================
void test27 ( void )
{
	cout << "test27\n";
	Complex c2(3,2);
	Complex c1 = c2^1;
	assert(c1.getReal() == 3 && c1.getImag() == 2);
}
//=================================================================
// main
//=================================================================
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
	return 0;
}
