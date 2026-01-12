/////////////////////////////////////////////////////////////////////////////////////
//
//  File name   :   program26/2.c
//  Description :   Accept number from user and Display below pattern 
//  Input       :   5          
//  Output      :   5 # 4 # 3 # 2 # 1 # 
//  Author      :   Gitanjali Patil
//  Date        :   21/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void pattern(int iNo)
{
     int iCnt=0;

    for(iCnt = iNo ;iCnt>= 1; iCnt--)
    {
        printf("%d\t#\t",iCnt);
       
    }
}
int main()

{
    int iValue=0;
    
    printf("Enter the number of Elements:");
    scanf("%d",&iValue);
    pattern(iValue);
    return 0;

}