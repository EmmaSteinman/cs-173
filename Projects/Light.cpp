//==============================================================
// Emma Steinman
// January 30, 2017
// Light.cpp
// This program determines whether or not the security light(s)
// is/are on when the mailman arrives.
//==============================================================


#include <iostream>
using namespace std;

void light(int, int, int, int, int);
//==============================================================
// main
//==============================================================

int main(void)
{
	int t1a, t1b, t2a, t2b, mailman;
	cout << "Light 1 on? ";
	cin >> t1a >> endl;
	cout << "Light 1 off? ";
	cin >> t1b >> endl;
	cout << "Light 2 on? ";
	cin << t2a << endl;
	cout << "Light 2 off? ";
	cin >> t2b >> endl;
	cout << "Mailman arrival? ";
	cin >> mailman >> endl;
	
	light(t1a, t1b, t2a, t2b, mailman);
		
	return 0;
}

void light(int oneA, int oneB, int twoA, int twoB, int arrival)
{	
	int cycle1 = oneA + oneB;
	int cycle2 = twoA + twoB;
	int time1 = 0;
	int time2 = 0;
	while ((time1 + cycle1) <= arrival)
		time1 += cycle1;
	switch (int, bool)
	{	case time1 == arrival: bool t1 = true;
		break;
		case time1 + oneA <= arrival:  t1 = false;
		break;
		case time1 + oneA > arrival:  t1 = true;
		break;
	}
	while ((time2 + cycle2) <= arrival)
		time2 += cycle2;
	switch (int, bool)
	{	case time2 == arrival: bool t2 = true;
		break;
		case time2 + twoA <= arrival: t2 = false;
		break;
		case time2 + twoA > arrival:  t2 = true;
		break;
	}
	switch (bool)
	{	case t1 and t2: cout << "Both." << endl;
		break;
		case t1 or t2: cout << "One." << endl;
		break;
		default: cout << "None." << endl;
	}
	return 0;
}
