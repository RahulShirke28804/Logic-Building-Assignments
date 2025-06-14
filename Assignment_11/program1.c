////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program1.c
//  Description :   Pattern printing
//  Author :        Rahul Ajay Shirke
//  Date :          09-06-2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

// Intput   :   5
// Output   :   A   B   C   D   E


#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char ch = 'A'; 
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf(" %c ", ch);
        ch++;
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
