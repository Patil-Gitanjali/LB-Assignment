//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Assignment6
//  Description     : Accept no from user and check that no is greater than 100 or not 
//  Author          : Gitanjali Meghanath Patil
//  Date            : 21/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

bool ChkGreater(int iNo)
{
    if(iNo > 100)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int ivalue = 0;
    bool bRet = false;
    printf("Please enter number");
    scanf("%d",&ivalue);

    bRet = ChkGreater(ivalue);

    if(bRet==true)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }
       return 0;
}