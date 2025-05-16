////////////////////////////////////////////////////////////////
//
//  File name :     program4.c
//  Description :   program to convert Fahrenheit to celsius
//  Author :        Rahul Ajay Shirke
//  Date :          16-05-2025
//
////////////////////////////////////////////////////////////////


#include<stdio.h>

double FhtoCs(float fTemp)
{

    double dCelsius = 0.0;

    dCelsius =  (fTemp - 32) * (5.0 / 9.0);

    return dCelsius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;
    
    printf("Enter the temperature in fahrenheit : ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is : %f", dRet);

    return 0;

}
