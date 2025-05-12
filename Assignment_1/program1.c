////////////////////////////////////////////////////////
//
//  File name :     Assignment1.1.c
//  Description :   Used to Divide two numbers
//  Author :        Rahul Ajay Shirke
//  Date :          10-05-2025
//
////////////////////////////////////////////////////////

#include<stdio.h>

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;
    if (iNo2 == 0)
    {
        return -1;
    }

    iAns = iNo1 / iNo2;
    return iAns;
}

int main()
{
    int iValue1 = 15 ,iValue2 = 5;
    int iRet = 0;
    iRet = Divide(iValue1, iValue2);

    printf("Division is %d", iRet);
    return 0;
}