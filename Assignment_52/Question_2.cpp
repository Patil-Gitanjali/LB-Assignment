////////////////////////////////////////////////////////////
//
//  File name :     52.2.cpp
//  Description :   This program finds the maximum of
//                  three values using function templates
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
//  Function Name : Max
//  Description   : Returns the maximum value from
//                  three given values using templates
//  Input         : T No1, T No2, T No3
//  Output        : T
//  Author        : Gitanjali Patil
//  Date          : 11/01/2026
//  Time Complexity: O(1)
//
////////////////////////////////////////////////////////////

template <class T>
T Max(T No1, T No2, T No3)
{
    T Max = No1;

    if(No2 > Max)
    {
        Max = No2;
    }

    if(No3 > Max)
    {
        Max = No3;
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
    int iRet = Max(10, 20, 30);
    cout << "Maximum element is:" << iRet << "\n";

    float fRet = Max(10.5f, 20.3f, 15.2f);
    cout << "Maximum element is:" << fRet << "\n";

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : 10, 20, 30          Output : 30
//  Input : 10.5, 20.3, 15.2    Output : 20.3
//
////////////////////////////////////////////////////////////