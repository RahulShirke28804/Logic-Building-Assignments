////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program4.c
//  Description :   Program to toggle 7th and 10th bit of the number
//  Author :        Rahul Ajay Shirke
//  Date :          16-06-2025
//
////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask1 = 0X00000001;
    UINT iMask2 = 0X00000001;
    UINT iResult = 0;

    iMask1 = iMask1 << 6;
    iMask2 = iMask2 << 9;
    
    iResult = iNo ^ iMask1;
    iResult = iResult ^ iMask2;

    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    iRet = ToggleBit(iValue);

    cout<<"Changed number is : "<<iRet<<"\n";

    return 0;
}