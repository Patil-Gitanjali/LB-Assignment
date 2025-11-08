//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Assignment7
//  Description     : Accept one number from user and print that number of $* on the screen 
//  Author          : Gitanjali Meghanath Patil
//  Date            : 22/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void pattern(int iNo)
{
  int iCnt = 0;
  for(iCnt = 1; iCnt <= iNo; iCnt++)
  {
    printf(" $ *");
  }
}
int main()
{
    int ivalue = 0;
    printf("Enter number");
    scanf("%d",&ivalue);

    pattern(ivalue);

    return 0;
}