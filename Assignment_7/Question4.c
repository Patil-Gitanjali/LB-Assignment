//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Assignment7
//  Description     : Accept one number from user and print all odd numbers till that number
//  Author          : Gitanjali Meghanath Patil
//  Date            : 22/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void OddDisplay(int iNo)
{
   int iCnt = 0;

   if(iNo < 0)
   {
      iNo = -iNo;
   }
   for(iCnt = 1; iCnt <= iNo; iCnt++)
   {
        if(iCnt % 2 != 0)
        {
            printf("%d",iCnt);
        }
   }
}
int main()
{
    int ivalue = 0;
    printf("Enter number");
    scanf("%d",&ivalue);

    OddDisplay(ivalue);

    return 0;
}