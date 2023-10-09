/*  C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3) */
#include <stdio.h>
int main()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("The first power: %d\n", n);

    printf("The second power: %d\n", n*n);

    printf("The third power: %d\n", n*n*n);

    return 0;
}
