////////////////////////////////////////////////////////////
//
//  File name :     54.3.cpp
//  Description :   This program calculates the sum of
//                  all odd elements from an array
//                  using function templates
//  Author :        Gitanjali Patil
//  Date :          15/01/2026
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
//  Function Name : SumOdd
//  Description   : Calculates the sum of all odd
//                  elements from the given array
//                  using templates
//  Input         : T Arr[], int iSize
//  Output        : T
//  Author        : Gitanjali Patil
//  Date          : 15/01/2026
//  Time Complexity: O(N)
//
////////////////////////////////////////////////////////////

template <class T>
T SumOdd(T *Arr, int iSize)
{
    int iCnt = 0;
    T iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iSum = iSum + Arr[iCnt];
        }
    }

    return iSum;
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION FOR THE APPLICATION
//
////////////////////////////////////////////////////////////

int main()
{
    int arr[] = {10, 21, 30, 41, 50};

    cout << SumOdd(arr, 5);

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : {10,21,30,41,50}
//  Output: 62
//
////////////////////////////////////////////////////////////