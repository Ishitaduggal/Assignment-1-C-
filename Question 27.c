/*  Fibonacci Series Program in C Using DO While Loop */
#include <stdio.h>
int main()
{
    int n, i=0, j=1, s, c=1;

    printf("Enter limit: ");
    scanf("%d", &n);

    printf("%d,%d,",i,j);
    do
    {
     s = i+j;
     printf("%d,", s);
     i=j;
     j=s;
     c++;
    }
    while (c<=n-2);
    return 0;
}
