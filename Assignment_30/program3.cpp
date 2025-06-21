////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Description :   Program to check 7th 15th 21st 28th  bit is on or off
//  Author :        Rahul Ajay Shirke
//  Date :          16-06-2025
//
////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

typedef unsigned int UINT;

void ChkBit(UINT iNo)
{
    UINT iMask1 = 64;
    UINT iMask2 = 16384;
    UINT iMask3 = 1048576;
    UINT iMask4 = 134217728;

    UINT iResult1 = 0;
    UINT iResult2 = 0;
    UINT iResult3 = 0;
    UINT iResult4 = 0;

    iResult1 = iNo & iMask1;
    iResult2 = iNo & iMask2;
    iResult3 = iNo & iMask3;
    iResult4 = iNo & iMask4;

    if(iResult1 == iMask1)
    {
        cout<<"7th Bit is ON\n";
    }
    else
    {
        cout<<"7th bit is OFF\n";
    }

    if (iResult2 == iMask2)
    {
        cout<<"15th Bit is ON\n";
    }
    else
    {
        cout<<"15th Bit is OFF\n";
    }

    if(iResult3 == iMask3)
    {
        cout<<"21st Bit is ON\n";
    }
    else
    {
        cout<<"21st bit is OFF\n";
    }
    if (iResult4 == iMask4)
    {
        cout<<"28th Bit is ON\n";
    }
    else
    {
        cout<<"28th Bit is OFF\n";
    }

}

int main()
{
    UINT iValue = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    ChkBit(iValue);
    return 0;
}