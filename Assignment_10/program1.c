////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program1.c
//  Description :   program which accepts number and return count of even Digits
//  Author :        Rahul Ajay Shirke
//  Date :          16-05-2025
//
////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int CountEven(int iNo)
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

        if ((iDigit % 2) == 0)
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

    iRet = CountEven(iValue);
    printf("The number even Digits are : %d", iRet);

    return 0;

}
