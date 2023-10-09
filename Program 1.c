/* 1. C Program to Find Area and Circumference of Circle */
#include <stdio.h>
int main()
{
    int r;
    float ar, circ;

    printf("Enter radius: ");
    scanf("%d",&r);

/* Area: */
    ar = 3.14*r*r;
    printf("Area: ");
    printf("%.3f\n", ar);

/* Circumference */
    circ = 2*3.14*r;
    printf("Circumference: ");
    printf("%.3f", circ);

    return 0;
}
