////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program5.c
//  Description :   program to calculate difference between sum of even and odd digits
//  Author :        Rahul Ajay Shirke
//  Date :          16-05-2025
//
////////////////////////////////////////////////////////////////////////////////////////



#include<stdio.h>

int CountDiff(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    

    int iDigit = 0;
    int iEvenCnt = 0;
    int iOddCnt = 0;
    int iDiff = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if ((iDigit % 2) == 0)
        {
            iEvenCnt = iEvenCnt + iDigit;
        }
        else
        {
            iOddCnt = iOddCnt + iDigit;
        }
    }
    iDiff = iEvenCnt - iOddCnt;
    return iDiff;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number : ");

    scanf("%d", &iValue);

    iRet = CountDiff(iValue);
    printf("The difference between sum of even and sum of odd digit is : %d", iRet);

    return 0;

}