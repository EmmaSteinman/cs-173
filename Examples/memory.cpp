//========================================================
// Emma Steinman
// March 6, 2017
// memory.cpp
// A small program to illustrate addresses
//========================================================

#include <iostream>
using namespace std;

//========================================================
// main
//========================================================

int main (void)
{
    int x = 5;
    float f = 3.14;
    char a[5] = "abcd";
    int * ptr;    

    cout << "x = " << x << endl;
    cout << "f = " << f << endl;
    cout << "a = " << a << endl;

    cout << "address of x = " << &x << endl;
    cout << "address of f = " << &f << endl;
    cout << "address of a = " << &a << endl;

    ptr = &x;
    cout << "value of ptr = " << ptr << endl;
    cout << "address of ptr = " << &ptr << endl;

    cout << "*ptr = " << *ptr << endl;
    *ptr = 10;          //changes value of x
    cout << "value of x = " << x << endl;

    return 0;
}
