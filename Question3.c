//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Assignment7
//  Description     : Accept one number from user and print its number line
//  Author          : Gitanjali Meghanath Patil
//  Date            : 22/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
   int iCnt = 0;

   if(iNo < 0)
   {
     iNo = -iNo;
   }
   for(iCnt = -iNo; iCnt <= iNo; iCnt++)
   {
      printf("%d",iCnt);
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