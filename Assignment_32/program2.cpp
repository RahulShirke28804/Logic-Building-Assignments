////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program2.c
//  Description :   Program to turn OFF the given Bit
//  Author :        Rahul Ajay Shirke
//  Date :          16-06-2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

// INPUT    :   10  2
// OUTPUT   :   8

#include<iostream>
using namespace std;

typedef bool BOOL;
typedef unsigned int UINT;

UINT OffBit(UINT iNo, int iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);
    iMask = ~iMask;

    iResult = iNo & iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;
    UINT iLocation = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    cout<<"Enter the location : ";
    cin>> iLocation;

    iRet = OffBit(iValue,iLocation);
    cout<<"The changed number is : "<<iRet<<"\n";

    return 0;
}