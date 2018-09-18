//============================================================
//Emma Steinman
//February 21, 2017
// Rational.cpp
// This program implements a Rational class object
//============================================================

#include <iostream>
using namespace std;

//============================================================
//Rational Class
//============================================================


class Rational
{
private:
    int     numerator;
    int     denominator;

    int     gcd         (int a, int b );
    void    reduce      (void);

public:

            Rational    (void);        // default constructor
            Rational    (int n, int d);
            Rational    (int n);
           ~Rational    (void);        // destructor
    void    print       (void);   
    Rational operator*  (Rational r);
    Rational operator+  (Rational r);

    friend ostream & operator<< ( ostream &os, Rational r );
    friend istream & operator>> ( istream &is, Rational &r );
};
//---------------------------------------------------------

        Rational::Rational (void)
{
    numerator = 0;
    denominator = 1;
}

//---------------------------------------------------------
        Rational::Rational(int n, int d)
{
    numerator = n;
    denominator = d;
    reduce();
}        
//---------------------------------------------------------
        Rational::Rational(int n)
{
    numerator = n;
    denominator = 1;
}
//---------------------------------------------------------
        Rational::~Rational(void)
{
}
//----------------------------------------------------------
void    Rational::print(void)
{
    cout << numerator << "/" << denominator << endl;
}


ostream & operator<< ( ostream &os, Rational r )
{
    os << r.numerator << "/" << r.denominator;
    return os;
}
//----------------------------------------------------------
istream & operator>> ( istream &is, Rational &r )
{
    string s, num_str, den_str;
    
    is >> s;        //read in rational as string
    size_t spot = s.find('/');
    num_str = s.substr(0,spot);
    den_str = s.substr(spot + 1, s.size()-spot-1);
 
    r.numerator = stoi(num_str);
    r.denominator = stoi(den_str);
    r.reduce();
    return is;   
}
//---------------------------------------------------------
int     Rational::gcd(int a, int b)
{
    int r = a % b;
    while (r)
    {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}
//---------------------------------------------------------
void    Rational::reduce(void)
{
    int d = gcd(numerator, denominator);
    if (d>1)
    {
        numerator /= d;
        denominator /= d;
    }
}
//----------------------------------------------------------
Rational    Rational::operator* (Rational r)
{
    Rational ret;           //return object

    ret.numerator = numerator * r.numerator;
    ret.denominator = denominator * r.denominator;
    ret.reduce();

    return ret;
}
Rational    Rational::operator+ (Rational r)
{
    Rational ret;
    int d = gcd(denominator, r.denominator);
    cout << d << endl;
    int n = numerator;
    numerator = numerator * (d/r.numerator);
    cout << numerator << endl;
    r.numerator = r.numerator * (d/n);
    cout << r.numerator << endl;
    ret.numerator = numerator + r.numerator;
    ret.denominator = d;
    ret.reduce();
    
    return ret;
}
//============================================================
//main
//============================================================
int main (void)
{

    Rational r1;
    Rational r2(2,5);    
    Rational r3(10);
    Rational r4;

    cout << "Enter r4: ";
    cin >> r4;

    r1.print();
    cout << "r1 = " << r1 << endl;
    cout << "r2 = " << r2 << endl;
    cout << "r3 = " << r3 << endl;
    cout << "r4 = " << r4 << endl;

    r3 = r2+r4;
    cout << "r3 = " << r3 << endl;
    return 0;
}
