//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Assignment6
//  Description     : Accept Three numbers from user and print its Multiplication
//  Author          : Gitanjali Meghanath Patil
//  Date            : 22/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int multiplay(int iNo1 , int iNo2 , int iNo3)
{
    int iResult = 0;
    iResult = iNo1 * iNo2 * iNo3;
    return iResult;
}
int main()
{
    int ivalue1 = 0, ivalue2 = 0, ivalue3 = 0, iRet = 0;
    printf("please enter three numbers");
    scanf("%d %d %d",&ivalue1,&ivalue2,&ivalue3);
    iRet = multiplay(ivalue1 , ivalue2 , ivalue3);
    printf("%d\n",iRet);
    return 0; 
}