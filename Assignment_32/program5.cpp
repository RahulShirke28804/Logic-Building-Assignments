////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program5.c
//  Description :   Program to turn Toggle the first and last nibble of the number
//  Author :        Rahul Ajay Shirke
//  Date :          16-06-2025
//
////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(int iNo)
{
    UINT iMask = 0X0000000F;
    UINT iResult = 0;

    iResult = iNo ^ iMask;

    iMask = iMask << 28;

    iResult = iResult ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    iRet = ToggleBit(iValue);

    cout<<"The changed number is : "<<iRet<<"\n";

    return 0;
}