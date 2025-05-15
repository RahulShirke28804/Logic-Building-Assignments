/////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program5.c
//  Description :   Used to Display difference between Even and odd Factorial
//  Author :        Rahul Ajay Shirke
//  Date :          15-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int OddFactorial(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }


    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;
    int iDiff = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iCnt % 2) == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }

    iDiff = iEvenFact - iOddFact;
    return iDiff;
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