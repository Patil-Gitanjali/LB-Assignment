/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {

        iNo = -iNo;
    }
    while(iCnt < iNo)
    {
        printf("*");
        iCnt++;
    }
}
int main()
{
    int ivalue = 0;

    printf("Enter number");
    scanf("%d",&ivalue);

    Display(ivalue);

    return 0;
}