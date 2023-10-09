/*  C program to Calculate the Sum of Natural Numbers Using the While Loop */
#include<stdio.h>
int main()
{
    int n, s=0, i=1;

    printf("Enter limit: ");
    scanf("%d", &n);

    while(i<=n)
    {
        s = s+i;
        i++;
    }
    printf("The sum of %d", n);
    printf("natural numbers is: %d", s);

    return 0;
}
