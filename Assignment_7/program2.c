////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program2.c
//  Description :   Used to conver dollar to rupees
//  Author :        Rahul Ajay Shirke
//  Date :          15-05-2025
//
////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int DollarToINR(int iNo)
{
    int iRupee = 0;
    iRupee = iNo * 70;

    return iRupee;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Dollar : ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);
    
    printf("Rupees : %d", iRet);

    return 0;
}

