////////////////////////////////////////////////////////////
//
//  File name :     51.3.cpp
//  Description :   This program searches for the first
//                  occurrence of a given element in an
//                  array using function templates
//  Author :        Gitanjali Patil
//  Date :          10/01/2026
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
//  Function Name : SearchFirst
//  Description   : Returns the index of the first
//                  occurrence of a specific element
//                  in the given array
//  Input         : T Arr[], int iSize, T Frequency
//  Output        : int
//  Author        : Gitanjali Patil
//  Date          : 10/01/2026
//  Time Complexity: O(N)
//
////////////////////////////////////////////////////////////

template <class T>
int SearchFirst(T Arr[], int iSize, T Frequency)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == Frequency)
        {
            return iCnt;
        }
    }
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION FOR THE APPLICATION
//
////////////////////////////////////////////////////////////

int main()
{
    int iRet = 0;
    int Arr[] = {10, 20, 30, 40, 30, 60, 70, 30, 90};

    iRet = SearchFirst(Arr, 9, 30);
    cout << "First Index is:" << iRet << "\n";

    char cArr[] = {'a', 'b', 'c', 'a', 'b', 'c', 'd'};

    iRet = SearchFirst(cArr, 9, 'c');
    cout << "First Index is:" << iRet << "\n";

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : {10,20,30,40,30,60,70,30,90}, 30
//  Output: 2
//
//  Input : {'a','b','c','a','b','c','d'}, 'c'
//  Output: 0
//
////////////////////////////////////////////////////////////