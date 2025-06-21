////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program4.c
//  Description :   Program to check 7th 8th 9th  bit is on or off
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
    UINT iMask2 = 128;
    UINT iMask3 = 256;

    UINT iResult1 = 0;
    UINT iResult2 = 0;
    UINT iResult3 = 0;

    iResult1 = iNo & iMask1;
    iResult2 = iNo & iMask2;
    iResult3 = iNo & iMask3;

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
        cout<<"8th Bit is ON\n";
    }
    else
    {
        cout<<"8th Bit is OFF\n";
    }

    if(iResult3 == iMask3)
    {
        cout<<"9th Bit is ON\n";
    }
    else
    {
        cout<<"9th bit is OFF\n";
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