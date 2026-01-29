////////////////////////////////////////////////////////////
//
//  File name :     55.2.cpp
//  Description :   This program performs subtraction of
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
//  Function Name : Subtraction
//  Description   : Performs subtraction of two values
//                  using templates
//  Input         : T No1, T No2
//  Output        : T
//  Author        : Gitanjali Patil
//  Date          : 20/01/2026
//  Time Complexity: O(1)
//
////////////////////////////////////////////////////////////

template <class T>
T Subtraction(T No1, T No2)
{
    T Ans;

    Ans = No1 - No2;

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

    iRet = Subtraction(20, 10);
    cout << iRet << "\n";

    float fRet = 0.0f;
    fRet = Subtraction(20.5f, 10.3f);
    cout << fRet << "\n";

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : 20, 10            Output : 10
//  Input : 20.5, 10.3        Output : 10.2
//
////////////////////////////////////////////////////////////