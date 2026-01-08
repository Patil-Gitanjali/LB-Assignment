//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Assignment6
//  Description     : Accept Total mark & Obtained marks from user and Calculate percentage
//  Author          : Gitanjali Meghanath Patil
//  Date            : 22/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

float percentage(int obtainedMarks, int totalMarks)
{
     return((float)obtainedMarks/totalMarks)*100;
}
int main()
{
    int ivalue1 = 0, ivalue2 = 0;
    float fRet = 0.0;

    printf("please enter total marks");
    scanf("%d",&ivalue1);

    printf("please enter obtained marks");
    scanf("%d",&ivalue2);

    fRet = percentage(ivalue2,ivalue1);
    printf("percentage = %f",fRet);

    return 0;
}