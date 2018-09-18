//======================================================
//Emma Steinman
//January 27, 2017
//Combinatorics.cpp
//This function calculates the number of permutations 
//and combinations.
//======================================================

#include <iostream>
using namespace std;

#define ULL unsigned long long // replaces all ULL with unsigned long long

ULL comb(unsigned, unsigned);
ULL perm(unsigned, unsigned);
ULL fact(unsigned);

//======================================================
//main
//======================================================
int main(void)
{
    int n, k, perms, combs, permutations, combinations;
    cout << "Enter value for n. ";
    cin >> n;
    cout << "Enter value for k. ";
    cin >> k;

    permutations = perm(n, k);
    combinations = comb(n, k);

    cout << "The number of permutations is " <<permutations<<endl;
    cout << "The number of combinations is " <<combinations<<endl;

    return 0;
}

int fact(int i)
{
    if (i == 0)
        return 1;
    else 
        return i * fact(i - 1);
}

int perm(int n, int k)
{
    int perms = 0;
    perms = (fact(n))/(fact(n-k));
    return perms;
}

int comb(int n, int k)
{
    int combs = 0;
    combs = (fact(n))/((fact(k)) * (fact(n-k)));
    return combs;
}
    
