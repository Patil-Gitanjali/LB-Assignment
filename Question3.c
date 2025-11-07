//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Assignment5
//  Description     : Check Leap year
//  Author          : Gitanjali Meghanath Patil
//  Date            : 21/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void CheckLeapYear(int year)
{
   if(year % 400 == 0)
   {
    printf("%d is a Leap Year.", year);
   }
   else if (year % 100 == 0)
   {
    printf("%d is Not a Leap Year.",year);
   }
   else if(year % 4 == 0)
   {
    printf("%d is a Leap Year.",year);
   }
   else
   {
    printf("%d is Not a Leap Year.",year);
   }
}
int main()
{
    int yr;

    printf("Enter Year:");
    scanf("%d",&yr);

    CheckLeapYear(yr);

    return 0;
    
}