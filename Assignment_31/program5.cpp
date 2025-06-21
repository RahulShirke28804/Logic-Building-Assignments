////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program5.c
//  Description :   Program to turn ON first 4 bits of the number
//  Author :        Rahul Ajay Shirke
//  Date :          16-06-2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

// INPUT    :   73
// OUTPUT   :   79

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OnBit(int iNo)
{
    UINT iMask = 0x00000001;
    UINT iResult = 0;

    iResult = iNo | iMask;
    iMask = iMask << 1;

    iResult = iResult | iMask;
    iMask = iMask << 1;

    iResult = iResult | iMask;
    iMask = iMask << 1;

    iResult = iResult | iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iRet =0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    iRet = OnBit(iValue);
    cout<<"The changed number is : "<<iRet<<"\n";

    return 0;
}