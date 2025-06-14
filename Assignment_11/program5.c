////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program5.c
//  Description :   Pattern printing
//  Author :        Rahul Ajay Shirke
//  Date :          09-06-2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

// Intput   :   8
// Output   :   2   4   6   8   10   12   14    16 

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    int iCount = 0;
    
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iCount = iCnt * 2;
        
        printf("%d   ", iCount);
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
