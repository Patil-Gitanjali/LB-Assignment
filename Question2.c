//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Assignment4
//  Description     : Accept Number  from user and Display its factors in reverse / Decreasing  order
//  Author          : Gitanjali Meghanath Patil
//  Date            : 21/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void FactRev(int iNo)
{
    int i = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(i = iNo/2; i >= 1; i--)
    {
        if(iNo % i == 0
        {
            printf("%d\t", i);
        }
    }
}
int main()
{
    int ivalue = 0;

    printf("Enter number");
    scanf("%d",&ivalue);

    FactRev(ivalue);

    return 0;
}