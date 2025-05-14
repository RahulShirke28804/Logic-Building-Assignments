////////////////////////////////////////////////////////////////
//
//  File name :     program1.c
//  Description :   Used to Display number of $ and * on screen
//  Author :        Rahul Ajay Shirke
//  Date :          14-05-2025
//
////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf(" $ * \n");

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
