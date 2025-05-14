////////////////////////////////////////////////////////////////
//
//  File name :     program5.c
//  Description :   Used to Display Difference between 
//                  summation of all factors and non-factors
//  Author :        Rahul Ajay Shirke
//  Date :          14-05-2025
//
////////////////////////////////////////////////////////////////


#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;
    int iDiff = 0;

    if (iNo < 0)
    {
        printf("Invalid Input!!");
        return 0;   
    }

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }

    }
    iDiff = iSumFact - iSumNonFact;
    
    return iDiff;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("The difference between all factors and non-factors is : %d", iRet);

    return 0;

}