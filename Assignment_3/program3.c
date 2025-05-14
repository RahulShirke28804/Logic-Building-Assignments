#include<stdio.h>
void PrintEven(int iNo)
{
    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;

    for (iCnt = 1; iCnt <= (iNo/2); iCnt ++)
    {
        if(((iNo % iCnt) == 0) && ((iCnt % 2) == 0))
        {
            printf("%d is a Even Factor\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the number : ");
    scanf("%d",&iValue);
    PrintEven(iValue);
    return 0;
}