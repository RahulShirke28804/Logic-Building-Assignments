/////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program5.c
//  Description :   program to convert square feet to square meter
//  Author :        Rahul Ajay Shirke
//  Date :          16-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

double SquareMeter(int iNo)
{

    if( iNo < 0)
    {
        iNo = -iNo;
    }

    double dSqMeter = 0.0;

    dSqMeter = 0.0929 * iNo;

    return dSqMeter;
}

int main()
{
    int iValue = 0;
    double iRet = 0.0;
    
    printf("Enter area in square feet : ");
    scanf("%d", &iValue);

    iRet = SquareMeter(iValue);

    printf("Area in square meters is: %.6f", iRet);

    return 0;

}