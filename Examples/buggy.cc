//=======================================================
// Emma Steinman
// February 8, 2017
// buggy.cc
// This program has bugs to practice using ddd
//=======================================================

#include <iostream>
using namespace std;

void fxn1 ( char s[] );
int  fxn2 ( int n );

//=======================================================
// main
// This program is designed to take a string and change 
// all lower case 'o's into lower case 'e's.  Then we will
// print the letters of the string with each character
// on a separate line.  
//=======================================================

int main ( void )
{
	char sample[] = "toon";

	cout << fxn2(5) << endl;
	fxn1(sample);

	for ( int i = 0; i < sample[i]; i++ )
		cout << sample[i];
		cout << endl;
	
	return 0;
}

//=======================================================
// fxn1
//=======================================================

void fxn1 ( char s[] )
{
	int i = 0;

	while ( s[i] != 0 )
	{
		if ( s[i] == 'o' )
			s[i] = 'e';
        i++;
	}
}

//=======================================================
// fxn2
//=======================================================

int fxn2 ( int n )
{
	int total = 1;
	
	for ( int i = i; i <= n; i++ )
		total *= i;

	return total;
}
