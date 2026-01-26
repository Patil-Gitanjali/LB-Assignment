////////////////////////////////////////////////////////////
//
//  File name :     52.5.cpp
//  Description :   This program finds the minimum element
//                  from an array using function templates
//  Author :        Gitanjali Patil
//  Date :          11/01/2026
//
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
//
//  REQUIRED HEADER FILES
//
////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

////////////////////////////////////////////////////////////
//
//  Function Name : Minimum
//  Description   : Returns the minimum element from
//                  the given array using templates
//  Input         : T Arr[], int iSize
//  Output        : T
//  Author        : Gitanjali Patil
//  Date          : 11/01/2026
//  Time Complexity: O(N)
//
////////////////////////////////////////////////////////////

template <class T>
T Minimum(T *Arr, int iSize)
{
    int iCnt = 0;
    T Min = Arr[0];

    for(iCnt = 1; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < Min)
        {
            Min = Arr[iCnt];
        }
    }

    return Min;
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION FOR THE APPLICATION
//
////////////////////////////////////////////////////////////

int main()
{
    int Arr[] = {10, 20, 30, 40, 50};
    float Brr[] = {10.0f, 3.7f, 9.8f, 8.7f};

    cout << Minimum(Arr, 5) << "\n";
    cout << Minimum(Brr, 4) << "\n";

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : {10,20,30,40,50}          Output : 10
//  Input : {10.0,3.7,9.8,8.7}        Output : 3.7
//
////////////////////////////////////////////////////////////