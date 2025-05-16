////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program2.c
//  Description :   program which accepts number and return count of odd Digits
//  Author :        Rahul Ajay Shirke
//  Date :          16-05-2025
//
////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int CountOdd(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    

    int iDigit = 0;
    int iCnt = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if ((iDigit % 2) != 0)
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

    iRet = CountOdd(iValue);
    printf("The number Odd Digits are : %d", iRet);

    return 0;

}