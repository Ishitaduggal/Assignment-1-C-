/* 5. C program to calculate Simple Interest */
#include <stdio.h>
int main()
{
    int p, r, t;
    float si;

    printf("Enter Principle Amount: ");
    scanf("%d", &p);

    printf("Enter Rate of Interest: ");
    scanf("%d", &r);

    printf("Enter Time (Number of years): ");
    scanf("%d", &t);

    si = (p*r*t)/100;

    printf("Your simple interest is Rupees %.1f", si);

    return 0;
}
