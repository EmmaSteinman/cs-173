//===========================================================
// Matt Kretchmar
// mainPQ.cc
// April 21, 2017
// A simple priority queue testing file
//===========================================================

#include <iostream>
#include "BST.h"
using namespace std;

int main (void)
{

	BST<char> d;
	BST<char> c;
	c.insert(c.root, 'e');
	c.insert(c.root, 'w');
	c.insert(c.root, 's');
	c.insert(c.root, 'u');
	c.insert(c.root, 'p');
	c.insert(c.root, 'e');
	c.insert(c.root, 'r');
	c.insert(c.root, 'c');
	c.insert(c.root, 'a');
	c.insert(c.root, 'l');
	c.insert(c.root, 'i');
	c.insert(c.root, 'f');
	c.insert(c.root, 'r');
	c.insert(c.root, 'a');
	c.insert(c.root, 'g');
	c.insert(c.root, 'i');
	c.insert(c.root, 'l');
	c.insert(c.root, 'i');
	c.insert(c.root, 's');
	c.insert(c.root, 't');
	c.insert(c.root, 'i');
	c.insert(c.root, 'c');
	c.insert(c.root, 'e');
	c.insert(c.root, 'x');
	c.insert(c.root, 'p');
	c.insert(c.root, 'i');
	c.insert(c.root, 'a');
	c.insert(c.root, 'l');
	c.insert(c.root, 'i');
	c.insert(c.root, 'd');
	c.insert(c.root, 'o');
	c.insert(c.root, 'c');
	c.insert(c.root, 'i');
	c.insert(c.root, 'o');
	c.insert(c.root, 'u');
	c.insert(c.root, 's');
 
	cout << "c = " << c << endl;
	cout << "isEmpty " << c.isEmpty() << endl;
	cout << "length = " << c.length(c.root) << endl;
	cout << "c string = " << c.to_string(c.root) << endl;
	d = c;
	cout << "d = " << d << endl;
	BST<char> f(c);
	cout << "f = " << f << endl;
	c.clear(c.root);
		
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
	return 0;
}
