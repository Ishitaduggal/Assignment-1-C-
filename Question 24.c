/* Program of Armstrong Number in C Using For Loop & While Loop */
#include <stdio.h>
int main()
{
/* Armstrong number using while loop: */
    int n, n1, r, a=0, i, m;

    printf("Enter your number: ");
    scanf("%d", &n);

    n1 = n;

    while (n>0)
    {
        r = n%10;
        a = a + r*r*r;
        n = n/10;
    }
    printf("New number: %d\n", a);

    if (a==n1)
    {
        printf("The given number is an Armstrong number.\n");
    }
    else
    {
        printf("The given number is not an Armstrong number.\n");
    }

/* reversing a number using for loop: */
    printf("Enter your number: ");
    scanf("%d", &n);

    n1=n;
     for (i=n; r=n%10; n=n/10)
     {
         m = m + r*r*r;
     }

     printf("The calculated number is: %d\n", a);

     if (m == n1)
        {
            printf("The given value is an Armstrong number. ");
        }
    else
    {
        printf("The given value is not an Armstrong number.");
    }
    return 0;
     }
