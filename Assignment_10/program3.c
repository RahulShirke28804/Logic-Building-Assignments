/////////////////////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Description :   program to count digits in between 3 and 7
//  Author :        Rahul Ajay Shirke
//  Date :          16-05-2025
//
/////////////////////////////////////////////////////////////////////


#include<stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if ((iDigit > 3) && (iDigit < 7))
        {
            iCnt = iCnt + 1;
        }
    }
    return iCnt;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number : ");

    scanf("%d", &iValue);

    iRet = CountRange(iValue);
    printf("The number of digits in between 3 and 7 are : %d", iRet);

    return 0;

}