//=========================================================
// Emma Steinman
// April 10, 2017
// rpn.cpp
// Implements a reverse polish notation calculator
//=========================================================

#include <iostream>
#include <math.h>
#include <string>
#include <sstream>
#include "Stack.h"

using namespace std;

void operate (Stack<float> &s, string token);
bool isFloat (string s);
float getNum (Stack<float> &s);
//=========================================================
// main
//=========================================================
int main (void)
{
	string line;
	string token;
	string delimeter = " ";
	Stack<float> calc;

	getline(cin, line);
	while (line != "exit")
	{
		cout << "line: " << line << endl;
		size_t pos;
		while ((pos = line.find(delimeter)) != string::npos)
		{
			token = line.substr(0, pos);
			line.erase(0, pos+1);
			if (token != "")
			{
				operate(calc, token);
				//cout << "token: " << token << endl;
			}
		}
		token = line;
		if (token != "")
		{
			operate(calc, token);
			//cout << "token: " << token << endl;
		}
		cout << "calc: " << calc << endl;
		getline(cin, line);
	}

	return 0;
}

//=========================================================
// operate
// Take the token and convert it to a float or an operation
// then perform the indicated operation on the stack
//=========================================================

void operate (Stack<float> &s, string token)
{
	if (isFloat(token))
	{
		float f = stof(token);
		s.push(f);
	}
	else if (token == "+")
	{
		float y = getNum(s);
		cout << "y: " << y << endl;
		float x = getNum(s);
		cout << "x: " << x << endl;
		cout << "x+y" << (x+y) << endl;
		s.push(x+y);
	}
}
//=========================================================
//=========================================================

bool isFloat (string s)
{
	istringstream iss(s);
	float f;
	iss >> noskipws >> f;
	return iss.eof() && !iss.fail();		
}
//=========================================================
//=========================================================
float getNum (Stack<float> &s)
{
	if (s.isEmpty())
		return 0;
	else
	{
		cout << "eh: " <<s.pop() << endl;
		return s.pop();
	}
}
//=========================================================
//=========================================================
