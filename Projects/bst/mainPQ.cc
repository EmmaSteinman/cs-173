//===========================================================
// Matt Kretchmar
// mainPQ.cc
// April 21, 2017
// A simple priority queue testing file
//===========================================================

#include <iostream>
#include "PQueue.h"
using namespace std;

//===========================================================
// main
//===========================================================

int main ( void )
{
	PQueue<int> a;
	PQueue<int> b;
	a.enqueue(4);
	a.enqueue(4);
	a.enqueue(0);
	a.enqueue(7);
	a.enqueue(8);
	a.enqueue(1);
	a.enqueue(9);
	a.enqueue(7);
	a.enqueue(4);
	a.enqueue(6);
	b.enqueue(4);
	b.enqueue(4);
	b.enqueue(0);
	b.enqueue(8);
	b.enqueue(3);
	b.enqueue(5);
	b.enqueue(9);
	b.enqueue(0);
	b.enqueue(6);
	b.enqueue(4);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "length of b = " << b.length() << endl;
	while (! b.isEmpty())
		cout << "dequeue = " << b.dequeue() << endl;
	cout << "isEmpty = " << b.isEmpty() << endl;
	cout << "b = " << b << endl;
	b = a;
	a.enqueue(4346);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "length of b = " << b.length() << endl;
	cout << "a string = " << a.to_string() << endl;
	cout << "isEmpty = " << a.isEmpty() << endl;
    
    return 0;
}
