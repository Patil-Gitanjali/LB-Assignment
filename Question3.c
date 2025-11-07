//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Assignment4
//  Description     : Accept Number  from user and Display its Nonfactors 
//  Author          : Gitanjali Meghanath Patil
//  Date            : 21/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int NonFact(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(i = 1; i < iNo; i++)
    {
        if(iNo % i != 0)
        {
            printf("%d\t", i);
        }
    }
}
int main()
{
    int ivalue = 0;

    printf("Enter Number");
    scanf("%d",&ivalue);

    NonFact(ivalue);

    return 0;
}