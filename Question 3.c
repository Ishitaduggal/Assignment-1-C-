/* 3. C Program to Find Area of Triangle Given Base and Height */
#include <stdio.h>
int main()
{
    int b, h;
    float ar;

    printf("Enter length of base: ");
    scanf("%d", &b);
    printf("Enter height of triangle: ");
    scanf("%d", &h);

    ar = 0.5*b*h;
    printf("The are of the given triangle is: %.3f", ar);
    printf(" units.");

    return 0;
}
