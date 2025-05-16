////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program1.c
//  Description :   program which calculates the area of circle
//  Author :        Rahul Ajay Shirke
//  Date :          16-05-2025
//
////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

double CircleArea(float fRadius)
{

    if( fRadius < 0)
    {
        fRadius = -fRadius;
    }

    double dArea = 0.0;

    dArea = 3.14 * (fRadius * fRadius);

    return dArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;
    
    printf("Enter the Radius : ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is : %.4f", dRet);

    return 0;

}
