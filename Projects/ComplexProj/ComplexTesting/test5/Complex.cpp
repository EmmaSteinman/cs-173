//============================================================
// Emma Steinman
// March 1, 2017
// complex.cpp
// Class methods for Complex class.
//============================================================

#include "Complex.h"

//------------------------------------------------------------
// Default Constructor
// Initialize value to 0 + 0i.
//------------------------------------------------------------

            Complex::Complex(void)
{
    real = 0;
    imaginary = 0;
}

//------------------------------------------------------------
// Copy Constructor
// Copy Complex object to new object.
//------------------------------------------------------------

            Complex::Complex(const Complex &c)
{
    real = c.real;
    imaginary = c.imaginary;
}


//------------------------------------------------------------
// Constructor
// Initializes values to input with two doubles.
//------------------------------------------------------------

            Complex::Complex(double a, double b)
{
    real = a;
    imaginary = b;
}

//------------------------------------------------------------
// Constructor
// Initializes values to input with one double.
//------------------------------------------------------------

            Complex::Complex(double a)
{
    real = a;
}
//------------------------------------------------------------
// Destructor
// Deletes object and its memory.
//------------------------------------------------------------

            Complex::~Complex(void)
{
}

//------------------------------------------------------------
// cout <<
// Overloads the cout ostream << operator to allow
// cout << r << endl;.
//------------------------------------------------------------

ostream & operator<< ( ostream &os, Complex c )
{

    if (c.real > 0 and c.imaginary == 1)
        os << c.real << " + i";

    else if (c.real > 0 and c.imaginary == -1) 
        os << c.real << " - i";     //subtraction instead of + -

    else if (c.real == 0 and c.imaginary == 1)
        os << "i";

    else if (c.real == 0 and c.imaginary == -1)
        os << "-i";                 //doesn't print real if it =0

    else if (c.imaginary < 0)
        os << c.real << " - " << (c.imaginary * -1) << "i";
                                    //subtraction instead of + -
    else if (c.real > 0 and c.imaginary == 0)
        os << c.real;               //doesn't print imaginary if 
                                    // it = 0
    else if (c.real == 0 and c.imaginary > 0)
        os << c.imaginary << "i";   //doesn't print real if it =0
            
    else
        os << c.real << " + " << c.imaginary << "i";

    return os;
}

//------------------------------------------------------------
// operator+
// Adds two complex numbers together.
// (a + bi) + (c + di) = (a + c) + (b + d)i
//------------------------------------------------------------

Complex Complex::operator+ (Complex c1)
{
    Complex c2;
    c2.real = c1.real + real;
    c2.imaginary = c1.imaginary + imaginary;
    return c2;
}

//------------------------------------------------------------
// operator+
// Adds a complex number and a doubleing point number or 
// an integer.
// (a + bi) + c = (a + c) + bi
//------------------------------------------------------------

Complex Complex::operator+  (double n)
{
    Complex c2;
    c2.real = real + n;
    c2.imaginary = imaginary;
    return c2;
}

//------------------------------------------------------------
// operator-
// Subtracts two complex numbers.
// (a + bi) - (c + di) = (a - c) + (b - d)i
//------------------------------------------------------------

Complex Complex::operator- (Complex c1)
{
    Complex c2;
    c2.real = real - c1.real;
    c2.imaginary = imaginary - c1.imaginary;
    return c2;
}

//------------------------------------------------------------
// operator-
// Subtracts a complex number and a doubleing point number or 
// an integer.
// (a + bi) - c = (a - c) + bi
//------------------------------------------------------------

Complex Complex::operator- (double n)
{
    Complex c2;
    c2.real = real - n;
    c2.imaginary = imaginary;
    return c2;
}

//------------------------------------------------------------
// operator*
// Multiplies two complex numbers.
// (a + bi) * (c + di) = ac + (ad + bc)i + bdi^2    
//------------------------------------------------------------

Complex Complex::operator* (Complex c1)
{
    Complex c2;
    double first = real * c1.real;
    double middle = (real * c1.imaginary) + (imaginary * c1.real);
    double last = (imaginary * c1.imaginary) * -1;
    c2.real = first + last;
    c2.imaginary = middle;
    return c2;
}    

//------------------------------------------------------------
// oeprator*
// Multiplies a complex number and a doubleing point number
// or an integer.
// (a + bi) * c = ac + bci
//------------------------------------------------------------

Complex Complex::operator*  (double n)
{
    Complex c2;
    c2.real = real * n;
    c2.imaginary = imaginary * n;
    return c2;
}

//------------------------------------------------------------
// operator/
// Divides two complex numbers.
// (a + bi)/(c + di) = (a + bi)*(c - di)/c^2 + d^2
//------------------------------------------------------------

Complex Complex::operator/  (Complex c1)
{
    Complex first(real, imaginary);
    Complex c2;
    Complex top = first * ~c1;
    double bottom = (c1.real*c1.real) + ((c1.imaginary*c1.imaginary));
    if (bottom == 0)
    {
        cout << "Error: Cannot divide by zero" << endl;
        exit(1);
    }
    c2.real = top.real / bottom;
    c2.imaginary = top.imaginary / bottom;
    return c2;
}

//------------------------------------------------------------
// operator/
// Divides a complex number by a double number or int.
// (a + bi)/c = a/c + (b/c)i
//------------------------------------------------------------

Complex Complex::operator/  (double n)
{
    if (n==0)
    {
        cout << "Error: Cannot divide by zero" << endl;
        exit(1);
    }
    Complex c2;
    c2.real = real / n;
    c2.imaginary = imaginary / n;
    return c2;
}

    
//------------------------------------------------------------
// operator~
// Returns the conjugate of the complex number.
// ~(a + bi) = a - bi
//------------------------------------------------------------

Complex Complex::operator~  (void)
{
    Complex c2;
    c2.real = real;
    c2.imaginary = imaginary * -1;
    return c2;
}

//------------------------------------------------------------
// operator-
// Returns the negative of a complex number.
// -(a + bi) = -a - bi
//------------------------------------------------------------

Complex Complex::operator-  (void)
{
    Complex c2;
    c2.real = real * -1;
    c2.imaginary = imaginary * -1;
    return c2;
}

//------------------------------------------------------------
// operator^
// Raises a complex number to an integer power.
// (a + bi)^n
//------------------------------------------------------------

Complex Complex::operator^  (int n)
{
    Complex c2(real, imaginary);
    Complex c3(real, imaginary);
    if (n == 0)
    {
        Complex c3(1,0);
        return c3;      //returns n^0=1
    }
    else if (n < 0)
    {                                   //if n is negative, changes
        n *= -1;                        //n to positive and then 
        for (int i = 1; i < n; i++)     //returns the reciprocal
        {
            Complex c4 = c2 * c3;
            c3 = c4;
        }
        double bottom = (c3.real*c3.real) + ((c3.imaginary*c3.imaginary));
        Complex c5 = ~c3 / bottom;
        return (c5);
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            Complex c4 = c2 * c3;
            c3 = c4;
        }
        return c3;    
            
    }
}

//------------------------------------------------------------
// setReal
// Sets the real part of the complex number.
//------------------------------------------------------------

void	Complex::setReal    (double n)
{
	real = n;
}

//------------------------------------------------------------
// getReal
// Gets the real part of the complex number.
//------------------------------------------------------------

double  Complex::getReal    (void)
{
    return real;
}

//------------------------------------------------------------
// setImag
// Sets the imaginary part of the complex number.
//------------------------------------------------------------

void	Complex::setImag    (double n)
{
    imaginary = n;
}

//------------------------------------------------------------
// getImag
// Gets the imaginary part of the complex number.
//------------------------------------------------------------ 

double   Complex::getImag    (void)
{
    return imaginary;
}

//------------------------------------------------------------
// operator=
// Allows assignment of values between complex numbers.
//------------------------------------------------------------

Complex Complex::operator=  (Complex c1)
{
    real = c1.real;
    imaginary = c1.imaginary;
    return c1;
}

//------------------------------------------------------------
// operator==
// Allows comparison for equality between complex numbers.
//------------------------------------------------------------

bool    Complex::operator== (Complex c1)
{
    return (real == c1.real and imaginary == c1.imaginary);
}

//------------------------------------------------------------
// operator !=
// Allows comparison for inequality between complex numbers.
//------------------------------------------------------------

bool    Complex::operator!= (Complex c1)
{
    return (real != c1.real or imaginary != c1.imaginary);
}
