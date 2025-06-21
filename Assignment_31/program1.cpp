////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program1.c
//  Description :   Program to turn OFF 7th bit if it is ON
//  Author :        Rahul Ajay Shirke
//  Date :          16-06-2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

// INPUT    :   79
// OUTPUT   :   15

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0X00000001;        
    UINT iResult = 0X00000000;
    
    iMask = iMask << 6;             //7th bit

    iMask = ~iMask;
    iResult = iNo & iMask;

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
