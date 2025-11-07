/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    if(iNo % 2 == 0)
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

    printf("Enter number:");
    scanf("%d",&ivalue);
 
    bRet = CheckEven(ivalue);

    if(bRet == true)
    {
        printf("%d is Even Number.\n",ivalue);
    }
    else
    {
        printf("%d is odd Number.\n",ivalue);
    }

      return 0;
}