////////////////////////////////////////////////////////////
//
//  File name :     52.3.cpp
//  Description :   This program performs addition of
//                  all elements from an array using
//                  function templates
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
//  Function Name : Addition
//  Description   : Calculates the sum of all elements
//                  from the given array using templates
//  Input         : T Arr[], int iSize
//  Output        : T
//  Author        : Gitanjali Patil
//  Date          : 11/01/2026
//  Time Complexity: O(N)
//
////////////////////////////////////////////////////////////

template <class T>
T Addition(T *Arr, int iSize)
{
    T iSum = 0;

    for(int i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
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
    int Arr[] = {10, 20, 30, 40, 50};
    float Brr[] = {10.0f, 3.7f, 9.8f, 8.7f};

    cout << Addition(Arr, 5) << "\n";
    cout << Addition(Brr, 4) << "\n";

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : {10,20,30,40,50}          Output : 150
//  Input : {10.0,3.7,9.8,8.7}        Output : 32.2
//
////////////////////////////////////////////////////////////