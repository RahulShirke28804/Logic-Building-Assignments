////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program1.c
//  Description :   Pattern printing
//  Author :        Rahul Ajay Shirke
//  Date :          09-06-2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

/*Intput    :   Row = 4    col = 4

Output      :   A   B   C   D
                A   B   C   D
                A   B   C   D
                A   B   C   D
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for(i = 1; i <= iRow; i++)
    {
        char ch = 'A';
        
        for(j = 1; j <= iCol; j++)
        {
            printf("%c   ", ch);
            ch++;
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
