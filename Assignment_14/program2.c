////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program2.c
//  Description :   Pattern printing
//  Author :        Rahul Ajay Shirke
//  Date :          09-06-2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

/*Intput    :   Row = 4    col = 5

Output      :   2   4   6   8   10
                1   3   5   7   9
                2   4   6   8   10
                1   3   5   7   9
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for(i = 1; i <= iRow; i++)
    {
        int iOddRow = 2;
        int iEvenRow = 1;
        
        for(j = 1; j <= iCol; j++)
        {
            if((i % 2) != 0)
            {   
                printf("%d   ", iOddRow);
                iOddRow += 2;
            }
            else
            {
                printf("%d   ", iEvenRow);
                iEvenRow += 2;
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

