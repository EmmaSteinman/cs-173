//==============================================================
// Emma Steinman
// Midterm1Implementation.cpp
// February 27, 2017
// This program implements the programs on the first Midterm.
//==============================================================

#include <iostream>
#define N 30
#define M 20
#define P 10
using namespace std;

int factorial(int);
void toUpper(char [N]);
bool parityMatch(int, int);
int strlen(char[]);
int substr(char[M], char[M]);
int inversions(int[P], int);
//==============================================================
// main
// This function calls and prints all of the values of the 
// functions written below.
// Parameters
// -none
// Return Value
// -0
//==============================================================

int main(void)
{

    cout << factorial(6)<<endl;

    char name[N] = "Emma Steinman";
    toUpper(name);
    cout << name << endl;

    cout << parityMatch(8,4) << endl;

    char fullWord[M] = "computers";
    char substring[M] = "put";
    cout << substr(fullWord, substring) << endl;

    int numbrs[P] = {4,5,6,7,8,10,9};
    cout << inversions(numbrs, 7) << endl;

    return 0;
}

//==============================================================
// factorial
// This function returns n! (n*(n-1)*(n-2)...*1) for given n.
// Parameters
// -n:  an integer
// Return Value
// -n!
//==============================================================

int factorial(int n)
{
    int product = n;
    if (n==0)                       //base case
        return 1;
    else
        product *= factorial(n-1);  //recursively calls itself 

    return product;
}

//==============================================================
// toUpper
// This function returns a c-style string with all of the lower-
// case letters changed to upper-case.
// Parameters
// -s[N]:   a character array with size N
// Return Value
// -none, but characters in s may be changed
//==============================================================

void toUpper(char s[N])
{
    int i=0;
    while (s[i] != 0)
    {
        char c = s[i];
        if (c>='a' and c<='z')      //only changes if letter is
            c+= 'A'-'a';            //already lowercase
        s[i] = c;
        i++;
    }
}

//==============================================================
// parityMatch
// This function compares the parity of two integers and returns
// true if they are the same and false if they are different.
// Parameters
// -n:  first integer to be compared
// -k:  second integer to be compared
// Return Value
// -true or false (1 or 0)
//==============================================================

bool parityMatch(int n, int k)
{
    return ((n%2)==(k%2));
}

//==============================================================
// strlen
// This function finds the length of a character array.
// Parameters
// -s[]:    character array
// Return Value
// -integer length of array
//==============================================================
int strlen(char s[])
{
    int i = 0;
    while (s[i] != 0)
        i++;

    return i;
}

//==============================================================
// substr
// This function finds the index of a substring within a main
// string. 
// Parameters
// -s[M]:   character array of size M, main string
// -t[M]:   character array of size M, substring
// Return Value
// -integer index of found substring or -1 if not found
//==============================================================
int substr(char s[M], char t[M])
{
    int ssize = strlen(s);          
    int tsize = strlen(t);          //finds size of strings
    for (int i=0; i<ssize; i++)
    {
        int k = 0;                  //checks letters in main str.
        if (s[i] == t[0])           //for first in substr.
        {
            k += 1;
            for (int j = 1; j < tsize; j++)
            {                       //if found checks rest of 
                if (s[i+j] == t[j]) //letters in length of substr.
                    k += 1;
            }
        }
        if (k == tsize)
            return i;
    }

    return -1;
}

//==============================================================
// inversions
// This function counts the number of inversions in an array of 
// numbers.
// Parameters
// -array[P]:   array of size P with numbers
// -n:          integer length of array
// Return Value
// -integer number of inversions
//==============================================================
int inversions (int array[P], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (array[i] > array[j])
                count += 1;
        }
    }

    return count;
}
       
