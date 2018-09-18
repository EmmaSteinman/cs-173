//=================================================
// Emma Steinman
// PointerArray.cpp
// March 22, 2017
// This program shows how pointers and arrays work
// together.
//=================================================

#include <iostream>
using namespace std;

int strlen1 (char[]);
int strlen2 (char *);
void strcpy (char *, char *);
//=================================================
// main
//=================================================

int main (void)
{
	char t[] = "Hello";
	cout << "length of t = " << strlen1(t) << endl;
	cout << "length of t = " << strlen2(t) << endl;

	char s[10];
	strcpy(s,t);
	cout << "s = " << s << endl;
	return 0;
}

//=================================================
// strcpy -- copy string t into string s
//=================================================

void strcpy( char *s, char *t)
{
	while ( (*s=*t) )
	{
		//*s = *t;
		s++;
		t++;
	}
	//*s = *t;				//copies null byte
}

//=================================================
// strlen2 -- returns length of char array s
//=================================================

int strlen2 (char *s)
{
	int i = 0;
	while (*s)
	{
		i++;
		s++;
	}

	return i;
}

//=================================================
// strlen1 -- returns length of char array t
//=================================================

int strlen1 (char s[])
{
	int i = 0;
	while (s[i])
		i++;

	return i;
}
