/////////////////////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Description :   Used to Display number line of the given number
//  Author :        Rahul Ajay Shirke
//  Date :          14-05-2025
//
/////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for (iCnt = (-iNo); iCnt <=iNo; iCnt++)
    {
        printf(" %d ", iCnt);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    Display(iValue);
    

    return 0;
}