//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Assignment5
//  Description     : Take Number  from user and Check if its Even or not
//  Author          : Gitanjali Meghanath Patil
//  Date            : 21/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void CheckEvenOdd(int num)
{
    if((num % 2)==0)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }
}
int main()
{
    int number;

    printf("Enter number:");
    scanf("%d",&number);

    CheckEvenOdd(number);

    return 0;
}