/////////////////////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Description :   Used to find the factorial
//  Author :        Rahul Ajay Shirke
//  Date :          15-05-2025
//
/////////////////////////////////////////////////////////////////////


#include<stdio.h>

int Fact(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iAns = 1; 

    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {   
        iAns = iAns * iCnt;

    } 
    
    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet = Fact(iValue);
    printf("Factorial is : %d", iRet);

    return 0;
}