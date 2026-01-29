////////////////////////////////////////////////////////////
//
//  File name :     55.1.cpp
//  Description :   This program performs addition of
//                  two values using function templates
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
//  Function Name : Addition
//  Description   : Performs addition of two values
//                  using templates
//  Input         : T No1, T No2
//  Output        : T
//  Author        : Gitanjali Patil
//  Date          : 20/01/2026
//  Time Complexity: O(1)
//
////////////////////////////////////////////////////////////

template <class T>
T Addition(T No1, T No2)
{
    T Ans;

    Ans = No1 + No2;

    return Ans;
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION FOR THE APPLICATION
//
////////////////////////////////////////////////////////////

int main()
{
    int iRet = 0;

    iRet = Addition(10, 20);
    cout << iRet << "\n";

    float fRet = 0.0f;
    float fRet = Addition(10.5f, 20.3f);
    cout << fRet << "\n";

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : 10, 20            Output : 30
//  Input : 10.5, 20.3        Output : 30.8
//
////////////////////////////////////////////////////////////