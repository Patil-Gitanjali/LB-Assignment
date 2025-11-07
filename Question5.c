//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Assignment3
//  Description     : Accept one character from user and Display if its Vowel or Display if it is not a Vowel
//  Author          : Gitanjali Meghanath Patil
//  Date            : 21/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Checkvowel(char cCheck)
{
    if(cCheck== 'a'|| cCheck=='e' || cCheck=='i' || cCheck== 'o' || cCheck== 'u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cvalue = '\0';
    BOOL bRet = FALSE;

    printf("Enter a Character\n");
    scanf("%c",&cvalue);
    
    bRet = Checkvowel(cvalue);

    if(bRet == TRUE)
    {
        printf("%c is vowel\n", cvalue);
    }
    else
    {
        printf("%c is Not vowel\n",cvalue);
    }

      return 0;
}