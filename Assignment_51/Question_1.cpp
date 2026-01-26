////////////////////////////////////////////////////////////
//
//  File name :     51.1.cpp
//  Description :   This program demonstrates the use of
//                  function templates to display a value
//                  multiple times
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
//  Function Name : Display
//  Description   : Displays the given value specified
//                  number of times using templates
//  Input         : T Value, int iSize
//  Output        : void
//  Author        : Gitanjali Patil
//  Date          : 10/01/2026
//  Time Complexity: O(N)
//
////////////////////////////////////////////////////////////

template <class T>
void Display(T Value, int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << Value << "\t";
    }

    cout << "\n";
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION FOR THE APPLICATION
//
////////////////////////////////////////////////////////////

int main()
{
    Display('M', 7);
    Display(11, 3);
    Display(3.7, 6);

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : Display('M',7)     Output : M M M M M M M
//  Input : Display(11,3)      Output : 11 11 11
//  Input : Display(3.7,6)     Output : 3.7 3.7 3.7 3.7 3.7 3.7
//
////////////////////////////////////////////////////////////