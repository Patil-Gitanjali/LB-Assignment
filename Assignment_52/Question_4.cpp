////////////////////////////////////////////////////////////
//
//  File name :     52.4.cpp
//  Description :   This program finds the maximum element
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
//  Function Name : Maximum
//  Description   : Returns the maximum element from
//                  the given array using templates
//  Input         : T Arr[], int iSize
//  Output        : T
//  Author        : Gitanjali Patil
//  Date          : 11/01/2026
//  Time Complexity: O(N)
//
////////////////////////////////////////////////////////////

template <class T>
T Maximum(T *Arr, int iSize)
{
    int iCnt = 0;
    T Max = Arr[0];

    for(iCnt = 1; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > Max)
        {
            Max = Arr[iCnt];
        }
    }

    return Max;
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

    cout << Maximum(Arr, 5) << "\n";
    cout << Maximum(Brr, 4) << "\n";

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : {10,20,30,40,50}          Output : 50
//  Input : {10.0,3.7,9.8,8.7}        Output : 10.0
//
////////////////////////////////////////////////////////////