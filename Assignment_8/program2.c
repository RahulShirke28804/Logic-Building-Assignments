////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program2.c
//  Description :   program to calculate area of rectangle
//  Author :        Rahul Ajay Shirke
//  Date :          16-05-2025
//
////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    if( fWidth < 0)
    {
        fWidth = -fWidth;
    }

    if (fHeight < 0)
    {
        fHeight = -fHeight;
    }
    

    double dArea = 0.0;

    dArea = fWidth * fHeight;

    return dArea;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;
    
    printf("Enter the Width : ");
    scanf("%f", &fValue1);

    printf("Enter the Height : ");
    scanf("%f", &fValue2);    

    dRet = RectArea(fValue1, fValue2);

    printf("Area of Rectangle is : %.3f", dRet);

    return 0;

}
