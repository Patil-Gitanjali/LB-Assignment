
///////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Assignment3
//  Description     : Accept the number from user and print factors of that number
//  Author          : Gitanjali Meghanath Patil
//  Date            : 21/10/2025
//
////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i = 1; i <= iNo; i++)
    {
        if(iNo % i == 0)
        {
            printf("%d\t",i);
        }
    }
}
int main()
{
    int ivalue = 0;

    printf("Enter Number:\n");
    scanf("%d",&ivalue);

    DisplayFactor(ivalue);

    return 0;
}