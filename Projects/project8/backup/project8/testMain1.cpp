#include <iostream>
#include <string>
#include <assert.h>
#include "List.h"
using namespace std;


int main (void)
{
	List l1;
	List l2(l1);
	l1.append(1);
	l1.append(3);
	l1.append(56);
	l2.append(33);
	l2.append(45);
	cout << l1 << endl;
	cout << l2 << endl;
	List l3 = l1 + l2;
	cout << l3 << endl;
	cout << l3[1] << endl;
	string s = l3.toString();
	cout << s << endl;
	l2.insert(44, 1);
	cout << l2 << endl;
	cout << l3 << endl;
	l3.remove(3);
	cout << l3 << endl;
	List l4 = l3;
	cout << l4 << endl;
	l3.clear();
	cout << l3 << endl;
	cout << l4 << endl;
	cout << l4[4] << endl;
	
	return 0;
}

