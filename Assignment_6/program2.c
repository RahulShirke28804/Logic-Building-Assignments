////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program2.c
//  Description :   Used to Accept  single digit from user and display into word
//  Author :        Rahul Ajay Shirke
//  Date :          15-05-2025
//
////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

void Display(int iNo)
{
    if (iNo == 0)
    {
        printf("Zero\n");
    }

    else if (iNo == 1)
    {
        printf("One\n");
    }

    else if (iNo == 2)
    {
        printf("Two\n");
    }

    else if (iNo == 3)
    {
        printf("Three\n");
    }

    else if (iNo == 4)
    {
        printf("Four\n");
    }

    else if (iNo == 5)
    {
        printf("Five\n");
    }

    else if (iNo == 6)
    {
        printf("Six\n");
    }

    else if (iNo == 7)
    {
        printf("Seven\n");
    }

    else if (iNo == 8)
    {
        printf("Eight\n");
    }
    
    else if (iNo == 9)
    {
        printf("Nine\n");
    }
    else
        printf("Invalid input!");
}

int main()
{
    int iValue;

    printf("Enter a single digit (0-9): ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
