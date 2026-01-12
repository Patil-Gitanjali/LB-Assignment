/////////////////////////////////////////////////////////////////////////////////////
//
//  File name   :   Assignment30_3.c
//  Description :   Accept number of Rows and Number of Columns
//                  from user and Display below pattern 
//  Input       :   iRow=5
//                  iCol=5       
//  Output      :   $   *   *   *   *
//                  *   $   *   *   *
//                  *   *   $   *   *
//                  *   *   *   $   *
//                  *   *   *   *   $ 
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
            if(i==j)
            {
                printf("$\t");
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