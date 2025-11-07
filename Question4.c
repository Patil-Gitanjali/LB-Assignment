/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
bool Check(int iNo)
 {
    if((iNo % 5)==0)
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

    printf("Enter number");
    scanf("%d",&ivalue);

    bRet = Check(ivalue);   

    if(bRet == true)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }

      return 0;
 }