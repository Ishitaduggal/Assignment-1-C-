/* C program to Calculate the Factorial of a Given Number */
#include <stdio.h>
int main()
{
    int n, f=1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n>1)
    {
        f = f*n;
        n--;
    }
    printf("The factorial of %d", n);
    printf(" is: %d", f);

    return 0;
}
