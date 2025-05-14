////////////////////////////////////////////////////////////////
//
//  File name :     program2.c
//  Description :   Used to Display factors in decending order
//  Author :        Rahul Ajay Shirke
//  Date :          14-05-2025
//
////////////////////////////////////////////////////////////////


#include<stdio.h>

int FactRev(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        printf("Invalid Input!!");      // Updater
    }

    for (iCnt = (iNo / 2); iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n", iCnt);

        }

    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);


    FactRev(iValue);

    return 0;

}