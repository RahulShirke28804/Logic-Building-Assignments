////////////////////////////////////////////////////////////////
//
//  File name :     program4.c
//  Description :   program to count frequency of 4 in the number
//  Author :        Rahul Ajay Shirke
//  Date :          16-05-2025
//
////////////////////////////////////////////////////////////////


#include<stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if (iDigit == 4)
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

    iRet = CountFour(iValue);
    printf("The number of 2's in the number is : %d", iRet);

    return 0;

}