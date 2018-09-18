//=========================================================
// Emma Steinman
// main.cc
// April 7, 2017
// This file tests my Stack class
//=========================================================

#include <iostream>
using namespace std;
#include "Stack.h"


//=========================================================
// main
//=========================================================

int main (void)
{
	Stack<int> s;
	for (int i = 0; i < 11; i++)
		s.push(i);
	cout << "s = " << s << endl;
	s.pop();
	cout << "s = " << s << endl;
	cout << s.peek() << endl;
	cout << s.length() << endl;
	cout << s.isEmpty() << endl;
	s.clear();
	cout << "s = " << s << endl;
	return 0;
}
