//===========================================================
// Matt Kretchmar
// February 21, 2017
// Rational.h
// This is the class definition for Rational.
//===========================================================

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

//===========================================================
// Rational class
//===========================================================

class Rational
{
private:
	int		numerator;
	int		denominator;

	int		gcd			( int a, int b );
	void	reduce		( void );

public:

			Rational 	( void );		// default constructor
			Rational    ( int n, int d );
			Rational    ( int n );
		   ~Rational 	( void );     	// destructor
	void	print		( void );
    Rational operator*	( Rational r );
    Rational operator+	( Rational r );
    Rational operator-	( Rational r );
    Rational operator/	( Rational r );
    Rational operator-  ( void );
    Rational operator*  ( int n );
    Rational operator/  ( int n );
    Rational operator+  ( int n );
    Rational operator-  ( int n );

	friend ostream & operator<< ( ostream &os, Rational r );
	friend istream & operator>> ( istream &is, Rational &r );
};


