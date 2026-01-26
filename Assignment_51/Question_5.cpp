////////////////////////////////////////////////////////////
//
//  File name :     51.5.cpp
//  Description :   This program reverses the array
//  Author :        Gitanjali Patil
//  Date :          10/01/2026
//
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
//
//  REQUIRED HEADER FILES
//
////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////
//
//  Function Name : Reverse
//  Description   : Reverse the array
//  Input         : T Arr[], int iSize
//  Output        : int
//  Author        : Gitanjali Patil
//  Date          : 10/01/2026
//  Time Complexity: O(N)
//
////////////////////////////////////////////////////////////
template <class T>
void Reverse(T Arr[], int iSize)
{
    int iCnt1 = 0;
    int iCnt2 = 0;
    T Crr[iSize];   

    for(iCnt1 = iSize - 1, iCnt2 = 0 ; iCnt1 >= 0 ; iCnt1--, iCnt2++)
    {
        Crr[iCnt2] = Arr[iCnt1];
    }

    for(iCnt2 = 0 ; iCnt2 < iSize ; iCnt2++)
    {
        cout << Crr[iCnt2] << "\t";
    }
}
////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION FOR THE APPLICATION
//
////////////////////////////////////////////////////////////
int main()
{
    int iCnt = 0;
    int Arr[] = {10,20,30,40,30,60,70,30,90};

    
    for(iCnt = 0 ; iCnt < 9 ; iCnt++)
    {
        cout << Arr[iCnt] << "\t";
    }

    cout << "\n";

    Reverse(Arr, 9);

    return 0;
}
////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : {10,20,30,40,30,60,70,30,90}, 30
//  Output: 90  30  70  60  30   40  30  20  10
//
////////////////////////////////////////////////////////////