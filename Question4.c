
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Assignment3
//  Description     : Accept one character from user and convert its case
//  Author          : Gitanjali Meghanath Patil
//  Date            : 21/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int DisplayConvert(char cvalue)
{
    if(cvalue >= 'A' && cvalue <= 'z')
    {
        printf("%c\n",cvalue + 32);
    }
    else
    {
        printf("%c\n",cvalue - 32);
    }
}
int main()
{
    char cvalue = '\0';

    printf("Enter Character\n");
    scanf("%c",&cvalue);

    DisplayConvert(cvalue);

    return 0;
}