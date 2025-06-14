////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Description :   Pattern printing
//  Author :        Rahul Ajay Shirke
//  Date :          09-06-2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

/*Intput    :   Row = 3    col = 5

Output      :   A   A   A   A   A
                B   B   B   B   B
                C   C   C   C   C
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char ch = 'A';

    for(i = 1; i <= iRow; i++)
    {        
        for(j = 1; j <= iCol; j++)
        {
            printf("%c   ", ch);
        }

        printf("\n");
        ch++;   
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of rows : ");
    scanf("%d", &iValue1);

    printf("Enter the number of columns : ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}

