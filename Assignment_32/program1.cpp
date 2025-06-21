////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program1.c
//  Description :   Program to check weather the given bit is ON or OFF
//  Author :        Rahul Ajay Shirke
//  Date :          16-06-2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

// INPUT    :   10  2
// OUTPUT   :   TRUE

#include<iostream>
using namespace std;

#define TRUE 1;
#define FALSE 0;

typedef bool BOOL;
typedef unsigned int UINT;

BOOL ChkBit(UINT iNo, int iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);
    iResult = iNo & iMask;

    return (iResult == iMask);

}

int main()
{
    UINT iValue = 0, iRet = 0;
    int iLocation = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    cout<<"\nEnter the location : ";
    cin>>iLocation;

    iRet = ChkBit(iValue, iLocation);

    if (iRet == 1)
    {
        cout<<iLocation<<"th Bit is ON\n";
    }
    else
    {
        cout<<iLocation<<"th Bit is OFF\n";
    }

    return 0;
}
