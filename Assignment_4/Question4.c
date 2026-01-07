//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Assignment4
//  Description     : Accept Number  from user and return summation of all its nonFactors
//  Author          : Gitanjali Meghanath Patil
//  Date            : 21/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int SumNonFact(int iNo)
{
   int i = 0;
   int iSum = 0;

   if(iNo < 0)
   {
       iNo = -iNo;
   }
   for(i = 1; i < iNo; i++)
   {
        if(iNo % i != 0)
        {
           iSum = iSum + i;
        }
   }   
    return iSum;
}
int main()
{
    int ivalue = 0;
    int iRet = 0;

    printf("Enter number:");
    scanf("%d",&ivalue);

    iRet = SumNonFact(ivalue);

    printf("%d",iRet);

    return 0;
}