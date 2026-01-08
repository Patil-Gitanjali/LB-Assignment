//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Assignment7
//  Description     : Accept one number from user and print 5 multiples of that number
//  Author          : Gitanjali Meghanath Patil
//  Date            : 22/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void MultipleDisplay(int iNo)
{
   int iCnt = 0;

   if(iNo <= 0)
   {
      iNo = -iNo;
   }
   for(iCnt = 1; iCnt <= 5; iCnt++)
   {
      printf("%d", iNo * iCnt);
   }
}
int main()
{
    int ivalue = 0;
    printf("Enter number");
    scanf("%d",&ivalue);
    MultipleDisplay(ivalue);
    return 0;
}