////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Description :   Pattern printing
//  Author :        Rahul Ajay Shirke
//  Date :          09-06-2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

// Intput   :   5
// Output   :   5   #   4   #   3   #   2   #   1   #

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    
    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d   #   ", iCnt);

    } 
}
int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}

