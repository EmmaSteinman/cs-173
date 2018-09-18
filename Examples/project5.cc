//=================================================================
// name
// project5.cc
// February 13, 2017
// This project solves the fractional knapsack problem.
//=================================================================

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

typedef struct          //keeps track of multiple values
{
    int     number;     // number of that item avaiable
    int     price;      // total price of that item
    string  name;       // name of item
    float   value;      // cost per item value ratio
} itemType;


// function prototypes
itemType    readItem        ( void );
void        printItem       ( itemType item );
//=================================================================
// main
//=================================================================
int main ( void )
{
    itemType item;
    vector<itemType> fullList;
    int capacity;
    
    cin >> capacity;
    cout << "FULL LIST" << endl;
    while ( cin )
    {
        item = readItem();
        if ( cin )
            printItem(item);
            fullList.push_back(item);
    }
    selectionSort(fullList);
    cout << "SORTED BY VALUE" << endl;
    for (int i = 0; i< fullList.size(); i++)
    
    return 0;
}
//=================================================================
// readItem
// This function reads values from cin to fill in an itemType
// data structure.
// Values must be read in the following order:
// (a) an integer for the number of that item
// (b) an integer for the total price of that item (for all numbers)
// (c) a string that is the item name.
// The string may contain whitespace -- it is read in with a getline
// command
// Parameters: none
// Return Value: a filled in itemType struct
//=================================================================
itemType readItem ( void )
{
    itemType item;
    cin >> item.number;
    cin >> item.price;
    item.value = (float)item.price / item.number;
    getline(cin,item.name);
    
    return item;
}
//=================================================================
// printItem
// This function prints an item with formatting.
// Parameters: a valid itemType struct
// Return Value: none
//=================================================================
void printItem ( itemType item )
{
    cout << "(" << setw(15) << item.name;
    cout << ", val=" << setw(8) << fixed << setprecision(3) << item.value;
    cout << ", num=" << setw(3) << item.number;
    cout << ", $=" << setw(3) << item.price << ")\n";
}
//=================================================================
//selectionSort
// This function sorts a vector in decreasing order.
// Parameters: a valid itemType struct
//Return value: none
//=================================================================

void selectionSort(vector<itemType> & v)
{
    for (int i = 0; i < v.size()-1; i++)
    {
        int big = i;
        for (int j = 0; j < v.size()-1; j++)
            if v[j] > v[big]
                big = j;
        itemType temp = v[i]        
        v[i] = v[big];
        v[j] = v[temp];
    }








}





//=================================================================
//=================================================================
//=================================================================
//=================================================================

