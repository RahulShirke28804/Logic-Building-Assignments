/////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program5.c
//  Description :   Used to Display Table of user accepted number in reverse order
//  Author :        Rahul Ajay Shirke
//  Date :          15-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Table(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iCnt = 0;
    int iAns = 1;

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        iAns = iNo * iCnt;
        printf("%d\n", iAns);
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}
