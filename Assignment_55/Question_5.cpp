////////////////////////////////////////////////////////////
//
//  File name :     55.5.cpp
//  Description :   This program finds the maximum element
//                  among four values using function templates
//  Author :        Gitanjali Patil
//  Date :          20/01/2026
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
//  Description   : Returns the maximum value among four
//                  elements using templates
//  Input         : T No1, T No2, T No3, T No4
//  Output        : T
//  Author        : Gitanjali Patil
//  Date          : 20/01/2026
//  Time Complexity: O(1)
//
////////////////////////////////////////////////////////////

template <class T>
T Max(T No1, T No2, T No3, T No4)
{
    T Max = No1;

    if(No2 > Max)
    {
        Max = b;
    }
    if(No3 > Max)
    {
        Max = c;
    }
    if(No4 > Max)
    {
        Max = d;
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
    cout << Max(10, 20, 30, 40) << "\n";
    cout << Max(10.5f, 20.3f, 15.8f, 40.2f) << "\n";

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : 10,20,30,40            Output : 40
//  Input : 10.5,20.3,15.8,40.2    Output : 40.2
//
////////////////////////////////////////////////////////////