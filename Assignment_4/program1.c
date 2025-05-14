////////////////////////////////////////////////////////////////
//
//  File name :     program1.c
//  Description :   Used to Display multiplication of factors
//  Author :        Rahul Ajay Shirke
//  Date :          14-05-2025
//
////////////////////////////////////////////////////////////////


#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    if (iNo < 0)
    {
        printf("Invalid Input!!");    
    }

    for (iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMult = iMult * iCnt;
        }

    }
    return iMult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);


    iRet = MultFact(iValue);

    printf("The multiplication of all factors are : %d", iRet);

    return 0;

}
