//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Assignment6
//  Description     : Accept two numbers from user and check whether that numbers are equal to each other or not 
//  Author          : Gitanjali Meghanath Patil
//  Date            : 21/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

bool ChkEqual(int iNo1 ,int iNo2)
{
    if(iNo1 == iNo2)
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
    int ivalue1 = 0, ivalue2 = 0;
    bool bRet = false;

    printf("please enter two numbers:");
    scanf("%d%d",&ivalue1,&ivalue2);

    bRet = ChkEqual(ivalue1,ivalue2);

    if(bRet == true)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }
      return 0;
}