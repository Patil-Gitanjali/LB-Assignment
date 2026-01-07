/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////
#include<stdio.h>
int Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}
int main()
{
    int ivalue = 0;

    printf("Enter the number :");
    scanf("%d",&ivalue);

    Display(ivalue);

    return 0;
}