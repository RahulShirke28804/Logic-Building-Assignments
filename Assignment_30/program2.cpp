////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program2.c
//  Description :   Program to check 5th 18th bit is on or off
//  Author :        Rahul Ajay Shirke
//  Date :          16-06-2025
//
////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

typedef unsigned int UINT;

void ChkBit(UINT iNo)
{
    UINT iMask1 = 16;
    UINT iMask2 = 131072;
    UINT iResult1 = 0;
    UINT iResult2 = 0;

    iResult1 = iNo & iMask1;
    iResult2 = iNo & iMask2;

    if(iResult1 == iMask1)
    {
        cout<<"5th Bit is ON\n";
    }
    else
    {
        cout<<"5th bit is OFF\n";
    }
    if (iResult2 == iMask2)
    {
        cout<<"18th Bit is ON\n";
    }
    else
    {
        cout<<"18th Bit is OFF\n";
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