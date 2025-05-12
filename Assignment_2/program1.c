#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    //writer updater
    while (iCnt < iNo)
    {
        printf("*");
        iCnt ++;
    }
    
}

int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;

}