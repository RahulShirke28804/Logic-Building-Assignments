////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Description :   Pattern printing
//  Author :        Rahul Ajay Shirke
//  Date :          09-06-2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

/*Intput    :   Row = 5    col = 5

Output      :   a   b   c   d   e
                1   2   3   4   5
                a   b   c   d   e
                1   2   3   4   5
                a   b   c   d   e
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    

    for(i = 1; i <= iRow; i++)
    {        
        char ch = 'a';

        for(j = 1; j <= iCol; j++)
        {
            if ((i % 2) == 0)
            {
                printf("%d   ", j);
            }
            else
            {
                printf("%c   ", ch);
                ch++;
                
            }
        }

        printf("\n"); 
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

