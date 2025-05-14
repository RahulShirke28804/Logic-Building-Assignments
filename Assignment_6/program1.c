////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program1.c
//  Description :   program which accepts number from user and if number is less than 50
//                  then print small, if greater than 50 and less then 100 then print medium,
//                  if it is greater than 100 then print large
//  Author :        Rahul Ajay Shirke
//  Date :          15-05-2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Number(int iNo)
{
    if (iNo <= 50)
    {
        printf("Small\n");
    }
    else if ((iNo > 50 ) && (iNo <= 100))
    {
        printf("Medium\n");
    }

    else if (iNo > 100)
    {
        printf("Large\n");
    }
    
    
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}
