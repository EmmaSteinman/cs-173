//=================================================
// Emma Steinman
// DynamicMemory.cpp
// March 22, 2017
// This program shows how to use dynamic memory
//=================================================

#include <iostream>
using namespace std;

//=================================================
// main
//=================================================

int main (void)
{
	int n;
	cout << "Enter size of array: ";
	cin >> n;

	int *array;
	array = new int[n];

	for (int i = 0; i < n; i++)
		array[i] = i + 1;

	for (int i = 0; i < n; i++)
		cout << array[i] << " ";
	cout << endl;

	delete array;

	return 0;
}
