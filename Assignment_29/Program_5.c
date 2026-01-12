/////////////////////////////////////////////////////////////////////////////////////
//
//  File name   :   Assignment29_5.c
//  Description :   Accept number of Rows and Number of Columns
//                  from user and Display below pattern 
//  Input       :   iRow=5
//                  iCol=5       
//  Output      :     1   2   3   4
//                    2   3   4   5
//                    3   4   5   6
//                    4   5   6   7
//  Author      :   Gitanjali Patil
//  Date        :   23/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i=0;
    int j=0;
    int iCnt=0;
    

    for(i=1;i<=iRow;i++)
    {  
        iCnt=i;
        for(j=1;j<=iCol;j++)
        {
            printf("%d\t",iCnt);
            iCnt++;
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