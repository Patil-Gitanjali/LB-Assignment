////////////////////////////////////////////////////////////
//
//  File name :     54.1.cpp
//  Description :   This program searches for a specific
//                  element in an array using function
//                  templates
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
//  Function Name : Search
//  Description   : Searches for the given element in
//                  the array using templates
//  Input         : T Arr[], int iSize, T Value
//  Output        : bool
//  Author        : Gitanjali Patil
//  Date          : 15/01/2026
//  Time Complexity: O(N)
//
////////////////////////////////////////////////////////////

template <class T>
bool Search(T *Arr, int iSize, T Value)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == Value)
        {
            return true;
        }
    }

    return false;
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION FOR THE APPLICATION
//
////////////////////////////////////////////////////////////

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    if(Search(arr, 5, 30))
        cout << "Element found";
    else
        cout << "Element not found";

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : {10,20,30,40,50}, 30
//  Output: Element found
//
////////////////////////////////////////////////////////////