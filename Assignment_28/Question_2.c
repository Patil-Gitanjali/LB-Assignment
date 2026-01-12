/////////////////////////////////////////////////////////////////////////////////////
//
//  File name   :   Assignment28_2.c
//  Description :   Accept number of Rows and Number of Columns
//                  from user and Display below pattern 
//  Input       :   iRow=4
//                  iCol=4       
//  Output      :   A  B  C  D
//                  a  b  c  d
//                  A  B  C  D
//                  a  b  c  d
//  Author      :   Gitanjali Patil
//  Date        :   21/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i=0;
    int j=0;
    char ch1='\0';
    char ch2='\0';

    for(i=1;i<=iRow;i++)
    {
        ch1='A';
        ch2='a';
        for(j=1;j<=iCol;j++)
        {
            if((i%2)==0)
            {
                printf("%c\t",ch2);
                ch2++;
            }
            else
            {
               printf("%c\t",ch1);
                ch1++; 
            }
        }
        printf("\n");
    }
        
    printf("\n");
}
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter number of rows and columns: ");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}