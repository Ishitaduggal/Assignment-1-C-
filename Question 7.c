/* 7. C program to convert temperature  from Celsius to Fahrenheit */
#include <stdio.h>
int main()
{
    float C, F;

    printf("Enter temperature in Degree Celcius: ");
    scanf("%f", &C );

    F = C*(9/5) + 32;
    printf("The temperature in Degree Fahrenheit is: %.1f", F);

    return 0;
}
