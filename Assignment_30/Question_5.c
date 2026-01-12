/////////////////////////////////////////////////////////////////////////////////////
//
//  File name   :   Assignment30_5.c
//  Description :   Accept number of Rows and Number of Columns
//                  from user and Display below pattern 
//  Input       :   iRow=4
//                  iCol=4      
//  Output      :   1   2   3   4
//                  1   *   *   4
//                  1   *   *   4
//                  1   2   3   4
//  Author      :   Gitanjali Patil
//  Date        :   23/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i=0;
    int j=0;
    
    

    for(i=1;i<=iRow;i++)
    {  
        
        for(j=1;j<=iCol;j++)
        {
            if((i==1)||(i==iRow)||(j==1)||(j==iCol))
            {
                printf("%d\t",j);
            }
                
            else
            {
                printf("*\t");
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