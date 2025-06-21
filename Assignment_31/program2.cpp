////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program2.c
//  Description :   Program to turn OFF 7th and 10th bit if it is ON
//  Author :        Rahul Ajay Shirke
//  Date :          16-06-2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

// INPUT    :   577
// OUTPUT   :   1

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask1 = 0X00000001;
    UINT iMask2 = 0X00000001;
    UINT iResult = 0;

    iMask1 = iMask1 << 6;           // 7th Bit
    iMask2 = iMask2 << 9;           // 10th Bit

    iMask1 = ~iMask1;
    iMask2 = ~iMask2;

    iResult = iNo & iMask1;
    iResult = iResult & iMask2;

    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    iRet = OffBit(iValue);

    cout<<"The changed number is : "<<iRet<<"\n";

    return 0;
}