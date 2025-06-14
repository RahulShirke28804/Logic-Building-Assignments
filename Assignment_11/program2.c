////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program2.c
//  Description :   Pattern printing
//  Author :        Rahul Ajay Shirke
//  Date :          09-06-2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

// Intput   :   5
// Output   :   1   *   2   *   3   *   4   *   5   *


#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d   *   ", iCnt);

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

