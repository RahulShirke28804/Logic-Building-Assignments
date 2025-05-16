/////////////////////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Description :   program to convert kilometer to meter
//  Author :        Rahul Ajay Shirke
//  Date :          16-05-2025
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

int KmtoMeter(int iNo)
{

    if( iNo < 0)
    {
        iNo = -iNo;
    }

    int iKm = 0;

    iKm = 1000 * iNo;

    return iKm;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter length in kilometer : ");
    scanf("%d", &iValue);

    iRet = KmtoMeter(iValue);

    printf("Length in meter is : %d", iRet);

    return 0;

}