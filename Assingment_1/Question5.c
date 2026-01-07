/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////
#include<stdio.h>
void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        printf("*");
    }
}
int main()
{
    int ivalue = 0;
    ivalue = 5;

    Accept(ivalue);

    return 0;
}