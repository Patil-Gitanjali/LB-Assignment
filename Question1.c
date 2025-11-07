//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Assignment4
//  Description     : Accept Number  from user and Display Multiplication of its factors
//  Author          : Gitanjali Meghanath Patil
//  Date            : 21/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int MultFact(int iNo)
{
    int i = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(i = 1; i<= iNo/2; i++)
    {
        if(iNo % i == 0)
        {
            iMult = iMult * i;
        }
    }   
       return iMult;
}
int main()
{
    int ivalue = 0;
    int iRet = 0;

    printf("Enter Number");
    scanf("%d",&ivalue);

    iRet = MultFact(ivalue);

    printf("%d\n",iRet);

    return 0;
}