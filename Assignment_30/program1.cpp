////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program1.c
//  Description :   Program to check 15th bit is on or off
//  Author :        Rahul Ajay Shirke
//  Date :          16-06-2025
//
////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

typedef bool BOOL;
typedef unsigned int UINT;

#define true 1;
#define false 0;

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 16384;
    UINT iResult = 0;

    iResult = iNo & iMask;

    return (iResult == iMask);
    
}

int main()
{
    UINT iValue = 0;
    BOOL bRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    bRet = ChkBit(iValue);

    if (bRet == 1)
    {
        cout<<"15th Bit is ON!!\n";
    }
    else
    {
        cout<<"15th Bit is OFF!!\n";
    }

    return 0;
}
