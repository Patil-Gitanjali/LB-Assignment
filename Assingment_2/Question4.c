#include<stdio.h>

int Display(int iNo, int iFrequency)
{
    int i = 0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    if(iFrequency<0)
    {
       iFrequency=-iFrequency;
    }
    for(i=0;i<iFrequency;i++)
    {
        printf("%d",iNo);
    }
}
int main()
{
    int ivalue = 0;
    int iCount = 0;

    printf("Enter number:");
    scanf("%d",&ivalue);

    printf("Enter Frequency:\n");
    scanf("%d",&iCount);

    Display(ivalue,iCount);

    return 0;

}