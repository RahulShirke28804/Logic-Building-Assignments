#include<stdio.h>

void Display(int iNo, int iFrequrncy)
{
    int iCnt = 0;
    //write updater
    for (iCnt = 1; iCnt <= iFrequrncy; iCnt++)
    {
        printf(" %d ", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;
    printf("Enter number ");
    scanf("%d", &iValue);

    printf("Enter frequency ");
    scanf("%d", &iCount);

    Display(iValue, iCount);
    return 0;

}