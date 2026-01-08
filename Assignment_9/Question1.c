//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Assignment9_1.c
//  Description     : Accept one number from user and print that number of *****##### on the screen
//  Author          : Gitanjali Meghanath Patil
//  Date            : 22/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int i;
    for(i = 1; i<= iNo; i++)
    {
        printf("*");
    }
    for(i = 1; i <= iNo; i++)
    {
        printf("#");
    }
}
int main()
{
    int ivalue = 0;

    printf("Enter number");
    scanf("%d",&ivalue);

    Display(ivalue);

    return 0;
}