////////////////////////////////////////////////////////////
//
//  File name :     31.5.c
//  Description :   To demonstrate upper traingle pattern
//  Author :        Gitanjali Patil
//  Date :          22/11/2025
//
////////////////////////////////////////////////////////////

/*
    INPUT:
        Rows = 4
        Columns = 4

    OUTPUT:
            1   2   3   4
                2   3   4
                    3   4
                        4
*/

////////////////////////////////////////////////////////////
//
//  REQUIRED HEADER FILES
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Prints:
//                      'j' if i <= j (upper triangle)
//  Input :         int iRow, int iCol
//  Output :        Void
//
////////////////////////////////////////////////////////////

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    if (iRow <= 0 || iCol <= 0)
    {
        printf("INVALID INPUT\n");
        printf("ROWS AND COLUMNS MUST BE POSITIVE\n");
        return;
    }

    if (iRow != iCol)
    {
        printf("INVALID INPUT\n");
        printf("NUMBER OF ROWS AND COLUMNS SHOULD BE SAME\n");
        return;
    }

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if (i <= j)
            {
                printf("%d\t",j);
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
    }
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION
//
////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of Rows:\n");
    scanf("%d", &iValue1);

    printf("Enter the number of Columns:\n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases
//
////////////////////////////////////////////////////////////
//
//  Input:
//      4 4
//  Output:
//      1       2       3       4
//              2       3       4
//                      3       4
//                              4
//
// ------------------------------------------
//
//  Input:
//      3 3
//  Output:
//      1       2       3
//              2       3
//                      3
//
// ------------------------------------------
//
//  Input:
//      4 5
//  Output:
//      INVALID INPUT
//      NUMBER OF ROWS AND COLUMNS SHOULD BE SAME
//
// ------------------------------------------
//
//
////////////////////////////////////////////////////////////