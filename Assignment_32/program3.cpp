////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Description :   Program to turn ON the given Bit
//  Author :        Rahul Ajay Shirke
//  Date :          16-06-2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

// INPUT    :   10  3
// OUTPUT   :   14

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OnBit(int iNo , int iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);
    iResult = iNo | iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;
    UINT iLocation = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    cout<<"Enter the location : ";
    cin>>iLocation;

    iRet = OnBit(iValue, iLocation);

    cout<<"The changed number is : "<<iRet<<"\n";

    return 0;
}