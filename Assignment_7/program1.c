////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program1.c
//  Description :   program which accepts number from user and display number of * and #
//  Author :        Rahul Ajay Shirke
//  Date :          15-05-2025
//
////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Display(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo * 2; iCnt++)
    {
        if (iCnt <= iNo)
        {
            printf(" * ");
        }
        else if (iCnt >= iNo)
        {
            printf(" # ");
        }
        
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;

}
