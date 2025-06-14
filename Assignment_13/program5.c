////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program5.c
//  Description :   Pattern printing
//  Author :        Rahul Ajay Shirke
//  Date :          09-06-2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

/*Intput    :   Row = 3    col = 4

Output      :   1   2   3   4
                5   6   7   8
                9   10  11  12
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iNum = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {   if (iNum <= 9)
            {
                printf("%d   ", iNum);
                iNum++;
            }
            else if (iNum > 9)
            {
                printf("%d  ", iNum);
                iNum++;
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
