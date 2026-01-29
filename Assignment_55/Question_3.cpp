////////////////////////////////////////////////////////////
//
//  File name :     55.3.cpp
//  Description :   This program performs division of
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
//  Function Name : Division
//  Description   : Performs division of two values
//                  using templates
//  Input         : T No1, T No2
//  Output        : T
//  Author        : Gitanjali Patil
//  Date          : 20/01/2026
//  Time Complexity: O(1)
//
////////////////////////////////////////////////////////////

template <class T>
T Division(T No1, T No2)
{
    if(No2 == 0)
    {
        return 0;
    }

    return No1 / No2;
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION FOR THE APPLICATION
//
////////////////////////////////////////////////////////////

int main()
{
    int iRet = 0;

    iRet = Division(20, 5);
    cout << iRet << "\n";

    float fRet = 0.0f;
    fRet = Division(20.5f, 5.0f);
    cout << fRet << "\n";

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : 20, 5            Output : 4
//  Input : 20.5, 5.0        Output : 4.1
//  Input : 10, 0            Output : 0
//
////////////////////////////////////////////////////////////