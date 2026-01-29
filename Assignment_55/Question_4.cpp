////////////////////////////////////////////////////////////
//
//  File name :     55.4.cpp
//  Description :   This program swaps two values using
//                  function templates
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
//  Function Name : Swap
//  Description   : Swaps the values of two variables
//                  using templates
//  Input         : T &No1, T &No2
//  Output        : void
//  Author        : Gitanjali Patil
//  Date          : 20/01/2026
//  Time Complexity: O(1)
//
////////////////////////////////////////////////////////////

template <class T>
void Swap(T &No1, T &No2)
{
    T temp;
    temp = No1;
    No1 = No2;
    No2 = temp;
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION FOR THE APPLICATION
//
////////////////////////////////////////////////////////////

int main()
{
    int a = 10, b = 20;
    Swap(a, b);
    cout << a << " " << b << endl;

    float x = 3.5f, y = 7.8f;
    Swap(x, y);
    cout << x << " " << y << endl;

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : a = 10, b = 20          Output : 20 10
//  Input : x = 3.5, y = 7.8        Output : 7.8 3.5
//
////////////////////////////////////////////////////////////