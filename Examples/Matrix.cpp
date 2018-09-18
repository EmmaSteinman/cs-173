// ==================================================
// Emma Steinman
// February 6, 2017
// Matrix.cpp
// This program reads, prints, and multiplies
// matrices. 
// ==================================================

#include <iostream>
using namespace std;


// ==================================================
// main
// ==================================================

int main (void) 
{
    // dimensions of matrices
    int aRow, aCol, bRow, bCol, cRow, cCol;

    cin >> aRow >> aCol;
    int A[aRow][aCol];

    // read in values into matrix A
    for (int i = 0; i < aRow; i++)
    {
        for (int j = 0; j < aCol; j++)
            cin >> A[i][j];
    }

    // print matrix A
    cout << "A = " << endl;
    for (int i = 0; i < aRow; i++)
    {
        for (int j = 0; j < aCol; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }

    cin >> bRow >> bCol;
    int B[bRow][bCol];
    
    // read in values into matrix B
    for (int i = 0; i < bRow; i++)
    {
        for (int j = 0; j < bCol; j++)
            cin >> B[i][j];
    }

    // print matrix B
    cout << "B = " << endl;
    for (int i = 0; i < bRow; i++)
    {
        for (int j = 0; j < bCol; j++)
            cout << B[i][j] << " ";
        cout << endl;
    }

    cRow = aRow;
    cCol = bCol;
    int C[cRow][cCol];

    for (int i = 0; i < cRow; i++)
    {
        for (int j = 0; j < cCol; j++)
        {
            int product = 0;
            for (int k = 0; k < aCol; k++)
                product += A[i][k] * B[k][j];
            C[i][j] = product;
        }
    }
    
    // print matrix B
    cout << "C = " << endl;
    for (int i = 0; i < cRow; i++)
    {
        for (int j = 0; j < cCol; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}
