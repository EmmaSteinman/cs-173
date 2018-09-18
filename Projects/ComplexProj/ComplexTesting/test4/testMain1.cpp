//==========================================================
//Matthew Rinker
//TestMain1.cpp
//8 March 2017
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
void test1(void)
{
	cout<<"T1\n";
	Complex c;
	assert(c.getReal() == 0 && c.getImag() == 0);
}
//==========================================================
void test2(void)
{
	cout<<"T2\n";
	Complex c;
	Complex c1 = Complex(c);
	assert(c1.getReal() == 0 && c1.getImag() == 0);
}
//==========================================================
void test3(void)
{
	cout<<"T3\n";
	Complex c1 = Complex(1,1);
	assert(c1.getReal() == 1 && c1.getImag() == 1);
}
//==========================================================
void test4(void)
{
	cout<<"T4\n";
	Complex c1 = Complex(3,0);
	c1.setReal(1);
	assert(c1.getReal()==1);
}
//==========================================================
void test5(void)
{
	cout<<"T5\n";
	Complex c1 = Complex(0,3);
	c1.setImag(1);
	assert(c1.getImag()==1);
}
//==========================================================
void test6(void)
{
	cout<<"T6\n";
	Complex c = Complex(3,0);
	Complex c1 = c;
	assert(c1.getReal() == c.getReal() && c1.getImag() == c.getImag());
}
//==========================================================
void test7(void)
{
	cout<<"T7\n";
	Complex c = Complex(3,0);
	Complex c1 = Complex(3,0);
	assert((c1==c));
}
//==========================================================
void test8(void)
{
	cout<<"T8\n";
	Complex c = Complex(3,3);
	Complex c1 = Complex(2,1);
	assert((c1!=c));
}
//==========================================================
void test9(void)
{
	cout<<"T9\n";
	Complex c = Complex(1,1);
	Complex c1 = Complex(3,2);
	float r = 1*3 + -1*2;
	float i = 5;
	c = c*c1;
	assert(c.getReal() ==r && c.getImag() == i);
}
//==========================================================
void test10(void)
{
	cout<<"T10\n";
	Complex c = Complex(1,1);
	c = c*2;
	assert(c.getReal() ==2 && c.getImag() == 2);
}
//==========================================================
void test11(void)
{
	cout<<"T11\n";
	Complex c = Complex(1,2);
	Complex c1 = Complex(2,2);
	c = c+c1;
	assert((c.getReal() == 3) && (c.getImag() == 4));
}
//==========================================================
void test12(void)
{
	cout<<"T12\n";
	Complex c = Complex(1,2);
	c = c+2;
	assert(c.getReal() == 3 && c.getImag() == 2);
}
//==========================================================
void test13(void)
{
	cout<<"T13\n";
	Complex c = Complex(1,2);
	Complex c1 = Complex(3,1);
	c = c-c1;
	assert(c.getReal()==(-2) && c.getImag()==1);
}
//==========================================================
void test14(void)
{
	cout<<"T14\n";
	Complex c = Complex(1,2);
	c = c-1;
	assert(c.getReal()==0 && c.getImag()==2);
}
//==========================================================
void test15(void)
{
	cout<<"T15\n";
	Complex c = Complex(1,1);
	Complex c1 = Complex(2,2);
	c = c/c1;
	assert(c.getReal() == .5 && c.getImag() == 0); 
}
//==========================================================
void test16(void)
{
	cout<<"T16\n";
	Complex c = Complex(1,1);
	c = c/2;
	assert(c.getReal() == 0.5 && c.getImag()==0.5);
}
//==========================================================
void test17(void)
{
	cout<<"T17\n";
	Complex c = Complex(1,1);
	c = ~c;
	assert(c.getReal() == 1 && c.getImag() == -1);
}
//==========================================================
void test18(void)
{
	cout<<"T18\n";
	Complex c  = Complex(1,1);
	c = -c;
	assert(c.getReal() == -1 && c.getImag() == -1);
}
//==========================================================
void test19(void)
{
	cout<<"T19\n";
	Complex c = Complex(2,2);
	Complex c1 = Complex(c);	
	c = c^2;
	c1 = c1*c1;
	assert(c1==c);
}
//==========================================================
void test20(void)
{
	cout << "T20\n";
	Complex c1;
	ostringstream stream;
	stream << c1;
	string str = stream.str();
	assert(str == "0+0i");
}
//==========================================================
void test21(void)
{
	cout << "T21\n";
	Complex c1 = Complex (0,-2);
	ostringstream stream;
	stream << c1;
	string str = stream.str();
	assert(str == "0-2i");
}
//==========================================================
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

	return 0;

}
