//===========================================================
// Matt Kretchmar
// February 21, 2017
// Rational.h
// Class Definition for Rational class
//===========================================================

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

#ifndef RATIONAL_H
#define RATIONAL_H

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
            Rational 	( const Rational & ); // copy constructor
			Rational    ( int n, int d );
			Rational    ( int n );
		   ~Rational 	( void );     	// destructor
	void	print		( void ) const;
    Rational operator=  ( const Rational r );  // assignment operator
    Rational operator*	( const Rational r ) const;
    Rational operator+	( const Rational r ) const;
    Rational operator-	( const Rational r ) const;
    Rational operator/	( const Rational r ) const;
    Rational operator-  ( void ) const;
    Rational operator*  ( int n ) const;
    Rational operator/  ( int n ) const;
    Rational operator+  ( int n ) const;
    Rational operator-  ( int n ) const;
    bool     operator== ( const Rational r ) const;
    bool     operator!= ( const Rational r ) const;
    bool     operator<  ( const Rational r ) const;
    bool     operator>  ( const Rational r ) const;
    bool     operator<= ( const Rational r ) const;
    bool     operator>= ( const Rational r ) const;

	friend ostream & operator<< ( ostream &os, Rational r );
	friend istream & operator>> ( istream &is, Rational &r );
};


#endif
