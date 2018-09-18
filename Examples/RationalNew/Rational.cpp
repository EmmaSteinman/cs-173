//===========================================================
// Matt Kretchmar
// February 21, 2017
// Rational.cpp
// Class methods for Rational class.
//===========================================================

#include "Rational.h"


//----------------------------------------------------------------
// Default Constructor
// Initialize to the value 0/1
//----------------------------------------------------------------
            Rational::Rational ( void )
{
    numerator = 0;
    denominator = 1;
}
//----------------------------------------------------------------
// Copy Constructor
// Copy existing Rational object into new Rational object
//----------------------------------------------------------------
            Rational::Rational ( const Rational &r )
{
    numerator = r.numerator;
    denominator = r.denominator;
}
//----------------------------------------------------------------
// Constructor
// Initiliaze to the value n/d
// Causes and error and program stop if 0 is the denominator.
//----------------------------------------------------------------

		Rational::Rational ( int n, int d)
{
	numerator = n;
	denominator = d;
    if ( denominator == 0 )
    {
        cout << "Error: divide by zero not permitted\n";
        exit(1);
    }
	reduce();
}

//----------------------------------------------------------------
// Constructor
// Initialize to the value n/1
//----------------------------------------------------------------

		Rational::Rational ( int n)
{
	numerator = n;
	denominator = 1;
}

//----------------------------------------------------------------
// Destructor
// Does nothing for this class, place holder.
//----------------------------------------------------------------
		Rational::~Rational ( void )
{
}

//----------------------------------------------------------------
// Assignment operator
//----------------------------------------------------------------
Rational Rational::operator=  ( const Rational r )
{
    numerator = r.numerator;
    denominator = r.denominator;
    return *this;
}

//----------------------------------------------------------------
// print
// prints to the screen "n/d" where n and d are the numerator
// and denominator respectively.  Also prints a "\n" at the end.
//----------------------------------------------------------------
void	Rational::print ( void ) const
{
	cout << numerator << "/" << denominator << endl;
}
//----------------------------------------------------------------
// cout <<
// Overloads the cout ostream << operator to allow
//  cout << r << endl;
//----------------------------------------------------------------

ostream & operator<< ( ostream &os, Rational r )
{
	os << r.numerator << "/" << r.denominator;
	return os;
}
//----------------------------------------------------------------
// cin >>
// Overloads the cin istream >> operator to allow
// cin >> r;
//----------------------------------------------------------------
istream & operator>> ( istream &is, Rational &r )
{
	string s, num_str, den_str;

	is >> s;		// read in the rational as string

	size_t spot = s.find('/');
	num_str = s.substr(0,spot);
	den_str = s.substr(spot+1,s.size()-spot-1);

	r.numerator = stoi(num_str);
	r.denominator = stoi(den_str);
	r.reduce();

	return is;
}
//----------------------------------------------------------------
// gcd
// A private utility routine that computes the greatest common
// devisor of a and b, assuming a,b > 0.
//----------------------------------------------------------------
int		Rational::gcd	( int a , int b )
{
	int r = a % b;
	while ( r )
	{
		a = b;
		b = r;
		r = a % b;
	}
	return b;
}
//----------------------------------------------------------------
// reduce
// A private utility method that will reduce n/d into lowest terms
//----------------------------------------------------------------
void	Rational::reduce ( void )
{
    if ( numerator > 0 && denominator < 0 )
    {
        numerator *= -1;
        denominator *= -1;
    }
    
	int d = gcd(abs(numerator),abs(denominator));
	if ( d > 1 )
	{
		numerator /= d;
		denominator /= d;
	}
}
//----------------------------------------------------------------
// operator*
// A binary multiplication operator for
// r1 = r2 * r3;
//----------------------------------------------------------------
Rational  	Rational::operator* ( const Rational r ) const
{
	Rational ret;		// return object

	ret.numerator = numerator * r.numerator;
	ret.denominator = denominator * r.denominator;
	ret.reduce();
	return ret;
}
//----------------------------------------------------------------
// operator*
// A binary division operator for
// r1 = r2 / r3;
// Note this will cause the program to produce an error and
// quit if the denominator of the result is 0.
//----------------------------------------------------------------
Rational  	Rational::operator/ ( const Rational r ) const
{
    Rational ret;		// return object
    
    ret.numerator = numerator * r.denominator;
    ret.denominator = denominator * r.numerator;
    if ( ret.denominator == 0 )
    {
        cout << "Error: divide by zero not permitted\n";
        exit(1);
    }
    ret.reduce();
    return ret;
}
//----------------------------------------------------------------
// operator*
// A binary addition operator for
// r1 = r2 + r3;
//----------------------------------------------------------------
Rational  	Rational::operator+ ( const Rational r ) const
{
    Rational ret;		// return object
    
    ret.numerator = numerator * r.denominator + denominator * r.numerator;
    ret.denominator = denominator * r.denominator;
    ret.reduce();
    return ret;
}
//----------------------------------------------------------------
// operator*
// A binary subtraction operator for
// r1 = r2 - r3;
//----------------------------------------------------------------
Rational  	Rational::operator- ( const Rational r ) const
{
    Rational ret;		// return object
    
    ret.numerator = numerator * r.denominator - denominator * r.numerator;
    ret.denominator = denominator * r.denominator;
    ret.reduce();
    return ret;
}
//----------------------------------------------------------------
// operator-
// A unary operator for changing the sign
// r1 = -r2;
//----------------------------------------------------------------
Rational    Rational::operator- ( void ) const
{
    Rational ret;
    
    ret.numerator = numerator * -1;
    ret.denominator = denominator;
    ret.reduce();
    return ret;
}
//----------------------------------------------------------------
// operator*
// A binary multiplication operator for multiplying a rational with an int.
// r1 = r2 * 3;
//----------------------------------------------------------------
Rational  	Rational::operator* ( int n ) const
{
    return *this * (Rational)n;
}
//----------------------------------------------------------------
// operator/
// A binary division operator for dividing a rational by an int.
// r1 = r2 / 3;
//----------------------------------------------------------------
Rational  	Rational::operator/ ( int n ) const
{
    return *this / (Rational)n;
}
//----------------------------------------------------------------
// operator+
// A binary addition operator for adding a rational with an int.
// r1 = r2 + 3;
//----------------------------------------------------------------
Rational  	Rational::operator+ ( int n ) const
{
    return *this + (Rational)n;
}
//----------------------------------------------------------------
// operator-
// A binary subtraction operator for subtracting a rational with an int.
// r1 = r2 - 3;
//----------------------------------------------------------------
Rational  	Rational::operator- ( int n ) const
{
    return *this - (Rational)n;
}
//----------------------------------------------------------------
// operator==
//----------------------------------------------------------------
bool        Rational::operator== ( const Rational r ) const
{
    return ( numerator == r.numerator && denominator == r.denominator );
}
//----------------------------------------------------------------
// operator!=
//----------------------------------------------------------------
bool        Rational::operator!= ( const Rational r ) const
{
    return ( numerator != r.numerator || denominator != r.denominator );
}
//----------------------------------------------------------------
// operator >
//----------------------------------------------------------------
bool        Rational::operator> ( const Rational r ) const
{
    double f1 = numerator / (double)denominator;
    double f2 = r.numerator / (double)r.denominator;
    
    return f1 > f2;
}
//----------------------------------------------------------------
// operator <
//----------------------------------------------------------------
bool        Rational::operator< ( const Rational r ) const
{
    double f1 = numerator / (double)denominator;
    double f2 = r.numerator / (double)r.denominator;
    
    return f1 < f2;
}
//----------------------------------------------------------------
// operator >=
//----------------------------------------------------------------
bool        Rational::operator>= ( const Rational r ) const
{
    double f1 = numerator / (double)denominator;
    double f2 = r.numerator / (double)r.denominator;
    
    return f1 > f2 || (*this == r);
}
//----------------------------------------------------------------
// operator <=
//----------------------------------------------------------------
bool        Rational::operator<= ( const Rational r ) const
{
    double f1 = numerator / (double)denominator;
    double f2 = r.numerator / (double)r.denominator;
    
    return f1 < f2 || (*this == r);
}
//----------------------------------------------------------------

