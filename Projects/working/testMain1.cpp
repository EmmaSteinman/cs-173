#include <iostream>
#include <string>
#include <assert.h>
#include "List.h"
using namespace std;


int main (void)
{
	List l1;
	l1.append(45);
	l1.append(4);
	l1.append(2);
	l1.append(6);
	l1.insert(5,1);
	List l2(l1);
	l2.append(2);
	l2.append(3);
	l2.append(34);
	List l3 = l1+l2;
	cout << l3 << endl;

	return 0;
}

