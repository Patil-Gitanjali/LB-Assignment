/////////////////////////////////////////////////////////////////////////////////////
//
//  File name   :   program27/4.c
//  Description :   Accept number of Rows and Number of Columns
//                  from user and Display below pattern 
//  Input       :   iRow=3
//                  iCol=4       
//  Output      :   *  #  *  #
//                  *  #  *  #
//                  *  #  *  #
//  Author      :   Gitanjali Patil
//  Date        :   21/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////
void Display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iNo=0;

    for(i=1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(j%2 !=0)
            {
                printf("*\t",iCol);
            }
            else
            {
                printf("#\t",iCol);
             
            }
        }
        printf("\n");
    }
}


int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of Rows :\n");
    scanf("%d", &iValue1);

    printf("Enter the number of Columns :\n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}