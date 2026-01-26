////////////////////////////////////////////////////////////
//
//  File name :     51.2.cpp
//  Description :   This program counts the frequency of a
//                  given element from an array using
//                  function templates
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
//  Function Name : CountFrequency
//  Description   : Counts the frequency of a specific
//                  element from the given array
//  Input         : T Arr[], int iSize, T Frequency
//  Output        : int
//  Author        : Gitanjali Patil
//  Date          : 10/1/2026
//  Time Complexity: O(N)
//
////////////////////////////////////////////////////////////

template <class T>
int CountFrequency(T Arr[], int iSize, T Frequency)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == Frequency)
        {
            iCount++;
        }
    }

    return iCount;
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

    iRet = CountFrequency(Arr, 9, 30);
    cout << "Frequency is:" << iRet << "\n";

    char cArr[] = {'a', 'b', 'c', 'a', 'b', 'c', 'd'};

    iRet = CountFrequency(cArr, 9, 'a');
    cout << "Frequency is:" << iRet << "\n";

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : {10,20,30,40,30,60,70,30,90}, 30
//  Output: 3
//
//  Input : {'a','b','c','a','b','c','d'}, 'a'
//  Output: 2
//
////////////////////////////////////////////////////////////