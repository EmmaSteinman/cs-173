//=========================================================
// Emma Steinman
// January 27, 2017
// Fxns.cpp
// This program illustrates iteration and functions
// by computing 1+2+...+n
//=========================================================

#include <iostream>
using namespace std;

int sum (int);
int sumr (int);

//=========================================================
// main
//=========================================================
int main(void)
{

    int n, total;

    cout << "Enter integer n: ";
    cin >> n;

    total = sumr(n);
    cout << "Sum(" << n << ") = " << total << endl;

    return 0;
}


int sum(int n)
{
    int total = 0;
    for (int i = 1; i <= n; i++)
    {
        total = total + i;
    }
    return total;

}

int sumr(int n)
{
    if (n == 0)
        return 0;
    else
        return n + sumr(n-1);
    
}
