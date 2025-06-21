////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program5.c
//  Description :   Program to check first and last bit is on or off
//  Author :        Rahul Ajay Shirke
//  Date :          16-06-2025
//
////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

typedef unsigned int UINT;

void ChkBit(UINT iNo)
{
    UINT iMask1 = 0x00000001;
    UINT iMask2 = 0x80000000;

    UINT iResult1 = 0;
    UINT iResult2 = 0;

    iResult1 = iNo & iMask1;
    iResult2 = iNo & iMask2;

    if(iResult1 == iMask1)
    {
        cout<<"1st Bit is ON\n";
    }
    else
    {
        cout<<"1st Bit is OFF\n";
    }

    if (iResult2 == iMask2)
    {
        cout<<"32nd Bit is ON\n";
    }
    else
    {
        cout<<"32nd Bit is OFF\n";
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