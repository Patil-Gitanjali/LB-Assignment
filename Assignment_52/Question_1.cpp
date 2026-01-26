////////////////////////////////////////////////////////////
//
//  File name :     52.1.cpp
//  Description :   This program performs multiplication
//                  of two values using function templates
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
//  Function Name : Multiply
//  Description   : Performs multiplication of two
//                  values using templates
//  Input         : T No1, T No2
//  Output        : T
//  Author        : Gitanjali Patil
//  Date          : 11/01/2026
//  Time Complexity: O(1)
//
////////////////////////////////////////////////////////////

template <class T>
T Multiply(T No1, T No2)
{
    T Ans;

    Ans = No1 * No2;

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

    iRet = Multiply(10, 20);
    cout << "Multiplication is:" << iRet << "\n";

    float fRet = 0.0f;

    fRet = Multiply(10.0f, 20.0f);
    cout << "Multiplication is:" << fRet << "\n";

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : 10, 20        Output : 200
//  Input : 10.0, 20.0    Output : 200.0
//
////////////////////////////////////////////////////////////