//////////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Assignment3
//  Description     : Accept the number from user and print even numbers of that number
//  Author          : Gitanjali Meghanath Patil
//  Date            : 21/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
      int iCnt = 0;
      int iNum = 2;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iNum);
        iNum = iNum + 2;
    }
}
int main()
{
    int ivalue = 0;

    printf("Enter number\n");
    scanf("%d",&ivalue);

    PrintEven(ivalue);

    return 0;
}