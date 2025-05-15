////////////////////////////////////////////////////////////////
//
//  File name :     program4.c
//  Description :   Used to find odd factorial of given number
//  Author :        Rahul Ajay Shirke
//  Date :          15-05-2025
//
////////////////////////////////////////////////////////////////



#include<stdio.h>

int OddFactorial(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }


    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iCnt % 2) != 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);
    printf("Even Factorial : %d", iRet);

    return 0;
}