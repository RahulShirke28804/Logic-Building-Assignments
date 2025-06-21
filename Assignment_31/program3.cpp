////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Description :   Program to toggle 7th bit of the number
//  Author :        Rahul Ajay Shirke
//  Date :          16-06-2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

// INPUT    :   137
// OUTPUT   :   201

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask << 6;         // 7th Bit
    
    iResult = iNo ^ iMask;

    return iResult;

}

int main()
{
    UINT iValue = 0, iRet = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    iRet = ToggleBit(iValue);

    cout<<"Changed number is : "<<iRet<<"\n";

    return 0;
}