//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Assignment5
//  Description     : Check Positive Negative or Zero
//  Author          : Gitanjali Meghanath Patil
//  Date            : 21/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void CheckNumberType(int num)
{
    if(num > 0)
    {
        printf("Number is Positive");
    }
    else if(num < 0)
    {
        printf("Number is Negative");
    }
    else
    {
        printf("Number is Zero");
    }
}
int main()
{
    int number;

    printf("Enter number:");
    scanf("%d",&number);

    CheckNumberType(number);

    return 0;
}