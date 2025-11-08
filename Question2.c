//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Assignment9_2.c
//  Description     : Convert USD to INR 
//  Author          : Gitanjali Meghanath Patil
//  Date            : 22/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int DollarToINR(int iNo)
{
    int Result = 0;
    int iValueOf1Dollar = 84;

    iResult = iNo * iValueOf1Dollar;

    return iResult;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}