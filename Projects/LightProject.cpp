//=========================================================
// Emma Steinman
// February 1, 2017
// LightProject.cpp
// This program determines whether any security lights are
// on when the mailman arrives.
//=========================================================

#include <iostream>
using namespace std;

int light(int, int, int, int, int);

//=========================================================
// main
//=========================================================

int main(void)
{
    int cycle1, cycle1a, cycle2, cycle2a, arrival;
    cout << "Light 1 on? ";
    cin >> cycle1;
    cout << "Light 1 off? ";
    cin >> cycle1a;
    cout << "Light 2 on? ";
    cin >> cycle2;
    cout << "Light 2 off? ";
    cin >> cycle2a;
    cout << "Mailman arrival? ";
    cin >> arrival;                     /* gathers input data
                                        for funtion */
    light(cycle1, cycle1a, cycle2, cycle2a, arrival);
    
    return 0;
}

//=========================================================
// light
// Parameters:
// - int t1, int t1a, int t2, int t2a, int m_arrival
// Return Value:
// - none
// Output:  
// -"Both" if both lights are on.
// -"One" if one light is on.
// -"None" if no lights are on.
//=========================================================
int light(int t1, int t1a, int t2, int t2a, int m_arrival)
{
    bool lighta = true;
    bool lightb = true;
    int cycle1 = t1 + t1a;
    int cycle2 = t2 + t2a;
    int time1 = m_arrival;
    int time2 = m_arrival;                 /* initializes 
                                              variables */
    time1 = time1 % cycle1;
    
    time2 = time2 % cycle2;                /* calculates
                                          residual time */
    lighta = time1 < t1;
    
    lightb = time2 < t2;                 /* checks remaining
                                           time and assigns
                                          boolean value */
    if (t1 and t2)
        cout<< "Both." << endl;
    else if (t1 or t2)
        cout<< "One." << endl;
    else 
        cout<< "None." << endl;
    
    return 0;

}
    
