// Emma Steinman
// January 25, 2017
// Grades.cpp
// This program illustrates conditional execution.

#include <iostream>
using namespace std;

int main(void)
{
    char grade;

    cout << "Enter grade (A...F): ";
    cin >> grade;
    while (grade != 'A' && grade != 'B' && grade != 'C'
        && grade != 'D' && grade != 'F')       
    {
        cout << "Invalid input, try again.\n ";
        cout << "Enter grade (A...F): ";
        cin >> grade;
    }

    if (grade == 'A')
        cout << "Excellent!\n";
    else if (grade == 'B')
        cout << "Super!\n";
    else if (grade == 'C')
        cout << "Okay.\n";
    else
        cout << "Come to office hours.\n";

    switch (grade)
    {
        case 'A' : cout << "Excellent!\n";
                   break;
        case 'B' : cout << "Super!\n";
                   break;
        case 'C' : cout << "Okay.\n";
                   break;
        default : cout << "Come to office hours.\n";
    }
	return 0;
}
