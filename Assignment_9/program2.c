////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program2.c
//  Description :   program to check whether it entered number contains 0 or not
//  Author :        Rahul Ajay Shirke
//  Date :          16-05-2025
//
////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if (iDigit == 0)
        {
            break;
        }

    }
    if (iNo == 0)
    {
        return FALSE;
    }
    else if (iNo != 0)
    {
        return TRUE;
    }
    
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    bRet= ChkZero(iValue);

    if (bRet == TRUE)
    {
        printf("It contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }

    return 0;

}